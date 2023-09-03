#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);
int main() {
    srand((unsigned) time(NULL)); // Randomnumber Generator
    int maxnum = 20; // Max number
    int guesses = game(maxnum); // Number of tries

    std::cout << "Onneksi olkoon! Arvasit oikein " <<guesses<< " yrityksellä." << std::endl;

        return 0;
}

int game(int maxnum) {
    int target = rand() % maxnum + 1; // Random number between 1-19
    int guess;
    int guesses = 0;

    std::cout << "Arvaa luku väliltä 1 - " << maxnum << std::endl;

        do {
        std::cout << "Syötä numero: ";
        std::cin >> guess;
        guesses++;

        if (guess < target) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (guess > target) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Arvasit oikein!." << std::endl;
        }
    } while (guess != target);

    return guesses;
}
