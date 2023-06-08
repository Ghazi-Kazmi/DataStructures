#include<iostream>
using namespace std ;
int main()
{
    int num;

    cout<<"Enter : ";
    cin>>num;

    for(int i =0;i<num;i++)
    {
        for(int j=0;j<num*2;j++)
        {
            if(i+j<=num-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            if(i+num<=j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=num;i>=0;i--)
    {
        for(int j=num*2;j>=0;j--)
        {
            if(i+j>num-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            if(i+num>=j)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0 ;
} 
