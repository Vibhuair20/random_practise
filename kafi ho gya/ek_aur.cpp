#include<iostream>
using namespace std;

//finding the number present in the matrix
bool ispresent(int arr[][3], int target, int i, int j){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}


//to find the largest sum of a row
int largestrowsum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowindex= -1;

    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];

        }

        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"the maximum sum is :"<<maxi<<endl;
    return rowindex;
}

int main(){


int arr[3][3];

// taking the input

cout<<"enter the matrix: "<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}

//print the matrix
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<< arr[i][j]<< " ";
    }
    cout<<endl;
}


cout<<"enter the element to search: "<<endl;
int target;
cin>>target;

if(ispresent(arr, target, 3, 3)){
    cout<<"element found "<< endl;
}
else{
    cout<<"not found: "<<endl;
}

int finalans = largestrowsum(arr,3,3);
cout<<"the maximum sum is at index : "<<finalans;

cout<<endl;

return 0;
}
