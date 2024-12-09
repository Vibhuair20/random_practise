// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e){
//     int pivot = arr[s];
//     int cnn =0;
//     for(int i=s+1;i<=e;i++ ){
//         if(arr[i]<=pivot){
//             cnn++;
//         }
//     }
//     int pivotindex = s+cnn;
//     swap(arr[pivotindex],arr[s]);
    
//     //now for left and right part
//     int i=s;int j=e;
//     while(i<pivotindex&&j>pivotindex){
//         while(arr[i]<pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<pivotindex && j>pivotindex){
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivotindex;
// }

// void quick(int arr[],  int i, int j){
    
//     //base case
    
//     if(i>=j){
//         return;
//     }
//     //return 
//     //recursive call
//     //partition
//     int p=partition(arr,i,j);
//     //lest side
//     quick(arr,i,p-1);
//     //right side
//     quick(arr,p+1,j);

    
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     quick(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int partition(int arr[],int s, int e){
    int pivot = arr[s];
    int cnn=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<arr[pivot]){
            cnn++;
        }
    }
    int pivotindex = s+cnn;
    swap(arr[s],arr[pivotindex]);

    int i = s; int j = e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i]<pivotindex){
            i++;
        }
        while(arr[j]>pivotindex){
            j--;
        }
        if(i<pivotindex&&j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;

}

void quick(int arr[], int i, int j){
    //base case
    if(i>=j){
        return ;
    }
    //return 
    //recursive call
    int p = partition(arr,i,j);
    //on left side
    quick(arr,i,p-1);
    //on right side
    quick(arr,p+1,j);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<< endl;
    }
    return 0;
}