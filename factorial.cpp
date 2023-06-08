#include<iostream>
using namespace std ;
int main()
{
    int num,facto=1;

    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=2;i<=num;i++)
    {
        facto = facto*i ;
    }

    cout<<"The Factorial of "<<num<<" is "<<facto;

    return 0 ;
} 