#include<iostream>
using namespace std;
int main()
{
	int a,b,num,i;
	
	cout<<"Enter the Range of two Numbers : ";
	cin>>a>>b;
	
	for(num=a;num<=b;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				break;
			}
		}
		if(i==num)
		{
			cout<<num<<" , ";
		}
	}
	return 0;
}