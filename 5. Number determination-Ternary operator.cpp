// Ternary Operator ( ? )

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>> n;

    cout<< (n>= 0 ? "Number is POSITIVE" : "Number is NEGATIVE") << endl; //simple ifElse converted into ternary
    return 0;
}
