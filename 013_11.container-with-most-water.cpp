/*
Idea / Proof (Gathered from Discussion Section of Leetcode from some intelligent programmers) : 
    The widest container (using first and last line) is a good candidate, because of its width.
    Its water level is the height of the smaller one of first and last line. All other containers
    are less wide and thus would need a higher water level in order to hold more water. The smaller
    one of first and last line doesn't support a higher water level and can thus be safely removed from further consideration.
*/

//Approach-1 (Two pointer Greedy (O(N))
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        
        int water = 0;
        while(i<j) {
            
            //start from the smallest one and calculate water
            int h = min(height[i], height[j]);
            int w = j-i;
            int area = h*w;
            water = max(water, area);
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return water;
    }
};

//Approach-2 (Two pointer Greedy (O(N)) (It's similar to Approach-1)
//Just that we are eliminating heights at one go
// Approach-2: Optimized Two Pointer (O(N)) 
// Skip all bars smaller than current height after considering the area
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int water = 0;
        
        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            water = max(water, h * w);
            
            // Move both pointers inward while skipping equal/smaller heights
            while (i < j && height[i] <= h) i++;
            while (i < j && height[j] <= h) j--;
        }
        
        return water;
    }
};

