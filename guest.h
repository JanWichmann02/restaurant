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
private:
    std::string name;
public:
    const std::string &getName() const;

    void setName(const std::string &name);

private:
    int money;
    bool diet;
};


#endif //RESTAURANT_GUEST_H
