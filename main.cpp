#include "SmartInteger.hpp"

#include <limits>
#include <iostream>

int main() {
    std::cout << "Constructing n1 and n2..." << std::endl;
    SmartInteger nneg(-8);
    SmartInteger n0;
    SmartInteger n1(1);
    SmartInteger n2(2);
    SmartInteger n3(3);
    SmartInteger n4(4);
    SmartInteger n5(5);
    SmartInteger n6(6);
    SmartInteger n7(7);
    SmartInteger big(std::numeric_limits<int>::max()/6);
    SmartInteger bigneg(std::numeric_limits<int>::min() + 6);
    SmartInteger maxnum(std::numeric_limits<int>::max());
    SmartInteger minnum(std::numeric_limits<int>::min());
    std::cout << "n0.getValue() should be 0: " << n0.getValue() << std::endl;
    std::cout << "n1.getValue() should be 1: " << n1.getValue() << std::endl;
    std::cout << "n2.getValue() should be 2: " << n2.getValue() << std::endl;
    std::cout << std::endl;

//    // No need to implement custom copy assignment operator - this should just work
//    std::cout << "Changing value of n2..." << std::endl;
//    n2 = 3;
//    std::cout << "n2.getValue() should be 3: " << n2.getValue() << std::endl;
//    std::cout << std::endl;

//    // No need to implement custom copy constructor - this should just work
//    std::cout << "Constructing n3..." << std::endl;
//    SmartInteger n3(n2);
//    std::cout << "n3.getValue() should be 3: " << n3.getValue() << std::endl;
//    std::cout << std::endl;


    // Add more code here to test SmartInteger here!
// <<
    std::cout << "Testing <<" << std::endl;
    std::cout << "os << n2 should be 2: " << n2 << std::endl << std::endl;

// <
    std::cout << "Testing <" << std::endl;
    std::cout << "n1 < n2 should be true: ";
    if (n1 < n2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// >
    std::cout << "Testing >" << std::endl;
    std::cout << "n1 > n2 should be false: ";
    if (n1 > n2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// <=
    std::cout << "Testing <=" << std::endl;
    std::cout << "n1 <= n1 should be true: ";
    if (n1 <= n1) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// >=
    std::cout << "Testing >=" << std::endl;
    std::cout << "n1 >= n2 should be false: ";
    if (n1 >= n2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// ==
    std::cout << "Testing ==" << std::endl;
    std::cout << "n1 == n2 should be false: ";
    if (n1 == n2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl;

    std::cout << "n1 == n1 should be true: ";
    if (n1 == n1) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// !=
    std::cout << "Testing !=" << std::endl;
    std::cout << "n1 != n2 should be true: ";
    if (n1 != n2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl;

    std::cout << "n1 != n1 should be false: ";
    if (n1 != n1) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    std::cout << std::endl << std::endl;

// +
//    std::cout << "Testing + Overflow n1 + maxnum" << std::endl;
//    n0 = n1 + maxnum;
//
//    std::cout << "Testing + Overflow maxnum + n1" << std::endl;
//    n0 = maxnum + n1;
//
//    std::cout << "Testing + Overflow maxnum + maxnum" << std::endl;
//    n0 = maxnum + maxnum;

    std::cout << "Testing +" << std::endl;
    std::cout << "n1 + n2 should be 3: " << n1 + n2 << std::endl << std::endl;



// -
//    std::cout << "Testing - Overflow n0 - maxnum" << std::endl;
//    n1 = n0 - maxnum;
//
//    std::cout << "Testing - Overflow minnum - n1" << std::endl;
//    n0 = minnum - n1;
//
//    std::cout << "Testing - Overflow nneg - maxnum" << std::endl;
//    n0 = nneg - maxnum;
//
//    std::cout << "Testing - Overflow minnum + minnum" << std::endl;
//    n0 = minnum + minnum;

    std::cout << "Testing -" << std::endl;
    std::cout << "n1 - n2 should be -1: " << n1 - n2 << std::endl << std::endl;

// *
//    std::cout << "Testing * Overflow big * n7" << std::endl;
//    n0 = big * n7;

//    std::cout << "Testing * Overflow n7 * bigneg" << std::endl;
//    n0 = n7 * bigneg;

//    std::cout << "Testing * Overflow bigneg * n7" << std::endl;
//    n0 = bigneg * n7;

//    std::cout << "Testing * Overflow bigneg * nneg" << std::endl;
//    n0 = bigneg * nneg;



    std::cout << "Testing *" << std::endl;
    std::cout << "n1 * n2 should be 2: " << n1 * n2 << std::endl << std::endl;

    std::cout << "n1 * n0 should be 0: " << n1 * n0 << std::endl << std::endl;

    std::cout << "n0 * n0 should be 0: " << n0 * n0 << std::endl << std::endl;


// +=
    std::cout << "Testing +=" << std::endl;
    std::cout << "n1 += n2 should be n1 = 3: ";
    n1 += n2;
    std::cout << n1 << std::endl << std::endl;

//    std::cout << "Testing += Overflow n1 += maxnum" << std::endl;
//    n1 += maxnum;

// -=
    std::cout << "Testing -=" << std::endl;
    std::cout << "n3 -= n4 should be n1 = -1: ";
    n3 -= n4;
    std::cout << n3 << std::endl << std::endl;

// *=
    std::cout << "Testing *=" << std::endl;
    std::cout << "n5 *= n6 should be n5 = 30: ";
    n5 *= n6;
    std::cout << n5 << std::endl << std::endl;

// ++ pre
    std::cout << "Testing ++ pre" << std::endl;
    std::cout << "++n6 should be n6 = 7: ";
    ++n6;
    std::cout << n6 << std::endl << std::endl;

//    std::cout << "++maxnum overflow ";
//    ++maxnum;
//    std::cout << maxnum << std::endl << std::endl;

// -- pre
    std::cout << "Testing -- pre" << std::endl;
    std::cout << "--n7 should be n7 = 6: ";
    --n7;
    std::cout << n7 << std::endl << std::endl;

    return 0;
}
