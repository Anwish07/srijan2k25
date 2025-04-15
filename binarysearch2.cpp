#include <iostream>
#include <vector>

using namespace std;

int binarySearchRecursive(const vector<int>& arr, int low, int high,
                          int target) {
 // Base case: If the search range is invalid, the target is not found
 if (low > high) {
  return -1;  // Target not found
 }

 // Calculate the middle index of the current search range
 int mid = low + (high - low) / 2;

 // If the middle element is the target, return its index
 if (arr[mid] == target) {
  return mid;
 }

 // If the target is greater than the middle element, search in the right half
 else if (arr[mid] < target) {
  return binarySearchRecursive(arr, mid + 1, high,
                               target);  // Recursive call on the right half
 }

 // If the target is less than the middle element, search in the left half
 else {
  return binarySearchRecursive(arr, low, mid - 1,
                               target);  // Recursive call into the left half
 }
}

