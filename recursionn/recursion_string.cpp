// ? reversal of string
// #include<iostream>
// using namespace std;

// void reverse(string& str, int s, int e){
//     // base case
//     cout<<"the steps are: "<<str<<endl;
//     if(s>e){
//         return;
//     }
//     swap(str[s], str[e]);
//         s++;
//         e--;
//     cout<<"the second step from previous is: "<<str<<endl;
//     //recursive
//     reverse(str, s, e);
// }

// int main(){
//     string name = "vibhu";
//      reverse(name,0,  name.length()-1);
//     cout<<endl;
//     cout<<"the reverse string is: "<<name<<endl;
//     cout<<endl;

// cout<<"hello world!";

// return 0;
// }

//! using only single pointer
// #include<iostream>
// using namespace std;

// void reverse(string& str , int i){
//     if(i>str.length()){
//         return;
//     }
//     swap(str[i],str[str.length()-1]);
//     i++;
//     str.length();

//     reverse(str,i);
// }

// int main(){

//     string name="vibhu";
//     reverse(name,0);
//     cout<< name;
//     cout<<"hello world"<<endl;
// }


//? chrck for palindrome
#include<iostream>
using namespace std;

bool palindrome(string& str, int i, int j){
    //base case
    if(i>=j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }
    
    cout<<"chrecking"<<str<<endl;
    //return
    //recursive call
     return palindrome(str,i+1,j-1);
}

int main(){
    string name = "abba";
    bool rigth = palindrome(name,0,name.length()-1);
    if(rigth){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not a plaindrome"<<endl;
    }
    cout<<"hello world\n";
    return 0;
}