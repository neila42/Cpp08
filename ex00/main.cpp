#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    try {
        std::vector<int> vec;
        int arrVec[] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; ++i) vec.push_back(arrVec[i]);

        std::cout << "Found at index: " << easyfind(vec, 3) << std::endl;

        std::list<int> lst;
        int arrList[] = {5, 4, 3, 2, 1};
        for (int i = 0; i < 5; ++i) lst.push_back(arrList[i]); // ajouter les elements depuis la fin psk c'est comme ca en 98

        std::cout << "Found at index: " << easyfind(lst, 4) << std::endl;

        std::cout << "Found at index: " << easyfind(vec, 6) << std::endl;
    } catch (const NotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
