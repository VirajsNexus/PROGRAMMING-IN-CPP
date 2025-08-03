<<<<<<< Updated upstream
// Binary to Decimal number conversion

#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNumber)
{
    int ans = 0 ;
    int power = 1 ;

    while(binaryNumber > 0)
    {
        int remainder = binaryNumber % 10;
        ans += remainder * power ;

        binaryNumber /= 10;
        power *= 2;
    }
    return ans ; 
}

int main()
{
    int binaryNumber ;

    cout << "Enter Binary Number to convert in Decimal form : ";
    cin >> binaryNumber;

    cout << "The Decimal Number of " << binaryNumber << " is: " << binaryToDecimal(binaryNumber);

    return 0;
=======
// Binary to Decimal number conversion

#include<iostream>
using namespace std;

int binaryToDecimal(int binaryNumber)
{
    int ans = 0 ;
    int power = 1 ;

    while(binaryNumber > 0)
    {
        int remainder = binaryNumber % 10;
        ans += remainder * power ;

        binaryNumber /= 10;
        power *= 2;
    }
    return ans ; 
}

int main()
{
    int binaryNumber ;

    cout << "Enter Binary Number to convert in Decimal form : ";
    cin >> binaryNumber;

    cout << "The Decimal Number of " << binaryNumber << " is: " << binaryToDecimal(binaryNumber);

    return 0;
>>>>>>> Stashed changes
}