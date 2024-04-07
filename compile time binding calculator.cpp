#include<iostream> 
 using namespace std; 
 class calculator 
 { 
     int a=10,b=5; 
     void add() 
     { 
         cout<<"Addition="<<a+b<<endl; 
     } 
     void subtract() 
     { 
         cout<<"Subtract="<<a-b<<endl; 
     } 
     void mult() 
     { 
         cout<<"Multiplication="<<a*b<<endl; 
     } 
     void division() 
     { 
         cout<<"Division="<<a/b<<endl; 
     } 
     friend void show(calculator); 
 }; 
 void show(calculator obj) 
 { 
  
     obj.add(); 
     obj.subtract(); 
     obj.mult(); 
     obj.division(); 
  
 } 
 int main() 
 { 
     calculator obj; 
     show(obj); 
 }