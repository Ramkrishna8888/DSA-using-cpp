// Online C++ compiler to run C++ program online
//153 = 1*1*1 + 5*5*5 + 3*3*3 
#include <iostream>
#include<string>
using namespace std;
int main() {
    int  n;
    int temp2 = 0;
    cin>>n;
    int temp4 = n;
    int z = to_string(n).length();
    for(int i = 0; i<z; i++)
       {
        int temp1 = 1, temp3 =0;
           temp3 = n%10;
           n= n/10;
           for(int j = 0; j<z; j++)
           {
               temp1 = temp1 * temp3;
           }
           temp2 = temp2 + temp1;
       }
       cout<<temp2<<endl;
       if(temp4==temp2)
           cout<<"No. is an armstrong";
       else
       cout<<"Not an armstrong";
    return 0;
}