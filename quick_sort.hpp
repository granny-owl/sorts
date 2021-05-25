#pragma once
#include <algorithm>

template <class It>
It partition(It left, It right) {
    auto piv = std::prev(right);
    auto to_swap = left;
    for (auto it = left; it != piv; it++) {
        if (*it <= *piv) {
            std::swap(*to_swap, *it);
            to_swap++;
        }
    }
    std::swap(*left, *piv);
    return to_swap;
}

template <class It>
void quick_sort(It left, It right) {
    if (std::distance(left, right) > 1) {
        auto p_it = partition(left, right);
        quick_sort (left, p_it);
        quick_sort(p_it+1, right);
    }
}