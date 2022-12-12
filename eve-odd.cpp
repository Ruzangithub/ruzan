#include<iostream>

using namespace std;
int main()
{
	int a[10],i,eve=0, odd=0;
	cout<<"enter the element of array";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			eve++;
		else
			odd++;
	}
	cout<<"\n Total number of even number is "<<eve;
	cout<<"\n Total number of odd number is "<<odd;
	return 0;
	
}