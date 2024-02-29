#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <algorithm>
#include <iterator> 

const char* NotFoundException::what() const throw() {
    return "Element not found in the container";
}

template <typename T>
int easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NotFoundException(); // exeption si ya pas 
    } else {
        return std::distance(container.begin(), it); // return l'indice de ou il est 
    }
}

#endif
