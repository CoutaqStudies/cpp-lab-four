//
// Created by Michael on 30.11.2020.
//

#include "Hand.h"

Hand::~Hand() {
    delete[] deck;
}

size_t Hand::getTotalValue() {
    size_t totalValue = 0;
    for(size_t i =0; i <totalCards; i++){
        size_t value = deck[i].getValue();
        if(value!=11){
            totalValue+=value;
        }else{
            totalValue+=1;
            numOfAces+=1;
        }
    }
    size_t i = 0;
    while(i!=numOfAces){
        if(totalValue<=(21-9)){
            totalValue+=9;
        }
        i++;
    }
    return totalValue;
}

Hand::Hand() {
    deck = new Card[0];
}
std::ostream &operator<<(std::ostream &out, const Hand &hand) {
    for(size_t i = 0; i< hand.totalCards; i++){
        out<<i<<":"<<hand.deck[i]<<"->"<<hand.deck[i].getValue()<<std::endl;
    }
    return out;
}

void Hand::addCard(Card card) {
    Card *newDeck = new Card[totalCards];
    for (size_t i  = 0; i < totalCards; i++) {
       newDeck[i] = deck[i];
    }
    newDeck[totalCards] = card;
    deck = newDeck;
    totalCards++;
}
