#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int size = 0;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int mini = arr[0];
    int temp = INT_MAX;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < mini)
        {
            temp = mini;  // Store the previous smallest as the second smallest
            mini = arr[i];
        }
        else if (arr[i] > mini && arr[i] < temp)
        {
            temp = arr[i];  // Update temp only if it's between mini and the current temp
        }
    }
        cout<<"First Smallest no : "<<mini<<endl;  
        cout << "Second Smallest no : " << temp << endl;

    return 0;
}
