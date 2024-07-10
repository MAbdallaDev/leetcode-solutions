class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        int n = (n1 < n2) ? n1 : n2;
        int i = 0;
        string word3 = "";
        while (i < n)
        {
            word3.push_back(word1[i]);
            word3.push_back(word2[i]);
            i++;
        }
        while (i < n1) { word3.push_back(word1[i++]); }
        while (i < n2) { word3.push_back(word2[i++]); }
        return word3;
    }
};