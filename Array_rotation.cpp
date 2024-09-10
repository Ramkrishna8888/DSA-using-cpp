#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int> &arr, int start, int end)
{
   while (start<end)
   {
      swap(arr[start], arr[end]);
         start++;
         end--;
   }
}

void Rotation(vector<int> &arr, int size, int rotate)
{
    // handle if rotate size is more than the array's size
    rotate = rotate%size;
    
    //pehle reverse karenge array ko
    Reverse(arr, 0, size-1);

    // Abb given index se rotate karayenge 
    Reverse(arr, 0, rotate-1);

    //Abb given index tak value rotate ho gayi hai bachi hui values ko wapas sahi order mein swap kr dena h
    Reverse(arr, rotate, size-1);
}

int main()
{
   int k,i,n=0;
   cout<<"Enter the size of array "<<endl;
   cin>>n;
   vector<int> arr(n);
   for (i = 0; i < n; i++)
   {
      cin>>arr[i];
   }

   cout<<"Enter the time of rotation to be performed "<<endl;
   cin>>k;

  Rotation(arr, n, k);
   cout<<"Array after "<<k<<" rotation"<<endl;
   for (i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;   
}
