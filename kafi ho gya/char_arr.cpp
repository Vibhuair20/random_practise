#include<iostream>
using namespace std;

//upper to lowercase
char lowercase(char x){
    if(x >='a' && x<='z'){
        return x;
    }
    else{
        char temp = x-'A' +'a';
        return temp;
    }
}

// Function to reverse the string
void reversestring(char name[], int n) {
    int s = 0;
    int e = n - 1;

    while (e >= s) {
        swap(name[s++], name[e--]);
    }
}

// check if palindrome
bool checkplaindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(lowercase(a[s]) != lowercase(a[e])){
            return 0;
        }
        else{
            s++;e--;
        }
        return 1;
    }
}


// Function to find the length of the string
int findlength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

// Main function
int main() {
    char name[20];

    cout << "What is your name: " << endl;
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len = findlength(name);
    cout << "The length of your name is: " << len << endl;

    reversestring(name, len);
    cout << "The reverse of your name is: " << name << endl;

    cout<<"palindrome hai ki nhi : "<< checkplaindrome(name, len)<<endl;

    return 0;
}
