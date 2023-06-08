#include<iostream>
using namespace std ;
int main()
{
    int num;
    bool flag = 1;
    cout<<"Enter a Number : ";
    cin>>num;

    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            cout<<num<<" is not a Prime Number ! ";
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<num<<" is a Prime Number !";
    }

    return 0 ;
} 
