#include <iostream>
#include <vector>

int lower_bound(const std::vector<int>& v, int value) {
    int left = 0;
    int right = v.size();
    
    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is greater than or equal to value
        if (v[mid] < value) {
            left = mid + 1; // Value must be in the right half
        } else {
            right = mid; // Value could be in the left half or mid
        }
    }
    
    return left;
}

int main() {
    std::vector<int> v = {10, 20, 20, 20, 30, 40};
    int value = 20;
    
    int lb = lower_bound(v, value);
    std::cout << "Lower bound of " << value << " is at position: " << lb << std::endl;

    return 0;
}
