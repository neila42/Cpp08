#include "Span.hpp"
#include <iostream>
#include <vector>

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // entre 9 et 11
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl; // 3 et 17

    Span spLarge(10000);
    std::vector<int> numbers;
    for (int i = 0; i < 10000; i++) {
        numbers.push_back(i * 2); // son indice *2
    }
    spLarge.addNumbers(numbers.begin(), numbers.end()); // "automatique"
    std::cout << "Shortest Span (large): " << spLarge.shortestSpan() << std::endl; // 0 et 2
    std::cout << "Longest Span (large): " << spLarge.longestSpan() << std::endl; // 0 et 19 998

    return 0;
}
