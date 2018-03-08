/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.hpp
 * Author: Cristian
 *
 * Created on 8 de marzo de 2018, 10:11 AM
 */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>


class Account {
public:
    Account();
    Account(std::string number);
    std::string getNumber();
    void setNumber(std::string number);
    double getResidue();
    virtual void deposit(double value);
    virtual bool retirement(double value);
    virtual ~Account();
private:
    std::string number;   
protected:
    double residue;
};

#endif /* ACCOUNT_HPP */

