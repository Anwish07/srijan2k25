#include <iostream> 
#include <vector> 

using namespace std; 

int binarySearchIterative(const vector<int>& arr, int target) { 

// Initialize pointers for the start and end of the array  
int low = 0, high = arr.size() - 1; 

while (low <= high) { 
  
  // Calculate the middle index 
  int mid = low + (high - low) / 2; 

  // If the middle element is the target, return its index 
  if (arr[mid] == target) { 
   return mid; 
  } 

  // If the target is greater than the middle element, search the right half 
  else if (arr[mid] < target) { 
   low = mid + 1; 
  } 

  // If the target is less than the middle element, search the left half 
  else { 
   high = mid - 1; 
  } 
} 

// Return -1 if the target is not found in the array 
return -1; 
}   

