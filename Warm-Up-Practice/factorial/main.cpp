#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout << "Enter a Number: ";
    cin >> n;
    if(n<0)
    {
        cout<< "Invalid Input!! Please Enter Correct Input!!"<< endl;
    }
    else
    {
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " is = " << fact;
    }
    return 0;
}
