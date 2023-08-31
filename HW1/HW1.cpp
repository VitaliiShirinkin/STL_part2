// HW1.cpp : Задача 1. Уникальный вектор
//Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
    auto print = [](const std::vector<int>& V) {
        for (const auto& i : V) { std::cout << i << " "; }
        std::cout << "\n\n"; };

    std::cout << "[IN]: "<<'\n';
    std::vector<int>vec {1, 1, 2, 5, 6, 1, 2, 4};
    print(vec);

    std::cout << "After sort: " << '\n';
    std::sort(vec.begin(), vec.end());
    print(vec);

    std::cout << "[OUT]: " << '\n';
    auto U = std::unique(vec.begin(), vec.end());
    vec.erase(U, vec.end());
    print(vec);
    return 0;
}


