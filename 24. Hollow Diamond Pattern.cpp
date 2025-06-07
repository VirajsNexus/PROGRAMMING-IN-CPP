// Hollow Diamond Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n : ";
    cin >> n;

    //Upper Part

    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        
        cout << "*"; // first star

        if (i != 0)
        {
            // Spaces
            for (int j = 0; j < 2*i-1; j++)  //odd no. of spacing in each upper part row
            {
                cout << " ";
            }
            
            cout << "*"; //second star
        }
        
        cout << endl;
    }
     
    /// Bottom part (n-1 lines)
    
    
    for (int i = 0; i < n-1; i++)
    {
        //spaces 
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }

        cout << "*";    //first Star

        if (i !=n-2)
        {
            //Spaces

            for (int j = 0; j < 2*(n-i)-5; j++)
            {
                cout << " ";
            }
            cout << "*";  // Second star
            
        }
        cout << endl;
        
    }
    
    return 0;
}