#include <iostream>
 using namespace std;
 
 int str_len(char *a)
 {
     int i=0;
     while (a[i]!='\0')
     {
         i++;
     }
     return i;
 }
 
 bool is_palindrome(char *a, int length)
 {
     int i=0;
     int j = length-1;
     
     while (i<j)
     {
         if (a[i] != a[j])
         {
             return false;
         }
         i++;
         j--;
     }
     return true;
 }
 
 int main()
 {
     char a[100];
     cin.getline(a,100);
     
     int length;
     length = str_len(a);
     if (is_palindrome(a,length))
     {
         cout << a <<" is a palindrome!";
     }
     else
     {
         cout << "a is not a palindrome";
     }
 }