#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    sort(arr, arr+n);

   
    cout << "Elements in the array except the two greatest elements: ";
    for (int i = 0; i < n-2; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

