#include <iostream>
using namespace std;
class Sum {
  public:
    int add(int num1,int num2){
      return num1 + num2;
    }
    int add(int num1, int num2, int num3){
      return num1 + num2 + num3;
    }
};
int main(void) {
   
   Sum obj;

   
   cout<<obj.add(10, 30, 30)<<endl;

   
   cout<<obj.add(11, 23);
   return 0;
}
