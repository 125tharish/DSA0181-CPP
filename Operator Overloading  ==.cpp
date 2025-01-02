#include <iostream>
class Employee {
private:
    double salary;
public:
    Employee(double s) : salary(s) {}
    bool operator==(const Employee& other) {
        return salary == other.salary;
    }
    void display() {
        std::cout << "Salary: " << salary << std::endl;
    }
};
int main() {
    Employee e1(50000.0);
    Employee e2(50000.0);
    Employee e3(60000.0);
    if (e1 == e2) {
        std::cout << "e1 and e2 have the same salary" << std::endl;
    } else {
        std::cout << "e1 and e2 have different salaries" << std::endl;
    }
    if (e1 == e3) {
        std::cout << "e1 and e3 have the same salary" << std::endl;
    } else {
        std::cout << "e1 and e3 have different salaries" << std::endl;
    }
    return 0;
}
