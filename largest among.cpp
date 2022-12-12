//wAP to finf the largest number in an array
#include<iostream>

using namespace std;
int main()
{
	int num[100],i,temp=0,n=10;
	cout<<"Enter the element of array : \n";
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		if(temp<num[i])
		{
			temp=num[i];
		}
	}
	cout<<"\n The largest among the elemet is :"<<temp;
	return 0;
}