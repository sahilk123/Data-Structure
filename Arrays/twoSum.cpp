// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
using namespace std;

int main() {
  int nums[] = {2, 5, 6};
  int target = 7;
  int getArrayLength = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < getArrayLength; i++) {
    for (int j = i + 1; j < getArrayLength; j++) {
      if (nums[j] == target - nums[i])
        cout << i << j; // Result index

      break;
    }
  }
}

//Explanation:-
// The brute force approach is simple. 
// Loop through each element x and find if there is 
// another value that equals to target - x.