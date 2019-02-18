/********************************************************************* 
** Program name: Fantasy Combat
** Description: Declaration of Medusa Class   
*********************************************************************/

#ifndef MEDUSA_H
#define MEDUSA_H
#include "character.hpp"

class Medusa: public Character 
{

public: 
	Medusa();

    void attack();
};

#endif