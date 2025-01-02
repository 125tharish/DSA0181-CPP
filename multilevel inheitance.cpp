#include <iostream>
#include <string>
class Grandparent {
protected:
    std::string familyName;
public:
    Grandparent(const std::string& fname) : familyName(fname) {}
    void displayGrandparentInfo() const {
        std::cout << "Family Name: " << familyName << std::endl;
    }
};
class Parent : public Grandparent {
protected:
    std::string occupation;
public:
    Parent(const std::string& fname, const std::string& job) : Grandparent(fname), occupation(job) {}
    void displayParentInfo() const {
        displayGrandparentInfo();
        std::cout << "Occupation: " << occupation << std::endl;
    }
};
class Child : public Parent {
private:
    int age;
public:
    Child(const std::string& fname, const std::string& job, int a) : Parent(fname, job), age(a) {}
    void displayChildInfo() const {
        displayParentInfo();
        std::cout << "Age: " << age << std::endl;
    }
};
int main() {
    Child child("Smith", "Engineer", 15);
    child.displayChildInfo();
    return 0;
}
