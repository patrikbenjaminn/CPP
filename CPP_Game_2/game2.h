#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int maxN);
    ~Game();
    void start();
private:
    void printGameResult();
    int playerGuess;
    int numOfGuesses;
    int maxNumber;
};

#endif // GAME_H
