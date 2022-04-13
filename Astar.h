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
        int ET;         //execution time
        int D;          //depth of tree
        int NG;         //nodes generated
        float bstar;    //effective branching factor = NG/D
        int TP;         //total path

    public:
        Astar();

        void printTable1();     //prints table for initial state 1
        void printTable2();     //prints table for initial state 2


    private:
        float executionTime();

};

#endif
