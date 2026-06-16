//Find missing number in array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter elements of an array: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int Sum = n * (n + 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missingNum = Sum - arrSum;

    cout << "Missing number is: " << missingNum << endl;

    return 0;
}