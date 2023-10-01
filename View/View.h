#ifndef VIEW_H
#define VIEW_H

#include <string>

class View{
    public:
        void displayBoard(Board*);
        void prompt(std::string s);
};

#endif