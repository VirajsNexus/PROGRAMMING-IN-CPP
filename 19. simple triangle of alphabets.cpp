<<<<<<< Updated upstream
// Simple Triangle Pattern for Alphabets

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout <<" Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)  //i+1 means printing 1 more * in each line
        {                               // sequential prenting of Alphabets will takes place
            
            cout << ch++ ;
            cout << " ";
        }
        cout << endl ;
    }
    return 0;    

}
=======
// Simple Triangle Pattern for Alphabets

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout <<" Enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)  //i+1 means printing 1 more * in each line
        {                               // sequential prenting of Alphabets will takes place
            
            cout << ch++ ;
            cout << " ";
        }
        cout << endl ;
    }
    return 0;    

}
>>>>>>> Stashed changes
