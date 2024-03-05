//
// Created by jan-w on 04.03.2024.
//

#ifndef RESTAURANT_GUEST_H
#define RESTAURANT_GUEST_H
#include <iostream>
#include <string>
#include <vector>

class Guest {
public:
    Guest(std::string name, int money, bool diet);
    void guestInfo();
    bool hasPaid() const;
    const std::string &getName() const;
    void setName(const std::string &name);
    bool isPaid() const;
    void setPaid(bool paid);
private:
    std::string name;
    int money;
    bool diet;
    bool paid;
};


#endif //RESTAURANT_GUEST_H
