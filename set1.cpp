#include <iostream>
using namespace std;
int main()
{
 int num;
  
 cout<<"Enter a number : ";
 cin>>num;
 if(1<=num<=100000)
   if(num>0)
   cout<<"Number is Positive";
 else if(num<0) 
   cout<<"Number is Negative";
 else
   cout<<"Number is Zero";
 
} 
