#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void unique_vector(std::vector<T>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(
        std::unique(numbers.begin(), numbers.end()),
        numbers.end()
    );
}

int main() {
    std::vector<int> numbers = { 1, 1, 2, 5, 6, 1, 2, 4 };

    unique_vector(numbers);

    for (int number : numbers) {
        std::cout << number << " ";
    }

    std::cout << std::endl;

    return 0;
}
