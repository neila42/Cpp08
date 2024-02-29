#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : max_size(N) {}

void Span::addNumber(int number) {
    if (numbers.size() >= max_size) {
        throw std::length_error("Span is full.");
    }
    numbers.insert(number);
}

int Span::shortestSpan() {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }
    std::multiset<int>::iterator it = numbers.begin(); // iterateur it a la 1e pos de numbers
    int prev = *it; // deref pour avoir la val
    int minSpan = INT_MAX; //pas -1 
    for (++it; it != numbers.end(); ++it) {
        minSpan = std::min(minSpan, *it - prev);
        prev = *it;
    }
    return minSpan;
}

int Span::longestSpan() {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span.");
    }
    return *(--numbers.end()) - *numbers.begin();
}

