#include<iostream>
using namespace std ;
int main()
{
    int div,num1;

    cout<<"Enter the Number : ";
    cin>>num1;


    for (div = 2; div < num1; div++)
  {
    if(num1%div == 0)
  {

  cout<<"IT is not a prime number " ; 
  }

  cout<<"It is a Prime Number "; 

  }

    return 0 ;

} 
