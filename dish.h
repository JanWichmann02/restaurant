//
// Created by jan-w on 04.03.2024.
//

#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H
#include "table.h"

class dish {
public:
    dish(std::string name, bool vegan);
    void dishInfo();
private:
    std::string name;
    bool vegan;
};


#endif //RESTAURANT_DISH_H
