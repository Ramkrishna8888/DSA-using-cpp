// SIMPLE PROGRAM TO UNDERSTAND THE SET DATA STRUCTURE
#include<iostream>
 #include<set>
 using namespace std;
 int main()
 {
     set<int> unique_num;
     int n,num=0;

    cout<<"Enter the size "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>num;
        unique_num.insert(num);
    }

    cout<<"Unique elements are "<<endl;

    for(int it : unique_num)
    {
        cout<<it<<" ";
    }
   return 0;
 }
