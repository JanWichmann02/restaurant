#include <iostream>
#include "dish.h"
int main() {
    Guest Helmut("Helmut",400,true);
    Guest Sahra("Sahra",400,true);
    Sahra.setPaid(true);
    Table tisch1(4, 1, false);
    tisch1.addGuest(Sahra);
    tisch1.addGuest(Helmut);
    tisch1.showGuests();
    tisch1.requestForPayment();
    tisch1.showGuestsNotPaid();
    return 0;
}
