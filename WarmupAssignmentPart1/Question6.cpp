#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array:";
    cin >> n;

    int arr[n], rev_arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        rev_arr[n-i-1] = arr[i]; 
    }

    bool is_perfect = true;
    for(int i=0; i<n; i++) {
        if(arr[i] != rev_arr[i]) {
            is_perfect = false;
            break;
        }
    }

    if(is_perfect) {
        cout << "PERFECT";
    } else {
        cout << "NOT PERFECT";
    }

    return 0;
}

