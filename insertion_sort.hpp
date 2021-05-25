#pragma once
#include <algorithm>

template <class It>
void insertion_sort(It left, It right) {
    for (auto i = left + 1; i != right; i++) {
        for (auto j = i; j != left; j--) {
            if (*(j - 1) > *j) {
                std::swap(*(j - 1), *j);
            }
        }
    }
}