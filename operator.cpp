//Write a Program that outputs whether the number the is divisible by two or two or both !
#include<iostream>
using namespace std ;
int main()
{
int num1;
cout<<"Enter the Number : ";
cin>>num1;
if(num1%2 == 0)
{
    cout<<"The Number is Divisible by 2 \n";
}
else if(num1%3 == 0)
{
    cout<<"The Number is Divisible by 3 \n";

}
else if (num1%2==0 && num1%3==0)
{
    cout<<"The Number is Divisible by both 2 and 3 \n";
}
else 
{
    cout<<"Invalid Number \n";
}
    return 0 ;
} 