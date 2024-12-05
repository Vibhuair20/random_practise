#include <iostream>
#include <vector>

using namespace std;

int calculateChecksum(int total_sum, int bits) {
    int max_value = (1 << bits) - 1;  // e.g., 255 for 8 bits
    return max_value - (total_sum % (max_value + 1));  // 1's complement
}

int main() {
    int K, N;

    // Input number of frames and bits per frame
    cout << "Enter the number of frames (K): ";
    cin >> K;
    cout << "Enter the number of bits per frame (N): ";
    cin >> N;

    vector<int> frames(K);
    int total_sum = 0;

    // Input frames and calculate the total sum
    cout << "Enter the values of each frame:" << endl;
    for (int i = 0; i < K; ++i) {
        cout << "Frame " << i + 1 << ": ";
        cin >> frames[i];
        total_sum += frames[i];
    }

    // Calculate checksum using 1's complement
    int checksum = calculateChecksum(total_sum, N);

    // Append checksum to the data
    frames.push_back(checksum);
    cout << "\nSender Side:\n";
    cout << "Total Sum of frames: " << total_sum << endl;
    cout << "Calculated Checksum: " << checksum << endl;

    // Receiver Side Verification
    int received_sum = 0;
    for (int value : frames) {
        received_sum += value;
    }
    int received_checksum = calculateChecksum(received_sum, N);

    cout << "\nReceiver Side:\n";
    cout << "Total Sum including received checksum: " << received_sum << endl;
    cout << "Calculated Checksum at Receiver: " << received_checksum << endl;
    cout << "Status: " << (received_checksum == 0 ? "Approved" : "Discarded") << endl;

    return 0;
}