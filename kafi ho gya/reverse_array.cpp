#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n){
    int start =0;
    int end =n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main(){

int arr[6] = {1,3,5,7,9,-3};
int brr[3] = {4,7,3};


reverse(arr, 6);
reverse(brr,3);


printArray(arr,6);
printArray(brr,3);

cout<<"hello world!";

return 0;
}
