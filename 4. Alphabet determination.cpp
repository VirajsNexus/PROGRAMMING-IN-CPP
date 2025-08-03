<<<<<<< Updated upstream
// DETERMINE THE CHARACTER IS IN LOWER CASE OR UPPER CASE
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Enter the character to be determined for its upper case or lower case : ";
    cin>> ch;

    if (ch >= 'a' && ch <= 'z') //As per ASCII we can also check it by replacing 'a'&'z' with numbers 65 and 90(for Uppercase)
    {
        cout<<"Character is in LOWER CASE.";
    }
    else
    {
        cout<<"Character is in UPPER CASE.";
    }
    
    return 0;
=======
// DETERMINE THE CHARACTER IS IN LOWER CASE OR UPPER CASE
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Enter the character to be determined for its upper case or lower case : ";
    cin>> ch;

    if (ch >= 'a' && ch <= 'z') //As per ASCII we can also check it by replacing 'a'&'z' with numbers 65 and 90(for Uppercase)
    {
        cout<<"Character is in LOWER CASE.";
    }
    else
    {
        cout<<"Character is in UPPER CASE.";
    }
    
    return 0;
>>>>>>> Stashed changes
}