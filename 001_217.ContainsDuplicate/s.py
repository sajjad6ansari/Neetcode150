class Solution:
    def containsDuplicate(self, nums):
        # Create an empty set to store unique numbers
        seen = set()  # 'set' is used because it offers O(1) average time complexity for lookups and insertions

        # Iterate through each number in the input list
        for num in nums:
            # Check if the number is already in the set (i.e., duplicate found)
            if num in seen:
                return True  # Duplicate exists, return True

            # If number is not in the set, add it to the set
            seen.add(num)

        # If no duplicates were found during the loop, return False
        return False
