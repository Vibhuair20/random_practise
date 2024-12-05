#include<iostream>
using namespace std;

int main(){

// int nm =8;
// // this is the first method to initialize
// int *p = &nm;

// int vib = 7;
// // this is the second method to initialize the pointer
// int *q=0;
// q = &vib;

// int la;
// int *u = &la;

// // copying the pointer

// int *a = q;
// a++;

// // incrementing in the pointer
// int i=1;
// int *t = &i;
// *t = *t +1;
// cout << *t << endl;
// cout<< (*t)++ * 2 << endl;
// cout<<t<<endl;
// // it shifts 4 bytes cause int is of 4 bytes
// cout<< t+1 << endl;
// cout<<"first number is : "<<*p<<endl;
// cout<<"first number is : "<<p<<endl;
// cout<<"Second number is : "<<*q<<endl;
// cout<<"Second number is : "<<q<<endl;
// cout<<"Third number is : "<<*u<<endl;
// cout<<"fourth number is : "<<q<<endl;

int a[29] = {2,5,7,3,56};
cout<< &a << endl;

// int *p = &a;
int *q = &a[0];

// cout<< *p << endl;
cout<< q << endl;

cout<<"hello world!";

return 0;
}
