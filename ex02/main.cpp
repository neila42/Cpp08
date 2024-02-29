#include "MutantStack.hpp"
#include <iostream>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl; //show
    mstack.pop(); //delete
    std::cout << mstack.size() << std::endl; //cmb y'a delement

    mstack.push(3); mstack.push(5); mstack.push(737); mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    return 0;
}

// #include <list>
// #include <iostream>

// int main() {
//     std::list<int> lst;
//     lst.push_back(5);
//     lst.push_back(17);

//     std::cout << lst.back() << std::endl;
//     lst.pop_back();
//     std::cout << lst.size() << std::endl;

//     lst.push_back(3); lst.push_back(5); lst.push_back(737); lst.push_back(0);

//     std::list<int>::iterator it = lst.begin();
//     std::list<int>::iterator ite = lst.end();

//     ++it;
//     --it;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     return 0;
// }
