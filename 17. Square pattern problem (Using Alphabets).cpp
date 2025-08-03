<<<<<<< Updated upstream
// Square Pattern Problem (Using Alphabets)

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of ros/columns : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        char ch = 'A' ;  // writting inside loop for repeatation among each line
        for (int j = 0; j <= n; j++)
        {
            cout << ch ;
            ch = ch + 1;  //ASCII values for alphabets (65++)
            cout << " ";
        }
        cout << endl ;
    }
    return 0;
=======
// Square Pattern Problem (Using Alphabets)

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no. of ros/columns : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        char ch = 'A' ;  // writting inside loop for repeatation among each line
        for (int j = 0; j <= n; j++)
        {
            cout << ch ;
            ch = ch + 1;  //ASCII values for alphabets (65++)
            cout << " ";
        }
        cout << endl ;
    }
    return 0;
>>>>>>> Stashed changes
}