// Pyramid Pattern

#include<iostream>
using namespace std;

int main()
{
    int n ;

    cout << "Enter n : ";
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        //Spacing : n-i-1

        for (int j = 0; j < n-i-1; j++)
        {
            cout << "  ";
        }

        //numbers on LHS

        for (int j = 1; j <=i+1; j++)
        {
            cout <<" ";
            cout << j ;
        }
        
        //numbers on RHS

        for (int  j = i; j > 0; j--)
        {
            cout << " ";
            cout << j;
        }
        cout << endl;
           
    }
    return 0;
}
