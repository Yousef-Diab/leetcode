class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        reverse(columnTitle.begin(), columnTitle.end());
    for (int i = 0; i < columnTitle.length(); i++) {
        int temp = columnTitle[i] - '@';
            int j = i;
            while (j--)
                temp *= 26;
            num += temp;
    }
        return num;
    }
};