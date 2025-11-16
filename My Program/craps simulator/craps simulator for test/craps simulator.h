// craps simulator
#include <iostream>
#include <cstdlib>
#include <ctime>

class craps {
    unsigned int round;
    unsigned int goal;
    unsigned short roll() {
        return rand() % 6 + 1;
    }
    unsigned short rollDice() {
        round ++;
//        std::cout << "Round " << round << " :\n";
        int r1 = roll();
        int r2 = roll();
        int sum = r1 + r2;
//        std::cout << "Dice 1 : " << r1 << "\n";
//        std::cout << "Dice 2 : " << r2 << "\n";
//        std::cout << "Sum is " << sum << std::endl;
        return sum;
    }
    enum Status {WIN, LOSE, CONTINUE}status;
public:
    explicit craps() {
        srand(static_cast<unsigned int>(time(NULL)));
        round = 0;
        goal = 0;
        status = CONTINUE;
    }
    explicit craps(int _seed) {
        srand(_seed);
        round = 0;
        goal = 0;
        status = CONTINUE;
    }
    void displayMessage() const {
        std::cout << "Welcome to Craps Simulator!" << std::endl;
        return;
    }
    void firstRoll() {
        int result = rollDice();
        if(result == 7 || result == 11) {
            status = WIN;
            return;
        }
        if(result == 2 || result == 3 || result == 12) {
            status = LOSE;
            return;
        }
        status = CONTINUE;
        goal = result;
    }
    void Roll() {
        int result = rollDice();
        if(result == 7) {
            status = LOSE;
            return;
        }
        if(result == goal) {
            status = WIN;
            return;
        }
        status = CONTINUE;
        return;
    }
    std::pair<bool,int> Simulator() {
        firstRoll();
        switch (status) {
            case WIN: 
//                std::cout << "You won!" << std::endl;
                return std::make_pair(true, round);
                break;
            case LOSE:
//                std::cout << "You lost!" << std::endl;
                return std::make_pair(false, round);
                break;
            default:
            ;
        }
        while(true) {
            Roll();
            switch (status) {
                case WIN: 
//                    std::cout << "You won!" << std::endl;
                    return std::make_pair(true, round);
                    break;
                case LOSE:
//                    std::cout << "You lost!" << std::endl;
                    return std::make_pair(false, round);
                    break;
                default://
                ;
            }
        }
    }
};