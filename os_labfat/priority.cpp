#include<iostream>
using namespace std;

struct Process{
    int pid;
    int at;
    int bt;
    int pri;
    int rt;
    int ct;
    int tat;
    int wt;
    int response_time;
};

void prioritPreemptive(Process p[], int n){
    int completed =0;
    int current_time =0;
    int total_turnaround =0;
    int total_waiting=0;

    //initialize remaining time and response time
    
}
