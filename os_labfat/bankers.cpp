// take the total a, b and c
// first create the allocation and max need table
// take sum of the allocation for a, b and c
// take difference from the total by the allocation
// calculate the remaining need
// check the avaliable and compare with remaining
// if not then it is in deadlock and have tp create a new sequence
// have to check one by one in the remaining->  remaining<= avaliable  for all the process
// then add the allocation from the allocation table and add in avaliable

#include<iostream>
#include<vector>
using namespace std;

class bankersAlgorithm{
    private:
    int process, resources;
    vector<vector<int> > allocation;
    vector<vector<int> > max;
    vector<int> avaliable;
    vector<int> remaining;
    vector<int> finished;

public: 
    bankersAlgorithm(int p, int r):
    process(p), resources(r),
    allocation(p, vector<int>(r)),
    max(p, vector<int>(r)),
    avaliable(r),
    remaining(r),
    finished(p, false) {}

    void input(){
        cout<<"enter the allocation matrix:\n"

    }

    bool isSafe(){
        remaining = avaliable;
        finished.assign(process, false);
        vector<int> safeseq;

        int count =0;
        while(count<process){
            bool found = false;

            for(int i=0;i<process;i++){
                if(!finished[i]){
                    bool possible = true;

                    // trying is the current process can be fitted
                    for(int j=0;j<resources;j++){
                        if(max[i][j]-allocation[i][j]> remaining[i][j]){
                            possible = false;
                            break;
                        }
                    }

                    if(possible){
                        for(int j=0;j<resources;j++){
                            work[j] += allocation[i][j]
                        }

                        safeseq.push_back(i);
                        finished[i] = true;
                        bool = true;
                        count++;
                    }
                }
            }
            if(!found){
                break;
            }
        }

        // check if all the process are finished
        if(coutn == process) {
            cout<<'safe sequence'<<endl;
            for(int p : safeseq ){
                cout<<p<< " ";
            }
        cout<<endl'
        return true;
        }

        return false;
    }




};

int main(){
    int process, resources;
    cout<<"enter the number of process: "<<endl;
    cin>>process;
    cout<<"enter the number of resources: "<<endl;
    cin>>resources;

    bankersAlgorithm banker(process, resources);
    banker.input();

    if(banker.isSafe()){
        cout<<"banker is in safe state.\n"<<endl;
    }
    else{
        cout<<"banker is in deadlock state\n";
    }
    return 0;
}