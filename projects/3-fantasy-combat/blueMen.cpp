/********************************************************************* 
** Program name: Fantasy Combat 
** Description: Definition of Blue Men Class 
*********************************************************************/

#include "blueMen.hpp"
#include <iostream>

using std::cout;
using std::endl;

// int attackDie, int attackSides, int defenseDie, int defenseSides, 
// int armor, int strength, string type
BlueMen::BlueMen(): Character(2, 10, 3, 6, 3, 12, "Blue Men") {}

void BlueMen::defense(int attackRoll)
{
    cout << "\033[0;36mBLUE DEFENSE\033[0m" << endl;

    // reset currentRoll
    currentRoll = 0;
    
    // adjust defense die number based on strength
    int useableDieCount = defenseDie;

    if (strength < 9 && strength > 4)
    {
        useableDieCount = 2;
    } 
    else if (strength < 5)
    {
        useableDieCount = 1;
    }

    for (int i = 0; i < useableDieCount; i++)
    {
        currentRoll += rand()%defenseSides+1;
    }

    int damage = attackRoll - armor - currentRoll;
    
    if (damage < 0)
    {
        currentDamage = 0;
    }
    else 
    {
        currentDamage = damage;
    }
    
    strength -= currentDamage;
}
