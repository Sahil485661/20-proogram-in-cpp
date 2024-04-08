
  

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
/*
#include <iostream> 
 using namespace std; 
 void testFunction(void) 
 { 
     class Test1 { 
     private: 
         int num; 
  
     public: 
         void setValue(int n) 
         { 
             num = n; 
         } 
         int getValue(void) 
         { 
             return num; 
         } 
     }; 
     cout << "Inside testFunction" << endl; 
  
     Test1 T1; 
     T1.setValue(100); 
     cout << "Value of Test1's num: " << T1.getValue() << endl; 
 } 
  
  
 int main() 
 { 
     class Test2 { 
     private: 
         int num; 
  
     public: 
         void setValue(int n) 
         { 
             num = n; 
         } 
         int getValue(void) 
         { 
             return num; 
         } 
     }; 
     cout << "Calling testFunction" << endl; 
     testFunction(); 
     cout << "Inside main()" << endl; 
     Test2 T2; 
     T2.setValue(200); 
     cout << "Value of Test2's num: " << T2.getValue() << endl; 
  
     return 0; 
 }*/
 /* #include<iostream>
#include<memory>
using namespace std;
int main()
{
    shared_ptr<int>ptr1(new int (50));
    shared_ptr<int>ptr2=ptr1;
    cout<<ptr1.use_count()<<endl;
    cout<<ptr2.use_count()<<endl;
    ptr1.reset();
    cout<<"ptr1:"<<ptr1.use_count()<<endl;
    cout<<"ptr2:"<<ptr2.use_count()<<endl;
    return 0;
    }*/