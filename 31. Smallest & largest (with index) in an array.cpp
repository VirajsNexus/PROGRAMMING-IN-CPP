// // Finding Smallest number in an array with its index.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 4;
    int numbers[size] = {24, 31, 4, 56};
    int index;

    int smallestnum = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        smallestnum = min(numbers[i], smallestnum);
        
        if (smallestnum== numbers[i])
        {
            index= i;
        }
        
    }

    cout << "The Smallest number in an array is : " << smallestnum ;
    cout << "\n and index is : " << index;

    return 0;
    
}


/* ******************************************************************************************************************************************
*********************************************************************************************************************************************
******************************************************************************************************************************************* */

// // Finding Largest number in an array with its index.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 4;
    int numbers[size] = {25, 21, 30, 9};
    int index;

    int largestnum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        largestnum = max(numbers[i], largestnum);

        if (largestnum == numbers[i])
        {
            index = i;
        }
        
    }

    cout << "The Largest number in an array is : " << largestnum << endl;
    cout << "The index of largest number is : " << index <<endl;

    return 0;
    
}