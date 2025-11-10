#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"Brand:"<<brand
        <<".Processor:"<<processor
        <<",RAM:"<<ram<<"GB"<<endl;
    }
};
int main(){
    Laptop a1,a2;
    a1.brand="Dell";
    a1.processor="Intel i5";
    a1.ram=8;
    a2.brand="HP";
    a2.processor="AMD Ryzen 5";
    a1.ram=16;
    a1.display();
    a2.display();
    return 0;
}