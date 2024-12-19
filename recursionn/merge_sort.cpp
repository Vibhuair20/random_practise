#include<iostream>
using namespace std;

void mergeboth(int* arr, int s, int e){
    int mid = s+(e-s)/2;
    //length for two arrays
    int len1 = mid-s+1;
    int len2 = e-mid;
    //make two arrays
    int* arr1 = new int[len1];
    int* arr2 = new int[len2];
    //insert values in the index
    int forindex = s;
    for(int i=0;i<len1;i++){
        arr1[i] = arr[forindex++];
    }

    for(int i=0;i<len2;i++){
        arr2[i] = arr[forindex++];
    }

    //merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    forindex = s;
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[forindex++] = arr1[index1++];
        }
        else{
            arr[forindex++] = arr2[index2++];
        }
    }
    while(index1<len1){
        arr[forindex++] = arr1[index1++];
    }

    while(index2<len2){
        arr[forindex++] = arr2[index2++];
    }

    delete[] arr1;
    delete[] arr2;

}

void merge(int* arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    //sorting lest part
    merge(arr,s,mid);
    //sorting right part
    merge(arr,mid+1,e);
    //merge both the arrays
    mergeboth(arr,s,e); 
}

int main(){
int n;
cin>>n;
int* arr = new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

merge(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

cout<<"hello world!";

return 0;
}
