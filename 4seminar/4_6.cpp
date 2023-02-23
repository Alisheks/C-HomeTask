// Пока не до конца 

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <span>

template<typename Container>
std::vector<std::pair<typename Container::value_type, typename Container::value_type>> getOddEvenPairs(const Container& container) {
    std::vector<std::pair<typename Container::value_type, typename Container::value_type>> result;
    bool odd = true;
    typename Container::value_type evenValue{};
    for (const auto& value : container) {
        if (odd) {
            result.emplace_back(value, evenValue);
        } else {
            result.back().second = value;
        }
        odd = !odd;
    }
    if (!odd) {
        result.emplace_back(Container::value_type{}, evenValue);
    }
    return result;
}
