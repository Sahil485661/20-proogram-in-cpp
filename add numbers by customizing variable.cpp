#include<iostream>
using namespace std;

class jod
{
    static const int MAX_SIZE = 100; 
    int size;
    int a[MAX_SIZE]; 
    int ans = 0;

public:
    void input()
    {
        cout << "Enter the size of variables (up to " << MAX_SIZE << "): ";
        cin >> size;

        if (size > MAX_SIZE) {
            cout << "Size exceeds maximum limit. Please enter a smaller size." << endl;
            return;
        }

        cout << "Enter the numbers: ";
        for(int i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < size; i++)
        {
            ans += a[i]; 
        }

        cout << "The addition of numbers is: " << ans << endl;
    }
};

int main()
{
    jod obj;
    obj.input();
    return 0;
}
