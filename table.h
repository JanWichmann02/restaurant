//
// Created by jan-w on 04.03.2024.
//

#ifndef RESTAURANT_TABLE_H
#define RESTAURANT_TABLE_H
#include "guest.h"

class Table {
public:
    Table(int seats, int tableNumber, bool tableWithWindow);
    void addGuest(const Guest & guest);
    void showGuests();
private:
    std::vector<Guest>guests;
    int seats;
    int tableNumber;
    bool tableWithWindow;
};


#endif //RESTAURANT_TABLE_H
