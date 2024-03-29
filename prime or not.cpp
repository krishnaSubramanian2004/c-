#include<iostream>
using namespace std;

int main()
{
	int n,count=1,i;
	cout<<"enter the value of n:";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<n<<" is a prime number";
	}
	else
	{
		cout<<n<<" is not a prime number";
	}

}
