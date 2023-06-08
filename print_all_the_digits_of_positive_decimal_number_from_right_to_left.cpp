#include<iostream>
using namespace std ;
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;

while (num>0)
{
    int rem = num%10;
    cout<<rem<<endl;
    num = num / 10 ;

}
    return 0 ;
}