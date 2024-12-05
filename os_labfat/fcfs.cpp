// #include <iostream>
// using namespace std;

// // Simple Process Structure
// struct Process {
//     int id;
//     int arrivalTime;
//     int burstTime;
// };

// void fcfsScheduling(Process p[], int n) {
//     // Variables to track time and calculations
//     int waitingTime[n], turnAroundTime[n];
//     int totalWaitTime = 0, totalTurnAroundTime = 0;

//     // First process waiting time is always 0
//     waitingTime[0] = 0;

//     // Calculate waiting time for all processes
//     for (int i = 1; i < n; i++) {
//         waitingTime[i] = waitingTime[i-1] + p[i-1].burstTime;
//     }

//     // Calculate turn around time
//     for (int i = 0; i < n; i++) {
//         turnAroundTime[i] = waitingTime[i] + p[i].burstTime;
//         totalWaitTime += waitingTime[i];
//         totalTurnAroundTime += turnAroundTime[i];
//     }

//     // Print Results
//     cout << "Process\tArrival\tBurst\tWaiting\tTurnAround\n";
//     for (int i = 0; i < n; i++) {
//         cout << p[i].id << "\t" 
//              << p[i].arrivalTime << "\t" 
//              << p[i].burstTime << "\t" 
//              << waitingTime[i] << "\t" 
//              << turnAroundTime[i] << endl;
//     }

//     // Print Averages
//     cout << "\nAverage Waiting Time: " 
//          << (float)totalWaitTime / n << endl;
//     cout << "Average Turn Around Time: " 
//          << (float)totalTurnAroundTime / n << endl;
// }

// int main() {
//     int n;
//     cout << "Enter number of processes: ";
//     cin >> n;

//     Process p[n];

//     // Input Process Details
//     for (int i = 0; i < n; i++) {
//         p[i].id = i + 1;
//         cout << "Process " << p[i].id << endl;
//         cout << "Arrival Time: ";
//         cin >> p[i].arrivalTime;
//         cout << "Burst Time: ";
//         cin >> p[i].burstTime;
//     }

//     // Call FCFS Scheduling
//     fcfsScheduling(p, n);

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

struct Process{
    int at;
    int bt;
    int id;
};

void FFCSscheduling(Process p[], int n){
    int wt[n], int tat[n];
    int wt[0];
}