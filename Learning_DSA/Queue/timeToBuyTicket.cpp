#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int n = tickets.size();

        // Pushing all the indices into the queue
        for (int i = 0; i < n; i++) {
            q.push(i);
        }


        int Time = 0;
      
        // Process the queue until the person at index k has bought all their tickets
        while (tickets[k] != 0) {
            tickets[q.front()]--;  // Person at the front buys one ticket
            
            // If this person still needs more tickets, push them to the back
            if (tickets[q.front()]) {
                q.push(q.front());
            }
            // Remove the person from the front of the queue
            q.pop();
            Time++;  // Increment the time taken for each ticket bought
        }

        return Time;  // Return the total time taken
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class
    vector<int> tickets = {2, 3, 2};  // Example tickets array
    int k = 2;  // Your position in the queue

    // Calculate and print the time needed to buy tickets
    int time = solution.timeRequiredToBuy(tickets, k);
    cout << "Time required to buy tickets: " << time << endl;

    return 0;  // End of the program
}
