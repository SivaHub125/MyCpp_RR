#pragma once
#include "account.h"

// Write your solution here
void transferFunds(Account& from, Account& to, double amount) {
    if(amount>10000){
        throw std::runtime_error("Amount too large");
    }
    else{
    from.sub(amount);
    to.add(amount);
    }
}

