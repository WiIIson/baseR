// This file is only for testing the functionality of the <baseR> library
#include "baseR.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<bool> test = {true, true, false, false, true};
    cat(any(test));

    vector<bool> test2 = duplicated(test);
    cat(test2);

    vector<int> test3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cat(mean(test3));
    cat(max(test3));

    vector<bool> test4 = {true, true, false, true};
    cat(which(test4));
    cat(which(test));

    return 0;
}