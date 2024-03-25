#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> 
#include <ctime>   
using namespace std;
struct User {
    string username;
    string password;
};
bool containsNumber(const string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (isdigit(str[i])) {
            return true;
        }
    }
    return false;
}
bool containsSpecialChar(const string& str) {
    string specialChars = "!@#$%^&*()-_+=~`[]{}|;:,.<>?";
    for (size_t i = 0; i < str.length(); ++i) {
        if (specialChars.find(str[i]) != string::npos) {
            return true;
        }
    }
    return false;
}
void registerUser() {
    User user;
    cout << "Enter username: ";
    cin >> user.username;
    while (true) {
        cout << "Enter password (at least 1 number, 1 character, 1 special character): ";
        cin >> user.password;
        if (user.password.length() < 6) {
            cout << "Password must be at least 6 characters long." << endl;
        } else if (!containsNumber(user.password)) {
            cout << "Password must contain at least one number." << endl;
        } else if (!containsSpecialChar(user.password)) {
            cout << "Password must contain at least one special character." << endl;
        } else {
            break; 
        }
    }
    ofstream outFile("users.txt", ios::app);
    if (outFile.is_open()) {
        outFile << user.username << " " << user.password << endl;
        outFile.close();
        cout << "Registration successful!" << endl;
    } else {
        cout << "Error: Unable to open file." << endl;
    }
}
bool loginUser() {
    User user;
    cout << "Enter username: ";
    cin >> user.username;
    cout << "Enter password: ";
    cin >> user.password;
    ifstream inFile("users.txt");
    if (inFile.is_open()) {
        string username, password;
        while (inFile >> username >> password) {
            if (username == user.username && password == user.password) {
                cout << "Login successful!" << endl;
                inFile.close();
                return true;
            }
        }
        cout << "Invalid username or password." << endl;
        inFile.close();
    } else {
        cout << "Error: Unable to open file." << endl;
    }
    return false;
}
void showUserList() {
    ifstream inFile("users.txt");
    if (inFile.is_open()) {
        string username, password;
        while (inFile >> username >> password) {
            cout << "Username: " << username << ", Password: " << password << endl;
        }
        inFile.close();
    } else {
        cout << "Error: Unable to open file." << endl;
    }
}
void searchUser() {
    string username;
    cout << "Enter username to search: ";
    cin >> username;   
    ifstream inFile("users.txt");
    if (inFile.is_open()) {
        string foundUsername, password;
        bool found = false;
        while (inFile >> foundUsername >> password) {
            if (foundUsername == username) {
                cout << "Username: " << foundUsername << ", Password: " << password << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "User not found." << endl;
        }
        inFile.close();
    } else {
        cout << "Error: Unable to open file." << endl;
    }
}
void deleteUser() {
    string username;
    cout << "Enter username to delete: ";
    cin >> username;    
    ifstream inFile("users.txt");
    ofstream tempFile("temp.txt", ios::out);
    if (inFile.is_open() && tempFile.is_open()) {
        string foundUsername, password;
        bool found = false;
        while (inFile >> foundUsername >> password) {
            if (foundUsername != username) {
                tempFile << foundUsername << " " << password << endl;
            } else {
                found = true;
            }
        }
        inFile.close();
        tempFile.close();
        remove("users.txt");
        rename("temp.txt", "users.txt");
        if (found) {
            cout << "User deleted successfully." << endl;
        } else {
            cout << "User not found." << endl;
        }
    } else {
        cout << "Error: Unable to open file." << endl;
    }
}
int main() {
    int choice;
    do {
        cout << "1. Register\n2. Login\n3. Show User List\n4. Search User\n5. Delete User\n6. Exit\nEnter your choice: ";
        cin >> choice;       
        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                }
                break;
            case 3:
                showUserList();
                break;
            case 4:
                searchUser();
                break;
            case 5:
                deleteUser();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);
    return 0;
}

