/*
1. 二分法,猜测次数不会超过ceil(log2(1000)) = 10次
2. 见下面的程序
3. 程序不会死循环,会将用户的字符按ASCII码转化成数字
    但为了用户考虑,应加上输入判定,如下程序所示
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <numeric>
using namespace std;

void guessGame();//function prototype

int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    char reply;
    do {
        guessGame();
        std::cout << "Would you like to play again (y or n)? ";
        std::cin >> reply;
    } while(reply =='y');
    return 0;
}
/*
char ch[100005];

int Input() {
    while(true) {
        fgets(ch);
        enum class status {RIGHT,ERROR};
        status input = status::RIGHT;
        for(int i = 0; i < strlen(ch); i++) {
            if(!isdigit(ch[i])) {
                input = status::ERROR;
                break;
            }
        }
        if(input == status::RIGHT) {
            return atoi(ch);
            break;
        }
        std::cout << "Invaild input, try again." << std::endl;
    }
}
*/

int Input() {
    while(true) {
        std::string str;
        std::cin >> str;
        enum class status {RIGHT,ERROR};
        status input = status::RIGHT;
        if(str.size() > 5) {
            input = status::ERROR;
        }
        for(auto ch : str) {
            if(!isdigit(ch)) {
                input = status::ERROR;
                break;
            }
        }
        if(input == status::RIGHT) {
            int ret = 0;
            for(auto ch : str) {
                ret *= 10;
                ret += ch - '0';
            }
            if(1 <= ret && ret <= 1000) {
                return ret;
            }
        }
        std::cout << "Invaild input, try again." << std::endl;
    }
}

void guessGame() {
    int number = rand() % 1000 + 1;
    std::cout << "I have a number between 1 and 1000." << std::endl;
    std::cout << "Can you guess my number?" << std::endl;
    std::cout << "Please type your first guess: ";
    int guess = Input();
    int count = 1;
    while(guess != number) {
        if(guess < number) std::cout << "Too low. Try again." << std::endl;
        else std::cout << "Too high. Try again." << std::endl;
        std::cout << "? ";
        guess = Input();
        count++;
    }
    std::cout << "Excellent! You guessed the number!" << std::endl;
    if(count > 10) {
        std::cout << "You should be able to do better! (" << count << " guesses)" << std::endl;
    } else if(count < 10) {
            std::cout << "Either you know the secret or you got lucky! (" << count << " guesses)" << std::endl;
    } else {
            std::cout << "Ahah! You know the secret! (" << count << " guesses)" << std::endl;
    }
    return;
}