#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;

    if (s <= 0) {
        cout << "Enter a Positive Integer!";
        return 1;
    }

    int arr[s];

    cout << "Enter " << s << " elements into the array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < s; i++)
    {
        sum = sum + arr[i];
    }


    float avg = static_cast<float>(sum) / s;


    cout <<"Average of the Array: " << avg << endl;
    return 0;
}
