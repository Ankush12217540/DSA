// This solution is little different from the last one as it involve only the O(n) time complexity

#include <iostream>
#include <vector>
#include <algorithm> // For using std::min
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;

        // Calculate the total time required for each person in line
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                // For people up to and including position k
                // They will buy either all their tickets or stop when person k finishes.
                time += min(tickets[i], tickets[k]);
            } else {
                // For people after k
                // They will buy only the tickets needed in the rounds before k finishes.
                time += min(tickets[i], tickets[k] - 1);
            }
        }

        return time; // Return the total time taken
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class

    // Example input
    vector<int> tickets = {2, 3, 2}; // Number of tickets each person needs
    int k = 2; // Your position in the queue

    // Calculate and print the time needed to buy tickets
    int time = solution.timeRequiredToBuy(tickets, k);
    cout << "Time required to buy tickets: " << time << endl;

    return 0; // End of the program
}

//    2   3   4   6   2