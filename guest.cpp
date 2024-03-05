//
// Created by jan-w on 04.03.2024.
//

#include "guest.h"

Guest::Guest(std::string name, int money, bool diet)
: name(name), money(money), diet(diet), paid(false) {}

const std::string &Guest::getName() const {
    return name;
}

void Guest::setName(const std::string &name) {
    Guest::name = name;
}

bool Guest::hasPaid() const {
    return paid;
}

bool Guest::isPaid() const {
    return paid;
}

void Guest::setPaid(bool paid) {
    Guest::paid = paid;
}
