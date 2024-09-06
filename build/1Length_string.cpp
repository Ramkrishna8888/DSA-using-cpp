/*********IMPORTANT MESSAGE***********/
/*THIS IS WRONG APPROACH I KNOW THAT BUT I'VE DONE THIS JUST FOR THE PRACTICE AND TO KNOW THAT 
WHY WE DON'T HAVE TO USE "cin" FOR STRING, CIN WILL NOT WORK IF SPACE, TAB, ENTER WILL BE FOUND IN BETWEEN THE INDEX OF THE
 CHARACTER ARRAY */

 
/*#include<iostream>
using namespace std;
int main()
{
    char ch[10];
    int i=0;
    cout<<"Enter the string"<<endl;
    cin>>ch;
    int count = 0;
    while (ch[i]!=0)
    {
        count++;
        i++;
    }
    cout<<"The size of the string is "<<count;
}*/

/*OOPS APROACH 
PTA HAI BHAI GALAT HAI DOBARA JAANBOOKAR KAR RAHA
*/

#include<iostream>
using namespace std;
int StringLength(char ch[])
{
   int count=0;
     int i=0;
     while (ch[i]!=0)
     {
        count++;
        i++;
     }
    return count;
}
int main()
{
     char ch[10];
     cin>>ch;
     int x = StringLength(ch);
      cout<<"The length of the string is "<<x;
      return 0;
      }