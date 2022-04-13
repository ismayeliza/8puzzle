#ifndef ASTAR_H
#define ASTAR_H
#include <iostream>
#include <cstdint>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Astar {

    private:
        static const int goalState[];
        static const int initialState1[];
        static const int initialState2[];
        
        float bstar;    //effective branching factor = NG/D
        int ET;         //execution time
        int D;          //depth of tree
        int NG;         //nodes generated
        int TP;         //total path
        int fn;         //f(n) = h(n) + g(n)
        int hn;         //h(n) = given value from h functions
        int gn;         //g(n) level of the node
    
        char open[];
        char closed[];

    public:
        Astar();
        void algorithm();       //complete A* alogorithm

    private:
        float executionTime();
        void printTable1();     //prints table for initial state 1
        void printTable2();     //prints table for initial state 2


};

#endif
