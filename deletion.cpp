//WAP to delete the number in the elements of array
#include<iostream>

using namespace std;
int main()
{
	int a[100],i,n,pos;
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"\n Enter the element of the array :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position of the array you want to delete :";
	cin>>pos;
	if(pos<0 || pos>n)
	{
		cout<<"Invalid position!!";
	}
	else
	{
		for(i=pos;i<n;i++)
		{
			a[i]=a[i+1];
		}
	}
	cout<<"\n  The array after the delete process is :";
	for(i=0;i<n-1;i++)
	{
		cout<<"\t"<<a[i]<<"\t";
	}
	return 0;
}