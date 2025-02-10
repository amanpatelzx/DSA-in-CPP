#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Finding the intersection point of the two runners
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find the entrance to the cycle (duplicate element)
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 5,6,7,8,9,3}; // Example array
    int duplicate = findDuplicate(nums);
    cout << "The duplicate element is: " << duplicate << endl;

    return 0;
}
