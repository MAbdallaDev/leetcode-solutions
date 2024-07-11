class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        if (n == 1)
            return s;
        int i = 0;
        int j = n - 1;
        char temp = ' ';
        while (i < j) {
            while (!isVowel(s[i]) && i < n)
                i++;
            while (!isVowel(s[j]) && j > 0)
                j--;
            if (i >= j)
                break;
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }

private:
    bool isVowel(char ch) {
        ch = tolower(static_cast<unsigned char>(ch));
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
};