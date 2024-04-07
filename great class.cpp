#include <iostream>
using namespace std;
class great
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<" enter the two number"<<endl;
        cin>>a>>b;
        
    }
    void output()
    {
        if(a>b)
        {
            cout<<"  greater number = "<<a;
        
        }
        else
        {
            cout<<" greater number = "<<b;
        }
    }
};

int main() 
{
    great obj;
    obj.input();
    obj.output();
    
    

    return 0;
}