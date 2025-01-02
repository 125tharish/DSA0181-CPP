#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void displayPersonInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};
class Employee {
protected:
    int employeeID;
    std::string department;
public:
    Employee(int id, const std::string& dept) : employeeID(id), department(dept) {}
    void displayEmployeeInfo() const {
        std::cout << "Employee ID: " << employeeID << "\nDepartment: " << department << std::endl;
    }
};
class Manager : public Person, public Employee {
private:
    int teamSize;
public:
    Manager(const std::string& n, int a, int id, const std::string& dept, int tSize)
        : Person(n, a), Employee(id, dept), teamSize(tSize) {}
    void displayManagerInfo() const {
        displayPersonInfo();
        displayEmployeeInfo();
        std::cout << "Team Size: " << teamSize << std::endl;
    }
};
int main() {
    Manager manager("Alice", 35, 101, "Sales", 10);
    manager.displayManagerInfo();
    return 0;
}