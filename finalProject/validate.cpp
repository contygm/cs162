/********************************************************************* 
** Program name: The Sphinxes and the Trifecta
** Description: Definition of Validate functions 
*********************************************************************/

#include "validate.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// returns valid integer between min and max
int getInteger()
{
    double testInput;
    cin >> testInput;

    if (cin.fail() || testInput-floor(testInput)) 
    {
        cout << "\033[1;31m ERROR: Please enter an integer value \033[0m\n" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return getInteger(); //loop back to begin input process
    }
    else
    {
        int input = (int)testInput;   
        cin.clear();  
        return input;
    }
}

// returns valid integer between min and max
int getIntegerBetween(int min, int max)
{
    // get valid integer
    int input = getInteger();
    
    // check that integer is between min and max
    if (input > max)
    {
        cout << "\033[1;31m ERROR: Please enter an integer that is below or equal to "<< max <<" \033[0m\n" << endl;
        return getIntegerBetween(min, max); //loop back to begin input process
    }

    if (input < min)
    {
        cout << "\033[1;31m ERROR: Please enter an integer that is above or equal to "<< min <<" \033[0m\n" << endl;
        return getIntegerBetween(min, max); //loop back to begin input process
    }

    return input;
}

char getCharMatch(char c1, char c2, char c3, char c4)
{
    char input;
    cin.clear();
    cin.ignore((unsigned)-1, '\n');
    cin.get(input);

    if ((input == c1 || input == c2 || input == c3 || input == c4) && input != '-')
    {
        cin.clear();
        return input;
    }

    cout << "\033[1;31m ERROR: Please enter a charater equal to your options \033[0m\n" << endl;
    return getCharMatch(c1, c2, c3, c4);
}
