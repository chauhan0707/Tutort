#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the size of an array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==i+1)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
