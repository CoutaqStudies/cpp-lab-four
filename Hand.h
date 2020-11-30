//
// Created by Michael on 30.11.2020.
//

#ifndef CPP_LAB_FOUR_HAND_H
#define CPP_LAB_FOUR_HAND_H


#include "Header Files/Deck.h"

class Hand{
public:
    Hand();
    size_t getTotalValue();
    void addCard(Card card);
    friend std::ostream& operator<< (std::ostream &out, const Hand &hand);
    virtual ~Hand();
private:
    Card *deck;
    size_t totalCards = 0;
    size_t numOfAces = 0;

};


#endif //CPP_LAB_FOUR_HAND_H
