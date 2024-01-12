#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass myObject(42);
    std::cout << "Contents of myObject: " << myObject << std::endl;

    return 0;
}

