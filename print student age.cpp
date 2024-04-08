#include <iostream>
using namespace std;

class Student {
  private:
    int age;

  public:

    Student() : age(16) {}

    void getAge() {
      cout << "Student Age is = " << age << endl;
    }
};

int main() {

  
  Student* ptr = new Student();

  
  ptr->getAge();

  
  delete ptr;

  return 0;
}