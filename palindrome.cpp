#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    int numh = num ;
    while (num != 0) {
        int digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }
    if(numh == reversed)
    {
        cout<<numh<<" is a Palindrome Number ";
    }
    else
    {
        cout<<numh<<" is not a Palindrome Number ";
    }
    return 0;
}
