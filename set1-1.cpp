#include <iostream>
using namespace std;
int main()
{
 int num;
 
 cout<<"Enter a number : ";
 
 cin>>num;
 
 if(1<=num<=100000)
  if(num%2==0)
   cout<<"Number is even";
 else
   cout<<"Number is odd";
 
} 
