#include<iostream>
using namespace std;
void fun(char ch[], int size)
{
    int start = 0;
    int end = size-1;
    while (start<end)
    {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end]= temp;
        start++;
        end--;
    }
    cout<<"The reverse of the string is : "<<ch<<endl;
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
fun(ch,count);
}