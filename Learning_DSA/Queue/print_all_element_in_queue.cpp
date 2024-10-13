#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Printing all the elements in the queue
    std::cout << "Elements in the queue: ";
    while (!q.empty()) {
        std::cout << q.front() << " "; // Print the front element
        q.pop();                        // Remove the front element
    }

    std::cout << std::endl;
    return 0;
}
