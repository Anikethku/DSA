class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long total_shift=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            total_shift=(total_shift+shifts[i])%26;

            s[i]=(s[i]-'a'+total_shift)%26+'a';
        }
        return s;
    }
};