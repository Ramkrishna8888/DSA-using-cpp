#include<iostream>
using namespace std;
char* Reverse(char ch[], int count)
{
     int x =count;
     for (int i = 0; i<x/2; i++)
    {
        int start = 0;
        int end = count-1;
       if(start<end)
       {
       char temp = ch[start];
       ch[start]=ch[end];
       ch[end] = temp;
        start++;
        end--;
       }
    }
    cout<<"After reverse : "<<ch<<endl;
    return ch;
}
int main()
{
    char ch[10];
    cin>>ch;
    string temp = ch;
    int count=0;
// FINDING COUNT FOR USING IT TO REVERSE THE ARRAY
    for (int i = 0; ch[i]!='\0'; i++)
    {
        count++;
    }
    cout<<"Size of string : "<<count<<endl;
    cout<<"Before reverse : "<<ch<<endl;
    char* x = Reverse(ch,count);
    cout<<"After reverse (Through main) : "<<x<<endl;
// Logic for pailindrome
    if (temp==x)
        cout<<"The given string is a palindrome as well";
    else
        cout<<"Given string is not a palindrome";
return 0;
}