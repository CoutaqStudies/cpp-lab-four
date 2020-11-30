//
// Created by Michael on 29.11.2020.
//

#include "../Header Files/Card.h"
#include <iostream>
#include <string>

Card::Card(std::string _face) {
    face = _face;
    if(isdigit(face[0])){
           size_t num = int(_face[0]) - int('0');
        value = num;
    }else if(face[0]!='A'){
        value = 10;
    } else{
        value = 11;
    }
}

Card::Card() {
    face = "null";
}

std::ostream &operator<<(std::ostream &out, const Card &card) {
    out<<card.face;
    return out;
}

size_t Card::getValue() {
    return value;
}
