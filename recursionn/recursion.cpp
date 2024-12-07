// ! need to create a base case , mandatory to return , cause we need to know when to stop
// ! there will be segmentation fault when no return -> stack overflow
// mandatory to return 



//? problem 1 on recursove relation
// #include<iostream>
// using namespace std;

// int power(int n){
//     //base case
//     if(n==0){
//         return true;
//     }
//     //recursive case
//     // int smallerprob = power(n-1);
//     // int biggerprob = 2 * smallerprob;

//     return 2 * power(n-1);
// }

// int main(){
// int n;
// cin>>n;

// cout<<power(n)<<endl;

// return 0;
// }


//? problem 2 -> print counting
// #include<iostream>
// using namespace std;

// void count(int n){
//     //base case
//     if(n==0){
//         return;
//     }

//     // recursive call
//     cout<<n<<endl;
//     count(n-1);
// }


// int main(){
//     int n;
//     cin>>n;

//     count(n);
//     return 0;
// }


//? fibonacci series
// #include<iostream>
// using namespace std;

// int fib(int n){
//     //base case
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     int ans = fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" "<< endl;
// }
// cout<<"hello world!";

// return 0;
// }


// ? say digits

// ? sorted array -recursove function
// #include<iostream>
// using namespace std;

// bool issorted(int arr[], int size){
//     // base case
//     if(size == 1 || size == 0){
//         return true;
//     }
//     //return
//     //recursive function
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool remainingpart = issorted(arr + 1, size-1);
//         return remainingpart;
//     }
// }

// int main(){
//     int arr[5] = {2,4,6,7,4};
//     int size=5;
//     bool ans = issorted(arr, size);

//     if(ans){
//         cout<<"the array is sorted"<<endl;
//     }
//     else{
//         cout<<"the array is not sorted"<<endl;
//     }
// }

//? sum of arrays
// #include<iostream>
// using namespace std;

// int sum(int arr[], int size){
//     //base case
//     if(size == 0){
//         return 0;
//     }
//     if( size == 1){
//         return arr[0];
//     }
//     //return
//     //recursive function    
//     int addition = arr[0] + sum( arr +1 , size-1);
//     return addition;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5; //size

//     int ans = sum(arr,size);

//     cout<<"the sum of the array is " << ans << endl;
//     return 0;
// }

// ? linear search
// #include<iostream>
// using namespace std;

// bool linear(int arr[], int size, int k){
//     //base case
//     if(size == 0){
//         return false;
//     }
//     if(arr[0] == k){
//         return true;
//     }
//     else{
//         bool remainigPart = linear(arr+1,size-1,k);
//         return remainigPart;
//     }
//     //return 
//     // recursion function
   
    
// }

// int main(){
//     int n = 5;
//     int k = 2;
//     int arr[5] = {3,5,5,76,8};

//     bool ans = linear(arr,n,k);
//     if(ans){
//         cout<<"it is found: "<<endl;
//     }
//     else{
//         cout<<"it is not found"<<endl;
//     }
//     return 0;
// }

//? binary search
#include<iostream>
using namespace std;

void print(int arr[],int s, int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" "<<endl;
    } cout<<endl;
}

bool binary(int arr[], int s, int e, int k){
    cout << endl;
    print(arr,s,e);
    //base case
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    // return
    //recursive function
    if(arr[mid] < k ){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}

int main(){
    int arr[5] = {1,6,8,9,23};
    int size = 5;
    int key = 9;
    cout<<"present or not: "<<binary(arr,0,size-1,key)<<endl;
    cout<<endl;
    return 0;
}