#pragma once

template <class It>
void selection_sort(It left, It right) {
    for (auto it = left; it != right; it++) {
        int min = *it;
        auto swap_it = it;
        for (auto j = it; j != right; j++) {
            if (*j < min) {
                min = *j;
                swap_it = j;
            }
        }
        *swap_it = *it;
        *it = min;
    }
}