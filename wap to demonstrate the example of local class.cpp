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
}
