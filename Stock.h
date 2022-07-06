//
// Created by XMC on 2022/6/29.
//

#ifndef C__PROGRAM_STOCK_H
#define C__PROGRAM_STOCK_H
#include <iostream>


class Stock {
private:
    std::string company_name;
    double shares;
    int number;
    void sale_tol(){std::cout<<shares*number<<std::endl;}
public:
    void acquire(const std::string &co_n,int n,double shares_value);
    void sell(int n,double shares_value);
    void buy(int n,double shares_value);
    void show();





};


#endif //C__PROGRAM_STOCK_H
