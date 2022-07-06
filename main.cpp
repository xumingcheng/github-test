
#include <iostream>
#include "name_function.h"
#include "Stock.h"
using namespace std;
void function_01(int &a,int b);


int main(){
    int name,number,abc;
    name =34;
    number=2;
    std::cout<<"nihao"<<std::endl;
    std::cout<<name<<std::endl;
    std::string global_str="anhui agricultural university\n";
    std::cout<<global_str<<std::endl;
    std::cout<<sizeof(name)<<std::endl;


    std::cout<<global_str<<std::endl;

    Stock apple;
    apple.acquire("aplle",20,20.67);
    apple.show();
    int b=100;
    function_01(b,2);
    //cout<<"sn的namespce:="<<sn::
    return 0;
}
void function_01(int &a,int b){
    int count =10;
    int &count_01=count;
    cout<<"count01:"<<count_01<<endl;
    cout<<"count:"<<a+b<<endl;
}
