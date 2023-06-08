#include<iostream>
#include<math.h>
#include<cmath>
using namespace std ;
int main()
{
     int num,numh,sum=0;

      cout<<"Enter : ";
      cin>>num;
      numh = num ;
      while(num>0)
     {
        int lastdig = num%10;

        sum = sum + pow(lastdig,3);
        num = num/10;

     }

      if(sum == numh)
      {
         cout<<numh<<" is an Armstrong Number ! ";
      }
      else
      {
         cout<<numh<<" is not an Armstrong Number !";
      }

      return 0 ;
} 
