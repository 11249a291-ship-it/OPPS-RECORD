#include<iostream>
using namespace std;
template <class T>
class Calculator{
    T num1,num2;
    public:
    Calculator(T n1):num1(n1){}
    void diaplay(){
        cout<<"Sum="<<num1+num2<<endl;
    }
};
int main(){
    Calculator<int>c1(20);
    Calculator<float>c2(3.5);
    c1.diaplay();
    c2.diaplay();
    return 0;
}
