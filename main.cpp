#include <iostream>
#include "dish.h"
int main() {
    Guest Helmut("Helmut",400,true);
    Table tisch1(4, 1, false);
    tisch1.addGuest(Helmut);
    tisch1.showGuests();
    return 0;
}
