#include <iostream>

using namespace std;

int main()
{
	char name[]="Sahil Vishwakarma";
	char *ptr=name;
	
	while(*ptr!=NULL){
		cout<<*ptr;
		ptr++;
	}
	
	cout<<endl;
	return 0;	
}
