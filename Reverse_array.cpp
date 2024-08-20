#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int i = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int start = 0;
    int end = size - 1;
   /* while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }*/
    for (i = 0; i < size/2; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    

    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}