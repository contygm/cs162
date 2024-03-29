/********************************************************************* 
** Program name: The Sphinxes and the Trifecta  
** Description: The declaration of the Space class. Contains the base
**              for all the space class: health, boss, standard, and
**              riddle. 
*********************************************************************/
#ifndef SPACE_hpp
#define SPACE_hpp

#include <string>
using std::string;

class Space
{

protected:
    Space* up;
    Space* down;
    Space* left;
    Space* right;
    int column;
    int row;
    string type;
    int health;

public:
    Space();
    
    //getters
    Space* getUp();
    Space* getDown();
    Space* getLeft();
    Space* getRight();
    string getType();
    int getRow();
    int getColumn();

    //setters
    void setType(string t);
    void setLinkedSpaces(Space* U, Space* D, Space* L, Space* R);

    //virtual functions
    virtual ~Space();
    virtual int action();
    virtual int getHealth();
    virtual void setHealth(int h);
    virtual void updateHealth(int damage);
};

#endif