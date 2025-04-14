#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    cout << "1. Basic Lambda:\n";
    auto hello = []() { cout << "Hello, Lambda!\n"; };
    hello();

    cout << "\n2. Lambda with Parameters:\n";
    auto add = [](int a, int b) { return a + b; };
    cout << "5 + 3 = " << add(5, 3) << endl;

    cout << "\n3. Lambda with Explicit Return Type:\n";
    auto divide = [](double x, double y) -> double {
        if (y == 0) return 0;
        return x / y;
    };
    cout << "10 / 2 = " << divide(10, 2) << endl;

    cout << "\n4. Lambda Capturing Variables:\n";
    int x = 10, y = 20;
    // Capture by value
    auto printSumValue = [x, y]() {
        cout << "Captured by value: " << x + y << endl;
    };
    printSumValue();

    // Capture by reference
    auto printSumRef = [&x, &y]() {
        x += 1; y += 1;
        cout << "Captured by reference: " << x + y << endl;
    };
    printSumRef();
    cout << "Modified x: " << x << ", y: " << y << endl;

    cout << "\n5. Mutable Lambda (allows modifying captured by value):\n";
    auto mutableLambda = [x]() mutable {
        x += 10;
        cout << "Inside mutable lambda x = " << x << endl;
    };
    mutableLambda();
    cout << "Outside lambda x = " << x << endl;

    cout << "\n6. Generic Lambda (C++14+):\n";
    auto generic = [](auto a, auto b) {
        return a * b;
    };
    cout << "3 * 4 = " << generic(3, 4) << endl;
    cout << "2.5 * 4.2 = " << generic(2.5, 4.2) << endl;

    cout << "\n7. Lambda as Function Argument:\n";
    vector<int> nums = {1, 2, 3, 4, 5};
    for_each(nums.begin(), nums.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    cout << "\n8. Storing Lambda in std::function:\n";
    function<int(int)> square = [](int n) { return n * n; };
    cout << "Square of 6: " << square(6) << endl;

    cout << "\n9. Using auto to Store Lambda:\n";
    auto isEven = [](int n) { return n % 2 == 0; };
    cout << "Is 10 even? " << boolalpha << isEven(10) << endl;

    return 0;
}
