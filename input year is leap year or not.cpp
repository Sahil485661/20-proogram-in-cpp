#include<iostream>
using namespace std;
class leap
{
    int year;
public:
    void input ()
    {
        cout<<"Enter your year:";
        cin>>year;
    }
    void output()
    {
        if(year%400==0)
        {
            cout<<"The year is leap year";
        }
        else if(year%4==0&&year%100!=0)
        {
            cout<<"The year is leap year";
        }
        else
        {
            cout<<"The year is not leap year";
        }
    }
};
int main()
{
    leap obj;
    obj.input();
    obj.output();
    return 0;
}