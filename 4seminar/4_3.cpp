#include <iostream>
#include <vector>
#include <cmath>
#include <utility>

std::vector<std::pair<int, int>> factorization(int n) {
    std::vector<std::pair<int, int>> factors;
    int cnt = 0;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        cnt = 0;
        while (n % i == 0) {
            ++cnt;
            n /= i;
        }
        if (cnt > 0) {
            factors.emplace_back(i, cnt);
        }
    }
    if (n > 1) {
        factors.emplace_back(n, 1);
    }
    return factors;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> factors = factorization(n);
    for (auto& factor : factors) {
        std::cout << factor.first << "^" << factor.second << " ";
    }
    std::cout << std::endl;
    return 0;
}
