#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0 ;
    int e = v.size() - 1;

    while(s < e){ // Fixing the condition: s should be strictly less than e
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v; // Return the modified vector
}

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){ // Fixing the loop syntax
        cout << v[i] << " "; // Fixing the output syntax
    }
    cout << endl;
}

int main(){

    vector<int> v;
    v.push_back(11); // Fixing the function name
    v.push_back(12);
    v.push_back(15);
    v.push_back(34);
    v.push_back(45);

    vector<int> ans = reverse(v);

    print(ans);

    return 0;
}
