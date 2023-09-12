#include "game2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxN)
{
    maxNumber = maxN;
    playerGuess = 0;
    numOfGuesses = 0;
    srand(static_cast<unsigned int>(time(0))); // Alustetaan rnd generaattori
    cout << "GAME CONSTRUCTOR: Object initialized with " << maxN << " as the maximum value" << endl;
}


Game::~Game()
{
    cout << "Peli tuhottu" << endl;
}

void Game::start()
{
    bool stayInLoop = true;
    short randomNumber = (rand() % maxNumber) + 1; // Satunnaisluku väliltä 1-max
    numOfGuesses = 0;

    while (stayInLoop)
    {
        cout << "Guess a number between 1 and " << maxNumber << ": ";
        cin >> playerGuess;
        if (playerGuess == randomNumber)
        {
            cout << "Your guess is correct: " << playerGuess << endl;
            stayInLoop = false;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Your guess is too low" << endl;
        }
        else
        {
            cout << "Your guess is too high" << endl;
        }

        numOfGuesses++;
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the correct answer: " << playerGuess << " in " << numOfGuesses << " guesses" << endl;
}
