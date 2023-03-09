#include<iostream>
using namespace std;
int main()
{
	int i,n,a,sum=0;
	cout<<"Enter no. of integers: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		sum=sum+a;
	}
	cout<<sum;
	return 0;
}
