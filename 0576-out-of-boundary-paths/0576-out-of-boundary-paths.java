class Solution {
    private static final int MOD = 1_000_000_007;

    public int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int[][][] dp = new int[m][n][maxMove + 1];
        for (int[][] layer : dp) {
            for (int[] row : layer) {
                Arrays.fill(row, -1);
            }
        }

        return dfs(m, n, maxMove, startRow, startColumn, dp);
    }

    private int dfs(int m, int n, int moves, int row, int col, int[][][] dp) {
        if (row < 0 || row >= m || col < 0 || col >= n) {
            return 1; 
        }

        if (moves == 0) {
            return 0; 
        }

        if (dp[row][col][moves] != -1) {
            return dp[row][col][moves];
        }

        int[] directions = {-1, 0, 1, 0, -1};
        int paths = 0;

        for (int i = 0; i < 4; i++) {
            int newRow = row + directions[i];
            int newCol = col + directions[i + 1];
            paths = (paths + dfs(m, n, moves - 1, newRow, newCol, dp)) % MOD;
        }

        dp[row][col][moves] = paths;
        return paths;
    }
}

