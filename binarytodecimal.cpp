#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int numbin,sum=0,p=0;

    cout<<"Enter the binary of a Number : ";
    cin>>numbin;

    while(numbin>0)
    {
        int lastdig = numbin % 10;

        sum = lastdig + pow(2,p);

        p++;

        numbin/10;
    }
    
    cout<<sum;

    return 0 ;
} 
