/********************************************************************* 
** Program name: Fantasy Combat Part 2
** Description: Declaration of Blue Men Class   
*********************************************************************/
#ifndef BLUE_MEN_H
#define BLUE_MEN_H
#include "character.hpp"

class BlueMen: public Character 
{

public: 
	BlueMen();

    void defense(int attackRoll);
};

#endif