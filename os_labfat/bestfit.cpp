#include<iostream>
#include<vector>
using namespace std;

class BestFirallocation{
    private:
    vector<int> memory;

    public:
    void inputmemblo(){
        int n, block;
        cout<<"enter the number of memory blocks: "<<endl;
        cin>>n;
        cout<<"enter memory block sizes:"<<endl;
        for(int i=0;i<n;i++){
            cin>>block;
            memory.push_back(block);
        }
    }

    bool allocate(int processSize){
        int bestIndex = -1;
        int minDifference = INT_MAX;

        for(size_t i=0;i<memory.size();i++){
            if(memory[i] >= processSize){
                int difference = memory[i] - processSize;
                if (difference<minDifference){
                    minDifference = difference;
                    bestIndex =i;
                }
            }
        }
        if(bestIndex != -1){
            if(memory[bestIndex] == processSize){
                memory.erase(memory.begin() + bestIndex);
            }else{
                memory[bestIndex] -= processSize;
            }
            return true;
        }
        return false;

    }

    void displaymemory(){
        cout<<"best fit remaining blocks: ";
        for(int block : memory){
            cout<<block<<" ";
        }
        cout<<endl;
    }
    

    void inputandallocate(){
        int n, process;
        cout<<"enter the number of process: "<<endl;
        cin>>n;
        cout<<"enter process size:\n";
        for(int i=0;i<n;i++){
            cin>>process;
            cout<<"allocating: "<<process<<" "
                <<(allocate(process) ? "success" : "fail")<<endl;

        }
    }
};

int main(){
    BestFirallocation bestfit;
    bestfit.inputmemblo();
    bestfit.inputandallocate();
    bestfit.displaymemory();
    return 0;
}