// Determining the number entered is POSITIVE NEGATIVE NUMBER

#include<iostream>

using namespace std;
int main()
{
    int n ;
    cout <<"Enter the number : ";
    cin>> n;

    if( n>= 0)
    {
        cout << "Number is a Positive number";
    }
    else
    {
        cout<<"Number is a Negative number";
    }

    return 0;
}
