#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	int c;
	int n;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
