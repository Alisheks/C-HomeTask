// Пока не до конца 

#include <iostream>
#include <string>
#include <vector>

template <typename T>
T getMax(const std::vector<T>& v) {
    if (v.empty()) {
        throw std::invalid_argument("vector is empty");
    }
    T maxElement = v[0];
    for (const T& element : v) {
        if (element > maxElement) {
            maxElement = element;
        }
    }
    return maxElement;
}


int main() {
    // int
    std::vector<int> v1 = { 1, 2, 3, 4, 5 };
    std::cout << "Max element of v1: " << getMax(v1) << std::endl;

    // float
    std::vector<float> v2 = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    std::cout << "Max element of v2: " << getMax(v2) << std::endl;

    // string
    std::vector<std::string> v3 = { "abc", "def", "ghi", "jkl" };
    std::cout << "Max element of v3: " << getMax(v3) << std::endl;

    // pair
    std::vector<std::pair<int, int>> v4 = { {1, 2}, {3, 4}, {5, 6} };
    std::cout << "Max element of v4: (" << getMax(v4).first << ", " << getMax(v4).second << ")" << std::endl;

    return 0;
}
