#include <iostream>

using namespace std;
class division
{
    int num1;
    public:
    void input()
    {
        cout<<"Enter the number: ";
        cin>>num1;
    }
    void output()
    {
        if(num1%3==0)
        {
            cout<<"The number is divisible by 3";
        }
        else
        {
            cout<<"The number is not divisible by 3";
        }
    }
};
int main()
{
    division obj;
    obj.input();
    obj.output();
    return 0;
}
