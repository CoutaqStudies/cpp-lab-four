//
// Created by Michael on 29.11.2020.
//

#ifndef CPP_LAB_FOUR_CARD_H
#define CPP_LAB_FOUR_CARD_H


#include <string>
#include <iostream>

class Card {
public:
    Card();
    Card(std::string _face);
    size_t getValue();
    friend std::ostream& operator<< (std::ostream &out, const Card &card);

private:
    std::string face;
    size_t value;
};


#endif //CPP_LAB_FOUR_CARD_H
