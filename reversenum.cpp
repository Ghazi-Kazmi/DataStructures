#include<iostream>
using namespace std ;
int main()
{
    int num,rev;
    cout<<"Enter a Number : ";
    cin>>num;

    while(num>0)
    {

        int lastdig = num%10;

        rev = rev*10 + lastdig;

        num=num/10;
    }

    cout<<"The Reverse Number will be "<<rev;

    return 0 ;
}