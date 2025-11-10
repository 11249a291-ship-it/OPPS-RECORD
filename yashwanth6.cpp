#include<iostream>
using namespace std;
class person{
    private:
    int age;
    public:
    person(){
        age=20;
    }
    person(int a){
        age=a;
    }
    int getAge(){
        return age;
    }
};
int main(){
    person person1,person2(45);
    cout<<"Person1Age="<<person1.getAge()<<endl;
    cout<<"Person2Age="<<person2.getAge()<<endl;
    return 0;
}