#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int i = 0; i < N; i++) {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3) {
            max3 = arr[i];
        }
    }
    cout << "The first maximum element is: " << max1 << endl;
    cout << "The second maximum element is: " << max2 << endl;
    cout << "The third maximum element is: " << max3 << endl;
    return 0;
}

