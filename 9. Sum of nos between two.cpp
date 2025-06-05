// Calculate sum of n numbers between a and b using for loop

#include<iostream>
using namespace std;
 int main()
 {
    int a; // lowest number
    int b; //largest number
    int sum = 0 ;

    cout << "Enter first number : ";
    cin >> a ;
    

    cout << "Enter last number : ";
    cin >> b ;
    if (a>b)
    {
        cout << "ERROR!!!! FIRST NUMBER IS LARGER THAN LAST NUMBER";
    }
    
    for (int i = a; i <= b; i++ )
    {
        sum +=i;
    }
    cout << endl;
    cout << "The sum of numbers between " << a << " & " << b << " is : " << sum << endl;
    return 0;
 }