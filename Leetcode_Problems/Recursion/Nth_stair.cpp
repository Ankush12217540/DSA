#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "Ways to climb " << n << " stairs: " << solution.climbStairs(n) << endl;
    return 0;
}
