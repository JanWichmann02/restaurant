//
// Created by jan-w on 04.03.2024.
//

#include "table.h"

Table::Table(int seats, int tableNumber, bool tableWithWindow)
: seats(seats), tableNumber(tableNumber), tableWithWindow(tableWithWindow){}

void Table::addGuest(const Guest &guest) {
    if (guests.empty() ||guests.size() < seats) {
        guests.push_back(guest);
    } else {
        std::cout << "Tisch voll!" << std::endl;
    }
}

void Table::showGuests() {
    for (auto const & guest: guests) {
        std::cout << guest.getName() <<std::endl;
    }
}

Guest *Table::requestForPayment() {
    for (auto guest : guests) {
        if (!guest.hasPaid()) {
            addPayRequest(&guest);
            return &guest;
        }
    }
    return nullptr;
}


void Table::addPayRequest(Guest * guest) {
    guestsNotPaid.push_back(*guest);
}

void Table::showGuestsNotPaid() {
    std::cout <<"Zu bezahlen hat: ";
    for (auto const guestNotPaid : guestsNotPaid) {
        std::cout << guestNotPaid.getName() << std::endl;
    }
}



