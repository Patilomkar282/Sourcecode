#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN

using namespace std;

// Function to implement Kadane's Algorithm
int maxSubArraySum(const vector<int>& nums) {
    int max_sum = INT_MIN;  // Stores the maximum sum of the subarray
    int current_sum = 0;    // Stores the current sum of the subarray

    for (int i = 0; i < nums.size(); i++) {
        current_sum = current_sum + nums[i];

        if (max_sum < current_sum) {
            max_sum = current_sum;
        }

        // If current_sum becomes negative, reset it to 0
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    int n;

    // Taking the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    // Taking the array elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Finding the maximum subarray sum
    int max_sum = maxSubArraySum(nums);

    // Output the result
    cout << "Maximum Subarray Sum is: " << max_sum << endl;

    return 0;
}
