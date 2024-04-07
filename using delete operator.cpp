#include <iostream>
using namespace std;
int main()
{
    int* ptr = new int(10);


    cout << "Value: " << *ptr << endl;

    delete ptr;

    cout << "Value after free: " << *ptr <<endl;


    ptr = nullptr;
    cout<<"Now the value:"<<ptr;

    return 0;
}
