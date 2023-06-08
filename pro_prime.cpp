#include<iostream>
using namespace std ;
int main()
{
    int num;

    cout<<"Enter a Number : ";
    cin>>num;

    bool flag = true ;

    for (int i = 2; i <=num-1; i++)
    {
        if(num%i==0)
        {
            flag = false ;
            break;
        }
    }
    
    if(flag)
    {
        cout<<"It's a Prime Number ";
    }
    else
    cout<<"It's not a Prime Number ";



    return 0 ;
} 
