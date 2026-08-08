class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        vector<int> ans(m);

        // last[j] = the index in word1 where
        // word2[j] can be matched while matching
        // word2[j...m-1] from right to left.
        vector<int> last(m, -1);

        int i = n - 1;
        int j = m - 1;

        // Build last[] from right to left
        while (i >= 0 && j >= 0) {

            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }

            i--;
        }

        // We are allowed to use at most one mismatch
        bool canSkip = true;

        j = 0;

        // Greedily scan word1 from left to right
        for (i = 0; i < n; i++) {

            if (j == m)
                break;

            // Normal matching case
            if (word1[i] == word2[j]) {

                ans[j] = i;
                j++;
            }

            // Use our one allowed mismatch
            else if (
                canSkip &&
                (j == m - 1 || i < last[j + 1])
            ) {

                ans[j] = i;
                j++;

                canSkip = false;
            }
        }

        // Did we match all characters?
        if (j == m)
            return ans;

        return {};
    }
};