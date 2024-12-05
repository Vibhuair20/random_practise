#include<iostream>
using namespace std;

struct Process{
    // things to take as input
    int at;
    int bt;
    int id;
    int priority;

    //things need to be calculated
    int ct;
    int tat;
    int wt;
    int response_time;
    int remaining_time;
}

void preemptive(Process []p, int n){
    int completed =0;
    int current_time = 0;


    // initializing the remaining time
    for(int i=0;i<n;i++){
        p[i].remaining_time = p[i].bt;
        p[i].response_time = -1;
    }
    while(completed<n){
        int high_p =-1;
        int selected = -1;


        // terate thrugh the highest priority
        for(int i=0;i<n;i++){
            if(p[i].at <= ct && p[i].rt>0 && p[i].priority>high_pr)
        }
    }
}