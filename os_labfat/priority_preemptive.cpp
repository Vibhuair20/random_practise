#include<iostream>
#include<vector>
using namespace std;

struct Process{
    // we wnter these as inputs
    int id;
    int at; // arrival time
    int bt; // burst time
    int priority; // priority

    //we calculate these
    int rt; // how much is still left to process
    int ct; // process completes full
    int tat; // turnaround time
    int wt; // total time spend waiting
    int res_t; // when process first gets cpu

    void preemptive(Process p[], int n){
        int completed =0; // no of completed process
        int current_time = 0; // what is the current time

        //initialioze the remaining times
        for(int i=0;i<n;i++){
            p[i].rt = p[i].bt;
            p[i].res_t = -1;
        }

        while(completed<n){
            int high_p =-1;
            int selected =-1;


        //finding highest priority process
        for(int i=0;i<n;i++){
            if(p[i].at <= ct && p[i].rt>0 && p[i].priority>high_p){
                high_p = p[i].priority; 
                selected =i;
            }
        }

        // if no process id found
        if(selected == -1){
            current_time++;
            continue;
        }

        //if it is first time running in the cpu
        if(p[selected].res_t == -1){
            p[selected].res_t = current_time-p[selected]at;
        }

        p[selected].rt--;
        current_time++;

        //process is completed
        if(p[selected].rt == 0){
            completed++;

            p[selected].ct = current_time;
        }



        }
        
    }
}