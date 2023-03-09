#include<iostream>
using namespace std;
int main()
{
	int n,i,a;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Index number:";
	cin>>i;
	a=i;
	int arr[n];
	cout<<"Enter the values:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Your element: "<<arr[a];
	return 0;
}
