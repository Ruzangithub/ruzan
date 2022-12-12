#include<iostream>

using namespace std;
int main()
{
	int a[100],i,n,sum=0;
	cout<<"enter the size of the array";
	cin>>n;
	cout<<"enter the elements of the array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout<<"\n The sum is :"<<sum;
	return 0;
}