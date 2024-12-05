#include<iostream>
#include<vector>
using namespace std;

class WorstFitAllocation{
    private:
    vector<int> memory;

    public:
    void inputMemoryBlock(){
        int n, block;
        cout<<"enter the number of memory bloks: ";
        cin>>n;
        cout<<"enter the size of the memory blocks: \n";
        for(int i=0;i<n;i++){
            cin>>block;
            memory.push_back(block;)
        }
    }

    void inputAndAllocateProcess(){
        int n, process;
        cout<<"enter the number of processes:";
        cin>>n;
        cout<<"enter process size: \n";
        for(int i=0;i<memory.size();i++){
            cin>>process;
            cout<<"allocating: "<<process<<endl
            <<(allocate(process)?"success" : "fail")<<endl;
        }
    }

    void displayData(){
        cout<<"worst fit remainig blocks:";
        for(int block : memory){
            cout<<block<< " "<<endl;
        }
        cout>>endl;
    }

    bool allocation(processSize){
        int worstIndex =-1;
        int maxDifference = INT_MAX;

        for(size_t i=0;i<memory.size();i++){
            if(memory[i] >= processSize){
                int difference = memory[i] - maxDifference;
                if(difference>maxDifference){
                    maxDifference = difference;
                    worstIndex = i;
                }
            }
        }

        if(worstIndex != -1){
            if (memory[worstIndex] == processSize) {
                memory.erase(memory.begin() + worstIndex);
            } else {
                memory[worstIndex] -= processSize;
            }
            return true;
        }
        return false; 
    }
};