#include <iostream>
#include "../Header Files/Deck.h"
#include "../Hand.h"

int main() {
    std::cout << "Добро пожаловать в мое казино" << std::endl;
    Deck d = Deck();
    Hand h = Hand();
    h.addCard(d.drawTopCard());
    h.addCard(d.drawTopCard());
    h.addCard(d.drawTopCard());
    h.addCard(d.drawTopCard());
    h.addCard(d.drawTopCard());
    std::cout<<h<<', '<<h.getTotalValue()<<std::endl;
    return 0;
}
