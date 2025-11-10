#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void getData(){
        cout<<"Enter a value:";
        cin>>a;
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"Value of a="<<endl;
      }
};
int main(){
    Derived obj;
    obj.display();
    return 0;
}