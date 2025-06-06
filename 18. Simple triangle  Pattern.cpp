// Simple Triangle Pattern 

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout <<" Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)  //i+1 means printing 1 more * in each line
        {                               // Every time same value of i+1 will be printed in upcooming rows
            cout << " * ";
        }
        cout << endl ;
    }
    return 0;    

}