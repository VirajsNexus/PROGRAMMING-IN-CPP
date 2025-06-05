// Printing * pattern in 2-D

#include<iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 5; i++) //no. of columns
    {
        int n =10;
        for (int i = 1; i <= n; i++)  // no.of rows
        {
            cout << "*" ;
        }

        cout << endl;
    }

    return 0;
}