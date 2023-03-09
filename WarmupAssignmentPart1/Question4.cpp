#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Size of the array:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i=i+2)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
	
}
