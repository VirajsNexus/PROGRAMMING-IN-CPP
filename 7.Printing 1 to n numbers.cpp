//Print numbers from 1 to n using while loop 

#include<iostream>
using namespace std;
 int main()
 {
    int n;
    int count = 1;

    cout<<"ENTER THE NUMBER THAT WILL BE LAST : ";
    cin>> n;

    while (count <= n)
    {
        cout << count << " " ; //for spacing (" ") is used
        count++ ;
    }
    cout<< endl;

    return 0;
 }