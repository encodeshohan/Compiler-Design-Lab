#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter First Integer: ";
    cin >> num1;

    cout << "Enter Second Integer: ";
    cin >> num2;

    ofstream outFile("values.txt");
    if (outFile.is_open()) {
        outFile << num1 << " " << num2;
        outFile.close();
        cout << "Values successfully stored in values.txt." << endl;
    } else {
        cerr << "Unable to open file 'values.txt' for writing." << endl;
        return 1;
    }

    ifstream inFile("values.txt");
    if (inFile.is_open()) {
        int readNum1, readNum2;
        inFile >> readNum1 >> readNum2;
        inFile.close();


        int sum = readNum1 + readNum2;


        ofstream outFile2("sum.txt");
        if (outFile2.is_open()) {
            outFile2 << sum;
            outFile2.close();
            cout << "Sum successfully stored in sum.txt." << endl;
        } else {
            cerr << "Unable to open file 'sum.txt' for writing." << endl;
            return 1;
        }
    } else {
        cerr << "Unable to open file 'values.txt' for reading." << endl;
        return 1;
    }

    return 0;
}
