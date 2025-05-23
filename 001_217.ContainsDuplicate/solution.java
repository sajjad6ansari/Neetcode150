// Importing the HashSet class from java.util package
import java.util.HashSet;

class Solution {

    // Method to check if the array contains any duplicate elements
    public boolean containsDuplicate(int[] nums) {
        
        // Create a HashSet to store unique elements from the array
        HashSet<Integer> s = new HashSet<>();
        
        // Iterate through each element in the input array
        for (int num : nums) {
            // If the element is already in the set, it's a duplicate
            if (s.contains(num)) {
                return true; // Return true immediately if a duplicate is found
            }
            // Otherwise, add the element to the set
            s.add(num);
        }

        // If loop completes without finding duplicates, return false
        return false;
    }
}
