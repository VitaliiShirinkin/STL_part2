// HW2.cpp : Задача 2. Печать контейнера

#include <iostream>
#include<vector>
#include<set>
#include<list>

template<class T>
void print_container(const T& container) {
    for (auto it = container.begin(); it != container.end(); ++it)
        std::cout << *it << "\t";
    std::cout<<std::endl;
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
}

