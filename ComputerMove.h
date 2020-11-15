
#ifndef _COMPUTERMOVE_H_
#define _COMPUTERMOVE_H_

#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <map>

#define WINNING_ROWS 8
#define WINNING_COLUMNS 3
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::thread;
using std::vector;
class Ai {

    std::vector<int>freeSpotsHere;
    string computerHere;
    string humanHere;
    int counterO;
    int counterX;
    //int remainingCopy;
    //a konstruktor készít egy másolatot a tömbrõl
    int winningCombination[WINNING_ROWS][WINNING_COLUMNS]{
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {1,4,7},
    {2,5,8},
    {3,6,9},
    {1,5,9},
    {3,5,7}
    };
    std::map<string, int> scores = { {"X",-10},{"O",10},{"tie",0} };
    std::map<string, int> scoresX = { {"X",10},{"O",-10},{"tie",0} };
public:
    Ai(string computerSign, string HumanSign) {

        computerHere = computerSign;
        humanHere = HumanSign;

    }
    string bestMove(string arr[3][3]);
    int creatingAVectorOfTheCurrentFreeSpots(string arr[3][3]);
    //bool checkIfThisSpotIsFree(int spot);
    string checkIfEndState(string arr[3][3]);
    int minimax(string arr[3][3], int depth, bool isMaximizing);
};
#endif // !_GAME_H_
#pragma once

