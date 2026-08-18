class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>vowel;
        vowel.insert('a');
        vowel.insert('e');
        vowel.insert('i');
        vowel.insert('o');
        vowel.insert('u');
        int i=0;
        int ans=0;
        int count=0;
        int n=s.size();
        for(int j=0;j<n;j++)
        {
            if(vowel.find(s[j])!=vowel.end())
            {
                count++;
            }
            if(j>k-1)
            {
                if(vowel.find(s[i])!=vowel.end())
                {
                    count--;
                }
                i++;
            }
            if(j>=k-1) ans=max(ans,count);
        }
        return ans;
    }
};