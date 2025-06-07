// Butterfly Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n : ";
    cin >> n;

    //Upper Part
    
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";   //Stars on LHS
        }
        for(int j = 1; j <= 2*(n-i); j++)   //odd spacing
        {
            cout << " "; // Space between
        }
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";   //stars on RHS
        }
        cout << endl;
    }
    
    //Bottom Part
    
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";   // Stars on LHS
        }
        
        for(int j = 1; j <= 2*(n-i); j++) 
        {
            cout << " ";    // Space between
        }
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";   //stars on RHS
        }
        
        cout << endl;
    }

    return 0;
}