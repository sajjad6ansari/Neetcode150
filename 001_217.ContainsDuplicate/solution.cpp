#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    // Function to check if the input vector contains any duplicates
    bool containsDuplicate(vector<int>& v) {
        // Create an unordered_set to store unique elements
        unordered_set<int> s;
        
        // Get the size of the vector
        int n = v.size();

        // Iterate through each element in the vector
        for (int i = 0; i < n; i++) {
            
            // Check if the current element already exists in the set
            if (s.find(v[i]) != s.end()) {
                return true; // Duplicate found, return true
            }

            // Insert the element into the set
            s.insert(v[i]);
        }

        // If no duplicates found after the loop, return false
        return false;
    }
};
