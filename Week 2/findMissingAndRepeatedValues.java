class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int m = grid.length; 
        int n = m * m; 
        int[] freq = new int[n + 1]; 
        int[] ans = new int[2]; 

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                freq[grid[i][j]]++; // Increment count of this number
            }
        }

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) 
            ans[0] = i; // Repeated number
            if (freq[i] == 0) 
            ans[1] = i; // Missing number
             
        }

       return ans;
    }

}