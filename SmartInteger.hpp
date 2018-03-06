/////////////////////////////////////////////////////////////////////////////
// File Name:      SmartInteger.hpp
//
// Author:         Kendra Raczek
// CS email:       raczek@cs.wisc.edu
//
// Description:    Header file of SmartInteger, a specialized int value that
//                 overloads certain mathematical operators and detects
//                 integer overflow in each arithmetic operation.
//
// Sources:        stackoverflow
//
// URL(s) of sources:
//                 https://stackoverflow.com/
/////////////////////////////////////////////////////////////////////////////

#ifndef ASSIGNMENT5_SMARTINTEGER_HPP
#define ASSIGNMENT5_SMARTINTEGER_HPP

#include <ostream>

/**
 * @brief A base class for a SmartInteger that overloads certain mathematical
 * operators.
 */
class SmartInteger {
private:
    // integer value of SmartInteger
    int num;

public:

    /**
     * @brief A default constructor for a SmartInteger.
     */
    SmartInteger();

    /**
     * @brief A parameterised constructor for a SmartInteger.
     *
     * @param num int value of the SmartInteger.
     */
    SmartInteger(int num);

    /**
     * @brief Const getter for int value of SmartInteger.
     */
    int getValue() const;

    /**
     * @brief Overloaded operator << for ostream and SmartInteger that
     * displays integer value of the SmartInteger.
     *
     * @param os the outstream the overloaded operator outputs to.
     * @param smartInt the SmartInteger that is being outputted as its
     * integer value.
     */
    friend std::ostream& operator<< (std::ostream& os,
                                     const SmartInteger& smartInt);

    /**
     * @brief Overloaded operator < comparing two SmartIntegers.
     *
     * @param a the left hand side SmartInteger being checked if it is less
     * than b.
     * @param b the right hand side SmartInteger being checked if it is
     * greater than a.
     */
    friend bool operator< ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator > comparing two SmartIntegers.
     *
     * @param a the left hand side SmartInteger being checked if it is
     * greater than b.
     * @param b the right hand side SmartInteger being checked if it is less
     * than a.
     */
    friend bool operator> ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator <= comparing two SmartIntegers.
     *
     * @param a the left hand side SmartInteger being checked if it is less
     * than or equal to b.
     * @param b the right hand side SmartInteger being checked if it is
     * greater than or equal to a.
     */
    friend bool operator<= ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator >= comparing two SmartIntegers.
     *
     * @param a the left hand side SmartInteger being checked if it is
     * greater than or equal to b.
     * @param b the right hand side SmartInteger being checked if it is less
     * than or equal to a.
     */
    friend bool operator>= ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator == checking if two SmartIntegers are equal.
     *
     * @param a the left hand side SmartInteger being checked if it is equal
     * to b.
     * @param b the right hand side SmartInteger being checked if it is equal
     * to a.
     */
    friend bool operator== ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator != checking if two SmartIntegers are not
     * equal.
     *
     * @param a the left hand side SmartInteger being checked if it is not
     * equal to b.
     * @param b the right hand side SmartInteger being checked if it is not
     * equal to a.
     */
    friend bool operator!= ( SmartInteger const& a, SmartInteger const& b);

    /**
     * @brief Overloaded operator + returning a SmartInteger that is the sum
     * of two SmartIntegers.
     *
     * @param b the right hand side SmartInteger being added to a.
     */
    SmartInteger operator+ (const SmartInteger& b) const;

    /**
     * @brief Overloaded operator - returning a SmartInteger that is the
     * difference of two SmartIntegers.
     *
     * @param b the right hand side SmartInteger being subtracted from a.
     */
    SmartInteger operator- (const SmartInteger& b) const;

    /**
     * @brief Overloaded operator * returning a SmartInteger that is the
     * product of two SmartIntegers.
     *
     * @param b the right hand side SmartInteger being multiplied by a.
     */
    SmartInteger operator* (const SmartInteger& b) const;

    /**
     * @brief Overloaded operator += that adds the two SmartIntegers and
     * stores the value in the SmartInteger operand a.
     *
     * @param b the right hand side SmartInteger being added to a.
     */
    SmartInteger& operator+= (const SmartInteger& b);

    /**
     * @brief Overloaded operator -= that subtracts the two SmartIntegers
     * and stores the value in the SmartInteger operand a.
     *
     * @param b the right hand side SmartInteger being subtracted from a.
     */
    SmartInteger& operator-= (const SmartInteger& b);

    /**
     * @brief Overloaded operator *= that multiplies the two SmartIntegers
     * and stores the value in the SmartInteger operand a.
     *
     * @param b the right hand side SmartInteger being multiplied by a.
     */
    SmartInteger& operator*= (const SmartInteger& b);

    /**
     * @brief Overloaded pre-increment operator ++ that adds 1 to the
     * SmartInteger a and returns the changed SmartInteger.
     */
    SmartInteger& operator++ ();

    /**
     * @brief Overloaded pre-decrement operator -- that subtracts 1 from the
     * SmartInteger a and returns the changed SmartInteger.
     */
    SmartInteger& operator-- ();
};

#endif //ASSIGNMENT5_SMARTINTEGER_HPP