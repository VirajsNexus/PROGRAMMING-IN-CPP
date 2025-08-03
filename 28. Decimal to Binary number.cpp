<<<<<<< Updated upstream
//Decimal to Binary number conversion

#include <iostream>
using namespace std;

int decToBinary(int decimalNum)
{
    int ans = 0; 
    int power = 1;
    
    while (decimalNum > 0)
    {
        int remainder = decimalNum % 2;
        decimalNum /= 2 ;

        ans += (remainder * power) ;
        power *= 10 ;   /*adding one more power for each loop
                         to get unit, 10th,100th,..... places*/
    }

    return ans ; //will be in a binary form

}

int main()
{ 
    int decimalNUm;
    cout << "Enter the Decimal Number : ";
    cin >> decimalNUm;

    cout << "The Binary no. of "<<decimalNUm << " is : " << decToBinary(decimalNUm) <<endl;

    return 0;
}
=======
//Decimal to Binary number conversion

#include <iostream>
using namespace std;

int decToBinary(int decimalNum)
{
    int ans = 0; 
    int power = 1;
    
    while (decimalNum > 0)
    {
        int remainder = decimalNum % 2;
        decimalNum /= 2 ;

        ans += (remainder * power) ;
        power *= 10 ;   /*adding one more power for each loop
                         to get unit, 10th,100th,..... places*/
    }

    return ans ; //will be in a binary form

}

int main()
{ 
    int decimalNUm;
    cout << "Enter the Decimal Number : ";
    cin >> decimalNUm;

    cout << "The Binary no. of "<<decimalNUm << " is : " << decToBinary(decimalNUm) <<endl;

    return 0;
}
>>>>>>> Stashed changes
