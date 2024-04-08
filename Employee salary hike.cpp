#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string designation;
    float salary;
public:
    Employee(string n, int _id, string desig, float sal) : name(n), id(_id), designation(desig), salary(sal) {}
    void displayDetails() {
        cout << "Name: " << name << ", ID: " << id << ", Designation: " << designation << ", Salary: " << salary << endl;
    }
    void giveSalaryHike() {
        salary *= 1.1; // Increase salary by 10%
        cout << "Salary hike given. New salary: " << salary << endl;
    }
};

int main() {
    Employee emp("John", 1001, "Manager", 50000);
    emp.displayDetails();
    emp.giveSalaryHike();
    return 0;
}