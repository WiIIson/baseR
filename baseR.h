#ifndef __baseR__
#define __baseR__

// Just like R, r_to_cpp uses vectors instead of lists, but can also use
// strings in stead of a char vector

// This resource includes the following libraries:
#include <vector>
#include <iostream>

// any
// Returns true if any values are true (takes boolean vector)
bool any(std::vector<bool> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == true) {
            return true;
        }
    }
    return false;
}

// cat, single value
// Prints out the contents of the vector (takes template value)
template<typename T>
void cat(T val) {
    std::cout << val << std::endl;
}

// cat, vector
// Prints out the contents of the vector (takes template vector)
template<typename T>
void cat(std::vector<T> vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

// duplicated
// Returns a bool vector for if an element is a duplicate (takes template vector)
template<typename T>
std::vector<bool> duplicated(std::vector<T> vec) {
    std::vector<T> elements;
    std::vector<bool> ret_arr;
    bool is_false;
    for (int i = 0; i < vec.size(); i++) {
        is_false = true;
        for (int j = 0; j < elements.size(); j++) {
            if (vec[i] == elements[j]) {
                ret_arr.push_back(true);
                is_false = false;
            }
        }
        if (is_false == true) {
            ret_arr.push_back(false);
            elements.push_back(vec[i]);
        }
    }
    return ret_arr;
}

// max
// Returns the maximum value in the vector (takes templat vector)
template<typename T>
T max(std::vector<T> vec) {
    T temp = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > temp) {
            temp = vec[i];
        }
    }
    return temp;
}

// mean, single value
// Returns the mean of the vector (takes int vector)
double mean(std::vector<int> vec) {
    double ret_mean = 0;
    for (int i = 0; i < vec.size(); i++) {
        ret_mean += double(vec[i]);
    }
    return ret_mean/vec.size();
}

// mean, vector
// Returns the mean of the vector (takes double vector)
double mean(std::vector<double> vec) {
    double ret_mean = 0;
    for (int i = 0; i < vec.size(); i++) {
        ret_mean += vec[i];
    }
    return ret_mean/vec.size();
}

// min
// Returns the minimum value in the vector (takes templat vector)
template<typename T>
T min(std::vector<T> vec) {
    T temp = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < temp) {
            temp = vec[i];
        }
    }
    return temp;
}

// which
// Returns the indexes of true values (takes boolean vector)
std::vector<int> which(std::vector<bool> vec) {
    std::vector<int> indices;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == true) {
            indices.push_back(i);
        }
    }
    return indices;
}

// which_max
// Returns the index of the highest number (takes boolean vector)
template<typename T>
int which_max(std::vector<T> vec) {
    T temp = vec[0];
    int temp_ind = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > temp) {
            temp = vec[i];
            temp_ind = i;
        }
    }
    return temp_ind;
}

// which_min
// Returns the index of the lowest number (takes boolean vector)
template<typename T>
int which_min(std::vector<T> vec) {
    T temp = vec[0];
    int temp_ind = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] < temp) {
            temp = vec[i];
            temp_ind = i;
        }
    }
    return temp_ind;
}

#endif