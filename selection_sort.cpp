#include<iostream>
using namespace std;

void selection(int arr[], int n,int index=0){
    //base case
    if(index==n-1){
        return;
    }
    //return
    //recursive call
    int minindex= index;
    for(int i=index+1;i<n;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    swap(arr[index], arr[minindex]);
    cout<<"the steps are: "<<arr<<endl;
    selection(arr,n,index+1);

}

int main(){
    int n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    selection(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}