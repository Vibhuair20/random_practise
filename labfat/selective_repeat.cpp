#include<iostream>
#include<vector>
#include<chrono>
#include<thread>
using namespace std;

void sendframe( int framenum){
    cout<<"sending frame:"<<framenum<<endl;
    this_thread::sleep_for(chrono::milliseconds(500));
}

void recAck(int framenum){
    return (rand() % 100 <80);
}

int main(){
int totalframe, winsize;
cin>>totalframe;
cin>>winsize;

vector<bool> acked(totalframe, false);
int base =0;

while(base<totalframe){
    cout<<base<<"to"<<min(base+winsize-1)<<endl;
    
    
    }

cout<<"hello world!";

return 0;
}
