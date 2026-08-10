class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> dp(n + 1, false);

        // dp[0] = false
        // No stones -> current player loses

        for (int i = 1; i <= n; i++) {

            // Try removing every perfect square
            for (int j = 1; j * j <= i; j++) {

                int square = j * j;

                // If removing this square leaves
                // the opponent in a losing position,
                // current player wins.
                if (dp[i - square] == false) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};