#include<iostream>
#include<csignal>
#include<cstdlib>
using namespace std;
void singalHandling(int singum){
    cout<<"\nlnterrupt signal("<<singum<<")received.\n";
    exit(singum);
}
int main(){
    signal(SIGINT,singalHandling);
    while(1){
        cout<<"Running...Press Cntrl+C to stop.\n";
        for (volatile int i=0;i<100000000;++i);
    }
    return 0;
}