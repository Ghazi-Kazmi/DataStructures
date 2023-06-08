#include<iostream>
#include<cmath>
using namespace std ;

bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{ 
    int num1,num2;

    cout<<"Enter the Range of Two Positive Numbers ! : ";
    cin>>num1>>num2;
    for(int i = num1;i<=num2; i++)
    {
        if(isPrime(i))
        {
            cout<<i;
        }
    } 
    return 0 ;
}