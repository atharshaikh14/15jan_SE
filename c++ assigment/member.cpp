#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        void read_person() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }
        void write_person() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student: public Person {
    protected:
        float percentage;
    public:
        void read_student() {
            read_person();
            cout << "Enter percentage: ";
            cin >> percentage;
        }
        void write_student() {
            write_person();
            cout << "Percentage: " << percentage << endl;
        }
};

class Teacher: public Person {
    protected:
        float salary;
    public:
        void read_teacher() {
            read_person();
            cout << "Enter salary: ";
            cin >> salary;
        }
        void write_teacher() {
            write_person();
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Student s;
    Teacher t;
    cout << "Enter student details:\n";
    s.read_student();
    cout << "Enter teacher details:\n";
    t.read_teacher();
    cout << "Student details:\n";
    s.write_student();
    cout << "Teacher details:\n";
    t.write_teacher();
    return 0;
}