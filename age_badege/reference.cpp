#include<iostream>
using namespace std;

//a copy is create.  different memory
void update(int n){
    n++;
}
// same memory but new name
//pass_by_reference
void update2(int& m){
    m++;
}

//very bad practise
//return by reference
int& fun(int n){
    int num =a; // this is a local variable
    int& sum = num;
    return sum;
}

int main(){

int i=5;

int& j =i;

cout<<"value of i is: "<< j << endl;
cout<<"value of j is: "<< j << endl; 
cout<<"new value of i is:"<< i << endl;
j++;
cout<<"value of is:"<<i<<endl;
cout<<endl;
//for n
int n=5;
cout<<"before n: "<< n<<endl;
update(n);
cout<<"after n: "<<n<<endl;

//for m
int k=3;
cout<<"before k: "<<k<<endl;
update2(k);
cout<<"after k: "<<k<<endl;


return 0;
}
