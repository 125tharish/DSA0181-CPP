#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "This is a person." << endl;
    }
};

class Employee : virtual public Person {
public:
    void showEmployee() {
        cout << "This is an employee." << endl;
    }
};

class Student : virtual public Person {
public:
    void showStudent() {
        cout << "This is a student." << endl;
    }
};

class Intern : public Employee, public Student {
public:
    void showIntern() {
        cout << "This is an intern." << endl;
    }
};

int main() {
    Intern intern;
    intern.showPerson();
    intern.showEmployee();
    intern.showStudent();
    intern.showIntern();

    return 0;
}
