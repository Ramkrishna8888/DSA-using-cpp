//STRING PALINDROME BANA
#include<iostream>
#include<cstring>
using namespace std;
char* palin(char ch[], int n)
{

int start = 0;
int end = n-1;
while (start<end)
{
swap(ch[start],ch[end]);
   start++;
   end--;
}
return ch;
}
int main()
{
   char ch[]="mam";
   cout<<"Given string is : "<<ch<<endl;
   int size = strlen(ch);
   string x = ch;
   char* temp = palin(ch,size);
   if(x==temp)
   {
    cout<<"The string is palindrome"<<endl;
   }
   else
   {
    cout<<"The string is not a palindrome"<<endl;
   }
    return 0;
}