#include<iostream>
using namespace std;
class Person{
    private:
    int age;
    public:
    Person(){
        age=20;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Person person1,person2(45);
    cout<<"Person1Age="<<person1.getAge()<<endl;
    cout<<"Person2Age="<<person2.getAge()<<endl;
    return 0;
}