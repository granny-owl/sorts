#pragma once

template <class It>
void bubble_sort(It left, It right) {
    bool flag;
    do {
        flag = true;
        for (auto it = left + 1; it != right; it++) {
            if (*(it - 1) > *it) {
                auto c = *(it - 1);
                *(it - 1) = *it;
                *it = c;
                flag = false;           
            }
        }
    } while (!flag);
}