#pragma once
#include <algorithm>
#include <vector>

template <class It>
void merge(It left, It mid, It right) {
    std::vector<typename It::value_type> temp;
    auto i = left;
    auto j = mid;

    while (i != mid && j != right) {
        if (*i <= *j) {
            temp.push_back(*i);
            i++;
        } else {
            temp.push_back(*j);
            j++;
        }
    }

    while (i != mid) {
        temp.push_back(*i);
        i++;
    }

    while (j != right) {
        temp.push_back(*j);
        j++;
    }

    std::move(temp.begin(), temp.end(), left);
}
                                  
template <class It>
void merge_sort(It left, It right) {
    auto dist = std::distance(left, right);
    if (dist > 1) {
        auto mid = left + dist/2;
        merge_sort(left, mid);
        merge_sort(mid, right);
        merge(left, mid, right);
    }
}