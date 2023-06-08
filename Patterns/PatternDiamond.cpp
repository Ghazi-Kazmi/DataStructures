#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"Enter : ";
    cin>>n;

    for(int i=n-2;i<=n+2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0 ;
} 