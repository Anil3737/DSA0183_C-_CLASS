#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(std::string name, int id, double salary)
        : name(name), id(id), salary(salary) {}
    std::string getName() const { return name; }
    void setName(const std::string& newName) { name = newName; }
    int getID() const { return id; }
    void setID(int newID) { id = newID; }
    double getSalary() const { return salary; }
    void setSalary(double newSalary) { salary = newSalary; }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(std::string name, int id, double salary, std::string department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}

    // Getter and Setter for Department
    std::string getDepartment() const { return department; }
    void setDepartment(const std::string& newDepartment) { department = newDepartment; }

    // Getter and Setter for Bonus
    double getBonus() const { return bonus; }
    void setBonus(double newBonus) { bonus = newBonus; }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(std::string name, int id, double salary, std::string specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    // Getter and Setter for Specialty
    std::string getSpecialty() const { return specialty; }
    void setSpecialty(const std::string& newSpecialty) { specialty = newSpecialty; }

    // Getter and Setter for Hours
    int getHours() const { return hours; }
    void setHours(int newHours) { hours = newHours; }
};

int main() {
    Manager manager("Vivek", 101, 80000.0, "Sales", 5000.0);
    std::cout << "Manager: " << manager.getName() << " ID: " << manager.getID() << " Salary: $" << manager.getSalary() << std::endl;
    std::cout << "Department: " << manager.getDepartment() << " Bonus: $" << manager.getBonus() << std::endl;

    Engineer engineer("Jane Smith", 201, 75000.0, "Software Development", 40);
    std::cout << "\nEngineer: " << engineer.getName() << " ID: " << engineer.getID() << " Salary: $" << engineer.getSalary() << std::endl;
    std::cout << "Specialty: " << engineer.getSpecialty() << " Hours: " << engineer.getHours() << " hrs" << std::endl;

    return 0;
}

