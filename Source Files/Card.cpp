//
// Created by Michael on 29.11.2020.
//

#include "../Header Files/Card.h"
#include <iostream>

Card::Card(std::string _face) {
    face = _face;
}

Card::Card() {
    face = "null";
}

std::ostream &operator<<(std::ostream &out, const Card &card) {
    out<<card.face;
    return out;
}
