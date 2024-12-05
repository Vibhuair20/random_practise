#include<iostream>
using namespace std;
// to showcase the dynamic memory allocation
//static memory allocation

// int staticMemory(int arr, int n){
//     int m;
//     cin >> m;
//     arr[m];
// }
// function to count the sum of the bytes in the array
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

int n;
cin>>n;

//dynamic memory allocation of a variable
int *arr = new int[n];

//taking input in the array
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ans = getSum(arr,n);
cout<<"the sum of address is: "<< ans << endl;

//everything is fine
cout<<"hello world!";

return 0;
}
