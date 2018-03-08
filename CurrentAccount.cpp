/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CurrentAccount.cpp
 * Author: Cristian
 * 
 * Created on 8 de marzo de 2018, 10:28 AM
 */

#include "CurrentAccount.hpp"

CurrentAccount::CurrentAccount() {
}

CurrentAccount::CurrentAccount(double overdraft, std::string number): Account(number) {
    this->overdraft=overdraft;
}

double CurrentAccount::getOverdraft() {
     return overdraft;
}

void CurrentAccount::setOverdraft(double overdraft) {
    this->overdraft=overdraft;
}

bool CurrentAccount::retirement(double value) {
    if ( value <= ( residue + overdraft ) ){
            residue -= value;
            return true;
        }
    return false;
}

void CurrentAccount::deposit(double value) {

}

CurrentAccount::~CurrentAccount() {
}

