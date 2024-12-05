#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return false;
    
    }

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
}

int main(){

//cout<<"hello world!";
int n;
cout<<"enter the number "<<endl;
cin>>n;

if(isprime(n)){
    cout<<"it is a prime number "<< endl;
}
else{
    cout<<"it is not a prime number: "<<endl;

}



return 0;
}
