#include<iostream>
using namespace std ;
int main()
{
    int num,j;

    cout<<"Enter the Number of Rows : ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for( j=i;j=num-1;j++)
        {
            cout<<" ";
        }
        for(int k=1; k= (i*2)-1;k++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0 ;
} 
