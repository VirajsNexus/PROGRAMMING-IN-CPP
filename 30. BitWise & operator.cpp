// Bitwise & operator

#include<iostream>
using namespace std ;

int main()
{
    int num1 , num2 ;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    cout << "The value of bitwise & operator for " << num1 <<" & " <<num2 << " is : " << (num1 & num2) ;
    return 0;
}