#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <stdexcept>

class Span {
public:
    Span(unsigned int N);
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();

    template<typename Iterator>
    void addNumbers(Iterator begin, Iterator end);

private:
    std::multiset<int> numbers;
    unsigned int max_size;
};

template<typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
    if (std::distance(begin, end) + numbers.size() > max_size) {
        throw std::length_error("Adding these numbers would exceed the Span's capacity.");
    }
    numbers.insert(begin, end);
}

#endif
