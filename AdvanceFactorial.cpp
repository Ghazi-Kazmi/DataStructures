#include<iostream>
using namespace std ;
int main()
{
    int num,fact=1;

    cout<<"Enter a Number : ";
    cin>>num;

    cout<<num<<" ! = ";

    for(int i = num;i>0;i--)
    {
        fact *= i;
        cout<<i;

        if(i>1)
        {
            cout<<" * ";
        }
        
    }

    cout<<" = "<<fact;

    return 0 ;
} 
