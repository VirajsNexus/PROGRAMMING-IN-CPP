// Floyd Triangle Pattern 

#include<iostream>
using namespace std;

int main()
{
    int n;
    int num ;

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter First Number : ";
    cin >> num;

    cout << "The Numbers are : \n" ;  

    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j >0; j--)      // Backward i+1
       {
           
            cout << num++ ;
            cout << " ";
            
        }
        cout << endl;
    }
    return 0;
}