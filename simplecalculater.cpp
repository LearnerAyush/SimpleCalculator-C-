#include <iostream>
using namespace std;
float calculation(float num1, float num2, int a)
{
    if (a == 1)
    {
        cout << "Addition is : ";
        return num1 + num2;
    }

    if (a == 2)
    {
        cout << "Subtration is : ";
        return num1 - num2;
    }

    if (a == 3)
    {
        cout << "multiplication is : ";
        return num1 * num2;
    }

    if (a == 4)
    { 
        
        
        cout << "Division is : ";
        return num1 / num2;
    }
}
int main()
{

    float num1, num2;
    int a;
    cout<<" WELCOME TO A SIMPLE CALCULATOR"<<endl;
    cout << "Enter the num1 :" << endl;
    cin >> num1;
    cout << "Enter the num2 :" << endl;
    cin >> num2;

    cout << "For Addition enter 1" << endl;
    cout << "For Subtraction enter 2" << endl;
    cout << "For Multiplication enter 3" << endl;
    cout << "For Divisoon enter 4" << endl;
    cin >> a;

    cout << calculation(num1, num2, a);

    return 0;
}