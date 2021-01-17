#include "A01_1FuncLib.hpp"
#include <iostream>

using namespace std;

void gameLoop()
{
    string input; //stores everything user types
    bool isLegal = false; //marks the inputted letter to be valid or not.
    
    //this loops until letter Q is typed.
    do
    {
        //asks user to input
        cout << "\nPlease enter movement (wasd) or Q to escape > ";
        getline (cin, input);
        fflush(stdin);
        
        //process the input char
        isLegal = process(input[0]);
        
        if (isLegal && input[0] != 'Q')
        {
            cout << "\nProcessing input: " << input[0] << ".";
        }
        else if (isLegal && input[0] == 'Q')
        {
            cout << "\nFinished.";
            return;
        }
        else
        {
            cout << "\nUnknown input: " << input[0] << ".";
        }
    } while (1);
}

bool process(char letter)
{
    if (letter == 'w' || letter == 'a' || letter == 's' || letter == 'd' || letter == 'Q')
    {
        return true;
    }
    else
    {
        return false;
    }
}
