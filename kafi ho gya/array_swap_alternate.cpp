#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alt_reverse(int arr[], int n){
    int temp;
    temp=0;
    for(int i=0; i<n; i =i+2){
        if(i+1<n){
            temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
            // or we can use swap(arr[i], arr[i+1])
        }
    }

}

int main(){

int arr[6] = {1,2,3,4,5,6};
int brr[5]= {6,7,8,9,10};

printArray(arr, 6);
printArray(brr, 5);

alt_reverse(brr,5);
alt_reverse(arr,6);

printArray(arr,6);
printArray(brr, 5);


cout<<"hello world!";

return 0;
}
