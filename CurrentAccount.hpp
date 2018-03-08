/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CurrentAccount.hpp
 * Author: Cristian
 *
 * Created on 8 de marzo de 2018, 10:28 AM
 */

#ifndef CURRENTACCOUNT_HPP
#define CURRENTACCOUNT_HPP

#include "Account.hpp"
#include <string>


class CurrentAccount :public Account{
public:
    CurrentAccount();
    CurrentAccount(double overdraft, std::string number);
    double getOverdraft();
    void setOverdraft(double overdraft);
    bool retirement(double value) override;
    void deposit(double value) override;
    virtual ~CurrentAccount();
private:
    double overdraft;
};

#endif /* CURRENTACCOUNT_HPP */

