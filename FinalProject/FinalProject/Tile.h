//
//  Tile.h
//  FinalProject
//
//  Created by Shawn Lamothe and Katherine Yee on 2014-10-28.
//  Copyright (c) 2014 shawnlamothe. All rights reserved.
//
//  Student number: Katherine Yee 7233772

#ifndef __FinalProject__Tile__
#define __FinalProject__Tile__

#include <iostream>
#include "Player.h"
using std::ostream;

class Tile {
    
public:
    bool operator==(const Tile &T);
    virtual bool action(Player &player);
    virtual Tile* clone();
    ostream& operator<<();
};

class Restaurant: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class SpiceMerchant: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class FabricManufacturer: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class Jeweler: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class CartManufacturer: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class SmallMarket: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class SpiceMarket: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class JeweleryMarket: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class FabricMarket: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class BlackMarket: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class Casino: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class GemMerchant: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};

class Palace: public Tile {
public:
    bool action(Player &player);
    Tile* clone();
};



#endif /* defined(__FinalProject__Tile__) */
