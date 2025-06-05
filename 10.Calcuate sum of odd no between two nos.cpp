// Find sum of only odd numbers between two numbers using for loop

#include<iostream>
using namespace std;
 int main()
 {
    int a; // first number
    int b; // last number
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
        if (i%2 != 0)
        {
            
            sum += i;
        }
        
    cout << "Odd numbers between " <<a << " & "<<b << " are : ";
            cout << i ;    
    }
    
    cout << endl;
    cout << "The sum of numbers between " << a << " & " << b << " is : " << sum << endl;
    return 0;
 }
