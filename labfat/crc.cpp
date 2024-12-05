#include<iostream>
using namespace std;
//step 1 take input from the sender side
void crc(){
    string data;
    string divisor;

    cout<<"data"<<endl;
    cin>>data;
    cout<<"div"<<endl;
    cin>>divisor;
// step 2 add zeros to the data-> n-1
    string augmented = data;
    for(int i=0;i<divisor.length()-1;i++){
        augmented += '0';
    }
   
// step 3 peform crc division
    string temp = augmented;
    for(int i=0;i<augmented.length()-divisor.length();i++){
        if(temp[i]=='1'){
            for(int j=0;j<divisor.length();j++){
                temp[i+j] = (temp[i+j] == divisor[j]) ? '0': '1';
            }
        }
    }
//step 4 extract crc and create final data
    string crc = temp.substr(temp.length()-divisor.length() + 1);
    string codeword = data +  crc;
    cout<<"crc is "<<crc<<endl;
    cout<<"transmitted dat is : "<<codeword<<endl;

    //receiver side
    cout<<"enter received data:"<<endl;
    string receiveddata;
    cin>>receiveddata;

// step 5 check the data
    temp = receiveddata;
    for(int i=0;i<receiveddata.length()-divisor.length();i++){
        if(temp[i]=='1'){
            for(int j=0;j<divisor.length();j++){
                temp[i+j] = (temp[i+j] == divisor[j])? '0':'1';
            }
        }
    }

    //step 6 verify remainder
    bool error = false;
    for(char bit : temp){
        if(bit == '1'){
            error =true;
            break;
        }
    }

    cout << "Status: " << (error ? "DISCARDED" : "ACCEPTED") << endl;
}

int main() {
    crc();
    return 0;
}




   
   


