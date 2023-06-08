#include<iostream>
using namespace std ;
int main()
{
    int n,duh;
    cout<<"Enter : ";
    cin>>n;
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<" * ";
            } 
            else if(i<n-j || j<n-i)

            {
                 cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        } cout<<endl;
    }
    return 0 ;
} 
 