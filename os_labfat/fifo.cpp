#include<iostream>
#include<vector>
using namespace std;

class FIFOPageReplacement{
    private:
    vector<int> frames;
    int capacity;
    int pageFaults;

    public:
    void Input(){
        int n, ref_str;
        cout<<"enter the size of the block";
        cin>>n
        cout<<"enter the values in the iput:\n";
        for(int i=0;i<n;i++){
            cin>>ref_str;
            memory.push_back(ref_str);
        }
    }

    void initialize(){
        cout<<"enter the nmber of frames:";
        cin>>capacity;
        pageFaults =0;
    }

    void isPagePresent(){
        for(int i=0;i<frames.size();i++){
            if(frames[i]==page){
                return true;
            }
        }
            return false;
    }

    void displayframes(){
        for(int i=0;i<frames.size();i++){
            cout<<frames[i]<<" ";
        }
        cout<<endl;
    }

    void replacePage(int page){
        if(!isPagePresent(page)){
            pageFaults++;

            if(frames.size() < capacirt ){
                frames.push_back(page);
            }else{
                int victimPage = page.Queue.fromt();
                pageQueue.pop();

                for(int i=0;i<frames.size();i++){
                    if(frames[i] == victimPage){
                        frames[i] = page;
                        break;
                    }
                }
            }
            pageQueue.push(page);
            cout << "Page " << page << " -> ";
            displayFrames();
        } else {
            cout << "Page " << page << " already present\n";
        }
    }


};