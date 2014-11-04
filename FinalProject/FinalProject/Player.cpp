//
//  Player.cpp
//  FinalProject
//
//  Created by Shawn Lamothe on 2014-10-29.
//  Copyright (c) 2014 shawnlamothe. All rights reserved.
//

#include "Player.h"

Player::Player(std::string _playerName):playerName(_playerName),gold(5),ruby(0),
spice(1),jewel(1),food(10), cartCapacity(9){}

bool Player::pay(Player &oPlayer){
    if(gold > 0) {
        oPlayer.gold++;
        gold--;
        return true;
    }
    return false;
}

bool Player::canAct() const {
    if (food > 0) {
        return true;
    }
    return false;
}

void Player::eat() {
    if (food >0) {
        food--;
    }
}