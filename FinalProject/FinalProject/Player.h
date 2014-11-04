//
//  Player.h
//  FinalProject
//
//  Created by Shawn Lamothe and Katherine Yee on 2014-10-29.
//  Copyright (c) 2014 shawnlamothe. All rights reserved.
//
// Student number: Katherine Yee 7233772

#ifndef __FinalProject__Player__
#define __FinalProject__Player__

#include <iostream>

class Player {
    
    Player(Player& oPlayer);
    Player operator=(Player& player);
    
public:
    std::string playerName;
    int gold;
    int ruby;
    int spice;
    int fabric;
    int jewel;
    int cartCapacity;
    int food;
    
    Player(std::string playerName);
    
    bool canAct() const;
    bool pay(Player &oPlayer);
    void eat();
};

#endif /* defined(__FinalProject__Player__) */
