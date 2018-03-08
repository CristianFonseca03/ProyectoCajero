/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Account.cpp
 * Author: Cristian
 * 
 * Created on 8 de marzo de 2018, 10:11 AM
 */

#include "Account.hpp"

Account::Account() {
}

Account::Account(std::string number) {
    this->number=number;
    this->residue=residue;
}

std::string Account::getNumber() {
    return number;
}

void Account::setNumber(std::string number) {
    this->number=number;
}

double Account::getResidue() {
    return residue;
}

void Account::deposit(double value) {
    residue += value;
}

bool Account::retirement(double value) {
    
}

Account::~Account() {
}

