// Square Pattern problem

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of columns or rows : ";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    return 0;
}