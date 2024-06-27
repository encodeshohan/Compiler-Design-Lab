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

    cout << "Enter " << s << " elements into the array:";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }


    int minVal = arr[0];
    int maxVal = arr[0];


    for(int i = 1; i < s; i++)
    {
        if(arr[i] < minVal)
            minVal = arr[i];

        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;

    return 0;
}
