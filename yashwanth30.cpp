#include<iostream>
using namespace std;
class Number {
int x, y;
public:
void getData(int a, int b) {
x = a; y = b;
}
void operator++() {
++x;
++y;
}
void display() {
    cout<<"X="<<x<<",Y="<<y<<endl;
  }
};
int main() {
Number n;
n.getData(5, 10);
cout<<"Before increament:";
n.display();
++n; 
cout<<"After increament:";
n.display();
return 0;
}