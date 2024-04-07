#include<iostream>
using namespace std;
class simple
{
public:
    void interest(int p=5000,float t=2,float r=1.5)
    {
        float SI;
        SI=(p*t*r)/100;
        cout<<" Sinple Interest: "<<SI;
    }
};

int main()
{
    simple obj;
    obj.interest();
    return 0;
}