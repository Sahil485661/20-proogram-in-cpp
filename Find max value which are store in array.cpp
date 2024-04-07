#include<iostream>
using namespace std;
int main()
{
    int a[5]= {4,8,1,31,2};
    int ans=4;
    for(int i=0; i<5; i++)
    {
        if(ans<a[i])
        {
            ans=a[i];
        }
    }

    cout<<"Max number is : "<<ans<<endl;

}