<<<<<<< Updated upstream
// Checking for prime number 

#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true ;
    
    cout<< "\n*****Checking for prime number.*****\n" <<endl;

    cout << "Enter the number : ";
    cin >> n ;

    for (int i = 2; i <= n-1; i++)            // 2nd Method (i*i <= n) using sq. root
    {
        if (n % i == 0) //checking for non prime
        {
            isPrime = false ;
            break;
        }
        
    }

    if (isPrime == true)
    {
        cout << "Number is a Prime Number\n";
    }
    else 
    {
        cout << "Number is Not a Prime number." ;
    }
    
    return 0;
} 
=======
// Checking for prime number 

#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true ;
    
    cout<< "\n*****Checking for prime number.*****\n" <<endl;

    cout << "Enter the number : ";
    cin >> n ;

    for (int i = 2; i <= n-1; i++)            // 2nd Method (i*i <= n) using sq. root
    {
        if (n % i == 0) //checking for non prime
        {
            isPrime = false ;
            break;
        }
        
    }

    if (isPrime == true)
    {
        cout << "Number is a Prime Number\n";
    }
    else 
    {
        cout << "Number is Not a Prime number." ;
    }
    
    return 0;
} 
>>>>>>> Stashed changes
