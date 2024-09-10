//STRING PALINDROME BANA
#include<iostream>
#include<cstring>
using namespace std;
void palin(char ch[], int n)
{
    cout<<"Before : "<<ch<<endl;
   string x = ch;
int start = 0;
int end = n-1;
while (start<end)
{
swap(ch[start],ch[end]);
   start++;
   end--;
}
   cout<<"ch is "<<ch<<endl;
   if(x==ch)
   {
    cout<<"The string is palinndrome"<<endl;
   }
   else
   {
    cout<<"The string is not a palindrome"<<endl;
   }
}
int main()
{
   char ch[]="ram";
   int size = strlen(ch);
   cout<<"Size is "<<size;
   palin(ch,size);
    return 0;
}