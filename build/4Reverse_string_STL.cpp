#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Reverse(char* ch,int size)
{
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(ch[start++], ch[end--]);
    } 
}
int main()
{
    int size;
    cout<<"Enter the size of character array"<<endl;
       cin>>size;
    char ch[size];
    cout<<"Enter the string "<<endl;
      cin>>ch; 
    int count =0;
for (int i = 0; ch[i]!='\0'; i++)
{
     count++;
}
cout<<"The size of the string is : "<<count<<endl;
cout<<"Before : "<<ch<<endl;
Reverse(ch,count);
cout<<"After : "<<ch<<endl;
}