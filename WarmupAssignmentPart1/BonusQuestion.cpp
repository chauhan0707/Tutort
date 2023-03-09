#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n/2; i++) {
        leftSum += arr[i];
    }
    for (int i = n/2; i < n; i++) {
        rightSum += arr[i];
    }

    
    int minVal = abs(leftSum - rightSum);

    cout << "Minimum Value: " << minVal << endl;

    return 0;
}

