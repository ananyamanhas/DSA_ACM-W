package acmdsa_w1;

public class pascalTriangle {

class Solution {
    public List<List<Integer>> generate(int numRows) {
        int[][] arr = new int[numRows][];

       
        for (int i = 0; i < numRows; i++) {
            arr[i] = new int[i + 1];  
            arr[i][0] = 1;          
            arr[i][i] = 1;           
            for (int j = 1; j < i; j++) {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }

        
        List<List<Integer>> result = new ArrayList<>();
        for (int i = 0; i < numRows; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j <= i; j++) {
                row.add(arr[i][j]);
            }
            result.add(row);
        }

        return result; 
    }
}

	}

}
