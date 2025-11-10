#include<iostream>
using namespace std;
class Sample{
    int x,y;
    public:
    Sample(){
        x=0;
        y=0;
        cout<<"Default Constructor Called"<<endl;
    }
    Sample(int a,int b){
        x=a;
        y=b;
        cout<<"Default Constructor Called"<<endl;
    }
    Sample(const Sample &s){
        x=s.x;
        y=s.y;
        cout<<"Copy Constructor Called"<<endl;
    }
    void display(){
        cout<<"X="<<x<<",y="<<endl;
    }
    ~Sample(){
        cout<<"Destructor called for object"<<endl;
    }
};
int main(){
    Sample s1;
    Sample s2(10,20);
    Sample s3=s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}