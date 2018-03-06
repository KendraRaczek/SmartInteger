/////////////////////////////////////////////////////////////////////////////
// File Name:      SmartInteger.cpp
//
// Author:         Kendra Raczek
// CS email:       raczek@cs.wisc.edu
//
// Description:    Cpp file of SmartInteger, a specialized int value that
//                 overloads certain mathematical operators and detects
//                 integer overflow in each arithmetic operation.
//
// Sources:        stackoverflow
//
// URL(s) of sources:
//                 https://stackoverflow.com/
/////////////////////////////////////////////////////////////////////////////

#include <limits>
#include <iostream>
#include "SmartInteger.hpp"

SmartInteger::SmartInteger() {
    num = 0;
}

SmartInteger::SmartInteger(int num) {
    this -> num = num;
}

int SmartInteger::getValue() const {
    return num;
}

std::ostream& operator<< (std::ostream& os, const SmartInteger& smartInt) {
    os << smartInt.num;
    return os;
}

bool operator< ( SmartInteger const& a, SmartInteger const& b) {
    return a.num < b.num;
}

bool operator> ( SmartInteger const& a, SmartInteger const& b) {
    return a.num > b.num;
}

bool operator<= ( SmartInteger const& a, SmartInteger const& b) {
    return a.num <= b.num;
}

bool operator>= ( SmartInteger const& a, SmartInteger const& b) {
    return a.num >= b.num;
}

bool operator== ( SmartInteger const& a, SmartInteger const& b) {
    return a.num == b.num;
}

bool operator!= ( SmartInteger const& a, SmartInteger const& b) {
    return a.num != b.num;
}

SmartInteger SmartInteger::operator+ (const SmartInteger& b) const{
    // overflow
    if ((b.num > 0) && (this -> num >
            std::numeric_limits<int>::max() - b.num)) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }
    // underflow
    if ((b.num < 0) && (this -> num <
            std::numeric_limits<int>::min() - b.num)) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }

    SmartInteger sum;
    sum.num = this->num + b.num;
    return sum;
}

SmartInteger SmartInteger::operator- (const SmartInteger& b) const{
    // overflow
    if ((b.num < 0) && (this -> num >
            std::numeric_limits<int>::max() + b.num)) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }
    // underflow
    if ((b.num > 0) && (this -> num <
            std::numeric_limits<int>::min() + b.num)) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }

    SmartInteger difference;
    difference.num = this->num - b.num;
    return difference;
}

SmartInteger SmartInteger::operator* (const SmartInteger& b) const{
    SmartInteger product;
    // a or b is 0
    if (this -> num == 0 | b.num == 0) {
        product.num = 0;
        return product;
    }

    // overflow: pos * pos
    if (b.num > 0 && this -> num > 0 &&
            this -> num > std::numeric_limits<int>::max() / b.num) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }
    // underflow: pos * neg
    if (b.num < 0 && this -> num > 0 &&
            this -> num > std::numeric_limits<int>::min() / b.num) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }
    // underflow: neg * pos
    if (b.num > 0 && this -> num < 0 &&
            this -> num < std::numeric_limits<int>::min() / b.num) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }
    // overflow: neg * neg
    if (b.num < 0 && this -> num < 0 &&
            this -> num > std::numeric_limits<int>::max() / b.num) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }

    product.num = this->num * b.num;
    return product;
}

SmartInteger& SmartInteger::operator+= (const SmartInteger& b) {
    *this = *this + b;
    return *this;
}

SmartInteger& SmartInteger::operator-= (const SmartInteger& b) {
    *this = *this - b;
    return *this;
}

SmartInteger& SmartInteger::operator*= (const SmartInteger& b) {
    *this = *this * b;
    return *this;
}

SmartInteger& SmartInteger::operator++ () {
    // overflow
    if (this -> num >= std::numeric_limits<int>::max()) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }

    this -> num = this -> num + 1;
    return *this;
}

SmartInteger& SmartInteger::operator-- () {
    // underflow
    if (this -> num <= std::numeric_limits<int>::min()) {
        std::cout << "exception" << std::endl;
        throw std::exception();
    }

    (*this).num = (*this).num - 1;
    return *this;
}