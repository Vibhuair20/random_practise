#include<iostream>
#include<vector>
using namespace std;

class FirstFirAllocation {
    private:
    vector<int> memory;

    public:
    void inputMemoryBlock(){
        int n, block;
        cout<<"enter the number of memory blocks: ";
        cin>>n;
        cout<<"enter memory block sizes:\n";
        for(int i=0;i<n;i++){
        cin>>block;
        memory.push_back(block);
        }
    }

    bool allocate(int processSize){
        for(auto it = memory.begin();it != memory.end();++it){
            if(*it >= processSize){
                if(*it == processSize){
                    memory.erase(it);
                }
                else{
                    *it -= processSize;
                }
                return true;
            }
        }
        return false;
    }

    void displaymem(){
        cout<<"first fit remaining blocks: ";
        for(int block : memory){
            cout<<block<< " ";
        }
        cout<<endl;
    }

    void inputallocateprocess(){
        int n, process;
        cout<<"enter the number of process: ";
        cin>>n;
        cout<<"enter proess sizes: "<<endl;
        for(int i=0;i<n;i++){
            cin>>process;
            cout<<"allocating"<<process<<":"<<(allocate(process)? "success": "failed")<<endl;

        }
    }
};

int main(){
    FirstFirAllocation alloc;
    alloc.inputMemoryBlock();
    alloc.inputallocateprocess();
    alloc.displaymem();
    return 0;

}