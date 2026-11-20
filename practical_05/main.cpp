#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}
    void showPerson() const {
        std::cout << "Name: " << name << " | Age: " << age << "\n";
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    Student(std::string n, int a, int r) : Person(n, a), rollNo(r) {}
    void showStudent() const {
        showPerson();
        std::cout << "Roll No: " << rollNo << "\n";
    }
};

class GraduateStudent : public Student {
private:
    std::string specialization;

public:
    GraduateStudent(std::string n, int a, int r, std::string spec)
        : Student(n, a, r), specialization(spec) {}

    void showGraduate() const {
        showStudent();
        std::cout << "Specialization: " << specialization << "\n";
    }
};

int main() {
    GraduateStudent grad("Anuj Helar", 20, 115, "Artificial Intelligence & Data Science");
    grad.showGraduate();
    return 0;
}