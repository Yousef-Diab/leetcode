class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long num=0;
        reverse(columnTitle.begin(), columnTitle.end());
    for (long long i = 0; i < columnTitle.length(); i++) {
        long long temp = columnTitle[i] - '@';
            int j = i;
            while (j--)
                temp *= 26;
            num += temp;
    }
        return num;
    }
};