#include <iostream>
using namespace std;
int main() 
{
	int m,n;
	cin>>m;
	cin>>n;
	for(int i=m+1;i<n;i++)
	{
	    if(i%2!=0)
	    {
	        cout<<i<<endl;
	    }
	}
	return 0;
}
