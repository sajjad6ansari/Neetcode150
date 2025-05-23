#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    // Function to check if two strings are anagrams
    bool isAnagram(string s, string t) {
        // Step 1: If lengths are not equal, they can't be anagrams
        if (s.size() != t.size()) return false;

        // Step 2: Create two unordered_maps to store frequency of each character
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // Step 3: Iterate through the strings and count each character
        for (int i = 0; i < s.size(); i++) {
            countS[s[i]]++; // Count character in string s
            countT[t[i]]++; // Count character in string t
        }

        // Step 4: Compare both maps; if equal, the strings are anagrams
        return countS == countT;
    }
};
