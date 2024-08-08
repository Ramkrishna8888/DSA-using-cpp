#include <bits/stdc++.h>
using namespace std;

int Maximum(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
           max = arr[i];
          //  or use predefined function
            //maxx = max(maxx,arr[i]);
            
    }
    return max;
    //return maxx
}

int Minimum(int arr[],int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
         min=arr[i];
    }
    return min;
    
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The maximum element is " << Maximum(arr, size) << endl;
    cout << "The minimum element is " << Minimum(arr, size) << endl;

    return 0;
}
