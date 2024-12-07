#include<iostream>
using namespace std;

void bubble(int arr[], int n){
    //base case
    if(n==0||n==1){
        return;
    }
    
    //return
    //recursive call
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<"steps"<<arr[n]<<endl;
    bubble(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}