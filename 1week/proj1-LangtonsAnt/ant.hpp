#ifndef ANT_H
#define ANT_H

enum direction {UP, RIGHT, DOWN, LEFT};

class Ant
{
    private:
        char ant;
        int row;
        int col;
        int xCoord;
        int yCoord;
        char **board;
        int orientation;
        bool whiteTile;

    public:
        // TODO: default constructor for random
        Ant(int x, int y);
        ~Ant();
        void setPosition(int x, int y);
        void setRowColl(int r, int c);
        void makeBoard();
        void play(int turns);
        void move(int x, int y, char move);
        void print();
};

#endif