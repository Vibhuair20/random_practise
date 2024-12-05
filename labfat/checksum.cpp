#include<iostream>
#include<vector>
using namespace std;

class checksumcalculator{
    private:
    int numframes;
    int numbits;
    vector<int>data;
    int checksum;

    public:
    // function to get inout from data
    void getInput(){
        cout<<"enter the data"<<endl;
    // get no of frames 
        cout<<"enter the no of frames:"<<endl;
        cin>>numframes;
    //get no of bits
        cout<<"enter the no of bits in each frame:"<<endl;
        cin>>numbits;
    // get data for each frame
        cout<<"enter the data in the frames:"<<endl;
        for(int i=0;i<numframes;i++){
            int framedata;
            cout<<"frame"<<i+1<<endl;
            cin>>framedata;
            data.push_back(framedata);
        }
    }

    //calculate the checksome on the sender side
    void calculateChecksome(){
        int sum;
        for(int value : data){
            sum += value;
        }
        cout<<"the sum of all the integers"<<sum<<endl;
            // we check the largest num possible from the bits
        int maxvalue =  (1<<numbits)-1;
        checksum = maxvalue - sum;
    
        cout<<"the calculates checksum is: "<<endl;    
    }
    
    //verify data on the receiver side
    void verifyData(){
        cout<<"verification on the receiver side"<<endl;

        int sum = checksum;
        for( int value : data){
            sum += value;
        }

        cout<< "sum at the receiver side is:"<<sum<<endl;

        int maxvalue = (1<<numbits)-1 ;

        if(sum==maxvalue){
            cout<<"no error"<<endl;
        }
        else{
            cout<<"there is some error"<<endl;
        }
    }

    // vfunction to print the data

    void Printdata(){
        cout<<"the transmitted data is:"<<endl;
        cout<<"original data";
        for(int value : data){
            cout<<value<<endl;
        }
        cout<<"the checksum is: "<<checksum<<endl;
    }


};

int main(){

checksumcalculator clc;
clc.getInput();
clc.calculateChecksome();
clc.Printdata();

clc.verifyData();

cout<<"hello world!";

return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// class ChecksumCalculator {
// private:
//     int numFrames;         // Number of K sections
//     int bitsPerFrame;      // N bits in each frame
//     vector<int> data;      // Store the data sections
//     int checksum;          // Store the calculated checksum
    
// public:
//     // Function to get input from user
//     void getInput() {
//         cout << "\n=== SENDER SIDE INPUT ===" << endl;
        
//         // Get number of frames (K sections)
//         cout << "Enter number of frames to transmit: ";
//         cin >> numFrames;
        
//         // Get bits per frame
//         cout << "Enter number of bits in each frame: ";
//         cin >> bitsPerFrame;
        
//         // Get data for each frame
//         cout << "Enter data for each frame (decimal numbers):" << endl;
//         for(int i = 0; i < numFrames; i++) {
//             int frameData;
//             cout << "Frame " << i+1 << ": ";
//             cin >> frameData;
//             data.push_back(frameData);
//         }
//     }
    
//     // Calculate checksum on sender side
//     void calculateChecksum() {
//         // Calculate sum of all sections
//         int sum = 0;
//         for(int value : data) {
//             sum += value;
//         }
//         cout << "\nSum of all sections: " << sum << endl;
        
//         // Calculate 1's complement (invert all bits)
//         // We'll use a simple method: subtract from all 1's
//         int maxValue = (1 << bitsPerFrame) - 1;  // 2^n - 1
//         checksum = maxValue - sum;
        
//         cout << "Calculated checksum: " << checksum << endl;
//     }
    
//     // Verify data on receiver side
//     void verifyData() {
//         cout << "\n=== RECEIVER SIDE VERIFICATION ===" << endl;
        
//         // Calculate sum including checksum
//         int sum = checksum;  // Add checksum to sum
//         for(int value : data) {
//             sum += value;
//         }
        
//         cout << "Sum at receiver (including checksum): " << sum << endl;
        
//         // Check if sum + checksum = all 1's
//         int maxValue = (1 << bitsPerFrame) - 1;  // 2^n - 1
        
//         if(sum == maxValue) {
//             cout << "Status: APPROVED - No errors detected" << endl;
//         } else {
//             cout << "Status: DISCARDED - Errors detected" << endl;
//         }
//     }
    
//     // Function to display transmitted data
//     void displayTransmittedData() {
//         cout << "\n=== TRANSMITTED DATA ===" << endl;
//         cout << "Original Data: ";
//         for(int value : data) {
//             cout << value << " ";
//         }
//         cout << "\nChecksum: " << checksum << endl;
//     }
// };

// int main() {
//     ChecksumCalculator calc;
    
//     // Sender side
//     calc.getInput();
//     calc.calculateChecksum();
//     calc.displayTransmittedData();
    
//     // Receiver side
//     calc.verifyData();
    
//     return 0;
// }