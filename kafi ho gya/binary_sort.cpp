#include<iostream>
using namespace std;


int binarysearch(int arr[], int size, int key){

    int start =0;
    int end =size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        
        if(key > arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }

        mid = start + (end-start)/2;

    }

    return -1;


}


int main(){

    int even[6] = {2,3,4,5,6,7};
    int odd[5] = {4,5,6,6,9};

    int evenindex = binarysearch(even, 6, 5);
    cout << "index of 5 is "<< evenindex<< endl;

    int oddindex = binarysearch(odd, 5, 6);
    cout <<"index of 6 is: "<< oddindex<< endl;

    return 0;
}