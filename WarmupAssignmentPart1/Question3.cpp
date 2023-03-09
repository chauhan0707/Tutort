#include<iostream>
using namespace std;
int main()
{
	int n,i,X,count;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in sorted order: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element X: ";
	cin>>X;
	count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]<=X)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	cout<<"No. of elements equal to or less than X: "<<count;
	return 0;
	
}
