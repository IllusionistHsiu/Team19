#include "player.h"

Player::Player(std::string name, char symbol) {
    this->name = name;
    this->symbol = symbol;
}

std::string Player::getName() {
    return name;
}

char Player::getSymbol() {
    return symbol;
}

void Player::setName(std::string name) {
    this->name = name;
}

void Player::setSymbol(char symbol) {
    this->symbol = symbol;
}
