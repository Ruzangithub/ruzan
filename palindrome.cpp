//WAP to find weather the number is palindrome is nor not
#include<iostream>

using namespace std;
int main()
{
	int num, rem, temp, sum=0;
	cout<<"Enter the number :";
	cin>>num;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		cout<<"The number is palindrome \n";
	}
	else 
		cout<<"The number is not palindrome";
	return 0;
}