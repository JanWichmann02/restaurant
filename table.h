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
    void addPayRequest(Guest * guest);
    void showGuests();
    void showGuestsNotPaid();
    Guest* requestForPayment();
private:
    std::vector<Guest>guests;
    std::vector<Guest>guestsNotPaid;
    int seats;
    int tableNumber;
    bool tableWithWindow;
};


#endif //RESTAURANT_TABLE_H
