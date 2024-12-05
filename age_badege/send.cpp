

//send a frame 
// void simulatetransmission(int framenumber){
//     cout<<"sending frame"<<framenumber<<endl;

//     this_thread::sleep_for(chrono::seconds(1));
// }
// receive a acknowledgement frame (ack)

// in main function 
//how many frames
//loop through each frame
//send one frome 
// wiat ofr ack


#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

// void simulateTransmission(int frameNumber) {
//     cout << "Sending Frame " << frameNumber << "..." << endl;
//     // Simulate network delay
//     this_thread::sleep_for(chrono::seconds(1));
// }

// bool simulateAcknowledgment() {
//     cout << "Waiting for acknowledgment..." << endl;
//     this_thread::sleep_for(chrono::seconds(1));
//     return true;  // Always successful in this simple version
// }

// int main() {
//     int totalFrames;
//     cout << "Enter total number of frames to send: ";
//     cin >> totalFrames;
    
//     for(int i = 0; i < totalFrames; i++) {
//         simulateTransmission(i);
        
//         if(simulateAcknowledgment()) {
//             cout << "Acknowledgment received for Frame " << i << endl;
//         }
        
//         cout << "------------------------" << endl;
//     }
    
//     cout << "All frames sent successfully!" << endl;
//     return 0;
// }

// for question 2