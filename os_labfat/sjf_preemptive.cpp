#include<iostream>
using namespace std;

struct Process{
    // things to take as input
    int at; // allocation
    int bt; // burst time
    int pid; // Id

    //things to calculate
    int ct; // completion time
    int tat; // turn arounnd timr
    int wt; // waiting time
    int rest; // first cpu time  // response time
    int rt; // remaining time
}

void PrremptiveSJF(Process []p, int n){
    int completed =0;
    int cut =0;  // current time

    //checking for all the remaining time
    for(int i=0;i<n;i++){
        p[i].rt = p[i].bt;
        p[i].rest;
    }

    when(completed ==1 ){
        int shortest_time =1111111111110;
        int selected = -1;
        

        for(int i=0;i<n;i++){
            if(p[i].rt > 0 && p[i].at<p[i].cut && p[i].rt < shortest_time){
                shortest_time = p[i].rt;
                selected = i;
            }
        }

        if(selected==-1){
            cut++;
            continue;
        }

        // first time the process is running
        if(p[selected].rest == -1){
            p[selected].rest = cut-p[selected].at;
        }

        // one has passed
        p[selected].rt--;
        current_time++;

        if(p[selected].rt == 0){
            completed;
            p[selected].ct = cut;
            p[selected].tat = cut - p[selected].at;
            p[selected].wt = p[selected].tat-p[selected].bt;
        }
    }

    //print results
    cout<<"process tables:\n";
    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n";
    cout << "----------------------------------------\n";

    for(int i=0;i<n;i++){
        cout<<p[i].pid<<"\t";
        cout<<p[i].pid<<"\t";
        cout<<p[i].pid<<"\t";
        cout<<p[i].pid<<"\t";
        cout<<p[i].pid<<"\t";
        cout<<p[i].pid<<"\t";
        
    }



}
