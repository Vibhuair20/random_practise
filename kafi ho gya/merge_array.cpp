#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }

        else{
            arr3[k++]=arr2[j++];
        }
    }

    // the loop is over means one of the array size is over than it comes 
    // out and check for indivisual array

    while(i<n){
        arr3[k++]=arr1[i++];
    }

     while(j<n){
        arr3[k++]=arr1[j++];
    }

}


void print(int ans[], int n){
    for(int i=0;i<n;i++){
        cout<< ans[i]<<" ";
        cout<<endl;
    }
}

int main(){

int arr1[5] ={2,4,5,7,8};
int arr2[4] ={3,6,8,2};

int arr3[9] = {0};

merge(arr1, 5, arr2, 4, arr3);
print(arr3,9);

return 0;
}
