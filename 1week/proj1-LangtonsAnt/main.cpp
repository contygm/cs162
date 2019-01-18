/********************************************************************* 
** Program name: Langton's Ant
** Author: Genevieve Conty
** Date: 01/20/2019
** Description: 
*********************************************************************/
#include <iostream>
#include "ant.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() 
{	    
    cout << "\033[1;36m GAME START\033[0m\n";
    Ant ant(0, 0);
    ant.play(5);
    cout << "\033[1;36m GAME OVER\033[0m\n";
    return 0;
}

