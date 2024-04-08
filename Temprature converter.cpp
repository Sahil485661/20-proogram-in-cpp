#include <iostream>

using namespace std;



class convTemperature

{

public:

    float f, c;

    void getTemp(float value)

    {

        f = value;

    }

    

    void findTemp(convTemperature obj)

    {

        obj.c = ((obj.f - 32) * 5) / 9;

        cout << "\nThe temperature in celsius is: " << obj.c << "\n";

    }

};

int main()

{

    

    convTemperature obj1;

    obj1.getTemp(100);

    obj1.findTemp(obj1); 

    

    cout << "The value of c (object's copy) is: " << obj1.c << "\n"; 

    cout << "\n";

    return 0;

}
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