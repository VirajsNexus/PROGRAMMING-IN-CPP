<<<<<<< Updated upstream
// Printing pattern for non repeating numbers in each row

#include <iostream>
using namespace std;

int main()
{
    int n ;
    int num ;   /*define outside the for loop
                  to get next number at starting of
                  each new row*/

    cout << "Enter no. of rows/columns : ";
    cin >> n;

    cout << "Enter value for first num : ";
    cin >> num ; 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num ;
            num++;
            cout << " ";
        }
        cout << endl;
        
    }
    return 0;
=======
// Printing pattern for non repeating numbers in each row

#include <iostream>
using namespace std;

int main()
{
    int n ;
    int num ;   /*define outside the for loop
                  to get next number at starting of
                  each new row*/

    cout << "Enter no. of rows/columns : ";
    cin >> n;

    cout << "Enter value for first num : ";
    cin >> num ; 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num ;
            num++;
            cout << " ";
        }
        cout << endl;
        
    }
    return 0;
>>>>>>> Stashed changes
}