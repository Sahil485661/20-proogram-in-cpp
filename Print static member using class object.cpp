#include <iostream>  
using namespace std;  
class Member  
{  
  private:  
static int A;  
static int B;  
static int C;  
public:  
static void disp ()  
{  
cout << " The value of the A is: " << A << endl;  
cout << " The value of the B is: " << B << endl;  
cout << " The value of the C is: " << C << endl;  
}  
};  
int Member :: A = 20;  
int Member :: B = 30;  
int Member :: C = 40;  
int main ()  
{  
Member mb;  
cout << " Print the static member through object name: " << endl;  
mb. disp();  
cout << " Print the static member through the class name: " << endl;  
Member::disp();  
return 0;  
}