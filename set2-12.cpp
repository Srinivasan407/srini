#include <iostream>
using namespace std;


int main()
{
	 int num,r,sum=0,temp;

    cin>>num;


    temp=num;
    while(num!=0){
         r=num%10;
         num=num/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         cout<<"yes";
    else
         cout<<"no";

    return 0;
}
