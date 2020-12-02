#include <iostream>
#include <sstream>
#include "../Header Files/Deck.h"
#include "../Hand.h"
#include "../Header Files/Game.h"

int main() {
    int exit = 0;
    size_t startingPlayerCash = 10000;
    std::cout << "Добро пожаловать в мое казино..." << std::endl;
    Game g = Game(startingPlayerCash);
    do{
        std::cout << "Ваша ставка? ";
        size_t bet = 1;
        std::string betString;
        std::cin>>betString;
        std::stringstream sstream(betString);
        sstream >> bet;
        g.startGame(bet);
        g.showInfo();
        g.prompt();
        if(g.getTotalCash()==0){
            std::cout<<"У вас не осталось денег. Игра окончена."<<std::endl;
            exit = 2;
            break;
        }
        std::cout<<"1. Продолжить"<<std::endl;
        std::cout<<"2. Выйти"<<std::endl;
        std::cin>>exit;
    }while (exit!=2);
    return 0;
}
