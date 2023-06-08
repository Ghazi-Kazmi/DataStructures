#include<iostream>
using namespace std;
int main()
{
	int num,i;

	cout<<"Enter the Number you want to check if it is prime or not : ";
	cin>>num;
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"It is not a prime Number ";
			break;
		}
	}
	
   if(i==num)
	{
        cout<<"The Number is Prime : ";
	}
	return 0;
}
