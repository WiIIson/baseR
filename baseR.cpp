// Just like R, r_to_cpp uses vectors instead of lists, but can also use
// strings in stead of a char vector

// This resource includes the following libraries:
#include "baseR.h"

// All functions are ordered alphabetically

////////////////////////////////////////////////////////////////////////////////

// all
// Returns true if all values are true
// (takes boolean vector)
bool all(std::vector<bool> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == false) {
            return false;
        }
    }
    return true; 
}

// any
// Returns true if any values are true
// (takes boolean vector)
bool any(std::vector<bool> vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == true) {
            return true;
        }
    }
    return false;
}

// cat, single value
// Prints out the contents of the vector
// (takes template value)


// cat, vector
// Prints out the contents of the vector
// (takes any vector)

// duplicated
// Returns a bool vector for if an element is a duplicate 
// (takes any vector)

// max
// Returns the maximum value in the vector
// (takes any vector)

// mean, single value
// Returns the mean of the vector
// (takes int vector)
double mean(std::vector<int> vec) {
    double ret_mean = 0;
    for (int i = 0; i < vec.size(); i++) {
        ret_mean += double(vec[i]);
    }
    return ret_mean/vec.size();
}

// mean, vector
// Returns the mean of the vector
// (takes double vector)
double mean(std::vector<double> vec) {
    double ret_mean = 0;
    for (int i = 0; i < vec.size(); i++) {
        ret_mean += vec[i];
    }
    return ret_mean/vec.size();
}

// min
// Returns the minimum value in the vector
// (takes any vector)

// which
// Returns the indexes of true values
// (takes boolean vector)
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
// Returns the index of the highest number
// (takes boolean vector)


// which_min
// Returns the index of the lowest number
// (takes boolean vector)