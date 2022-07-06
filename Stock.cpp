//
// Created by XMC on 2022/6/29.
//

#include "Stock.h"
#include <iostream>
#include <string>
namespace sn{
    int a =10;
}
void Stock::acquire(const std::string &co_n, int n, double shares_value) {
    using namespace sn;

    std::string company;
    company=co_n;
    if (n<0){
        std::cout<<"输入的数字不符合规范重新输入"<<std::endl;
        shares=0;
    }else{
        shares=n*shares_value;
        number=100;
        sale_tol();
    }
    std::cout<<"a:"<<sn::a<<std::endl;
    std::cout<<"a:"<<a<<std::endl;



}
void Stock::show() {
    std::cout<<"The shares total value is :"<<shares<<"\n";
}
