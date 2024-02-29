#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // Pour std::find
#include <iterator>  // Pour std::distance
#include <exception>

class NotFoundException : public std::exception {
public:
    const char* what() const throw();
};

template <typename T>
int easyfind(T& container, int value);

#include "easyfind.tpp"

#endif
