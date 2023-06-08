#include<iostream>
using namespace std ;
bool isPrime(int);
int main()
{
    int nums,numr;

    cout<<"Enter the Range : ";
    cin>>nums>>numr;

    for(int i = nums; i<=numr; i++)
    {
        if(isPrime)
        {
            cout<<i<<endl;
        }
    }

    return 0 ;
} 
bool isPrime(int x)
{
    for(int i = 2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return false;
        }

    }

    return true;

}
