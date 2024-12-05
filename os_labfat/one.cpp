#include <iostream>
#include <vector>
using namespace std;

class BankersAlgorithm {
private:
    int processes, resources;
    vector<vector<int>> allocation;
    vector<vector<int>> max;
    vector<int> available;
    vector<int> work;
    vector<bool> finished;

public:
    BankersAlgorithm(int p, int r) : 
        processes(p), resources(r),
        allocation(p, vector<int>(r)),
        max(p, vector<int>(r)),
        available(r),
        work(r),
        finished(p, false) {}

    void input() {
        cout << "Enter Allocation Matrix:\n";
        for (int i = 0; i < processes; i++) {
            for (int j = 0; j < resources; j++) {
                cin >> allocation[i][j];
            }
        }

        cout << "Enter Max Matrix:\n";
        for (int i = 0; i < processes; i++) {
            for (int j = 0; j < resources; j++) {
                cin >> max[i][j];
            }
        }

        cout << "Enter Available Resources:\n";
        for (int j = 0; j < resources; j++) {
            cin >> available[j];
        }
    }

    bool isSafeState() {
        // Reset work to available
        work = available;
        finished.assign(processes, false);
        vector<int> safeSequence;

        int count = 0;
        while (count < processes) {
            bool found = false;

            for (int i = 0; i < processes; i++) {
                if (!finished[i]) {
                    bool possible = true;
                    
                    // Check if current process can be allocated
                    for (int j = 0; j < resources; j++) {
                        if (max[i][j] - allocation[i][j] > work[j]) {
                            possible = false;
                            break;
                        }
                    }

                    if (possible) {
                        // Allocate resources
                        for (int j = 0; j < resources; j++) {
                            work[j] += allocation[i][j];
                        }
                        
                        safeSequence.push_back(i);
                        finished[i] = true;
                        found = true;
                        count++;
                    }
                }
            }

            // If no process can be allocated
            if (!found) {
                break;
            }
        }

        // Check if all processes are finished
        if (count == processes) {
            cout << "Safe Sequence: ";
            for (int p : safeSequence) {
                cout << p << " ";
            }
            cout << endl;
            return true;
        }

        return false;
    }
};

int main() {
    int processes, resources;

    cout << "Enter number of processes: ";
    cin >> processes;
    
    cout << "Enter number of resources: ";
    cin >> resources;

    BankersAlgorithm banker(processes, resources);
    
    banker.input();

    if (banker.isSafeState()) {
        cout << "System is in a safe state.\n";
    } else {
        cout << "System is in an unsafe state (Potential Deadlock).\n";
    }

    return 0;
}