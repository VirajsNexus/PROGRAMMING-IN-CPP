// Inverted Triangle Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        //spacing Before

        for (int j = 0; j < i; j++)
        {
            cout << " ";   // i times spaces for each loop till n
        }
        
        for (int j = 0; j < n-i; j++)   // (n-i) numbers 
        {
            cout << (i+1); //new number in each row
        }
        cout << endl;
    }
    return 0;
}