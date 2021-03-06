class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int count = 1, product = 9, base = 9;
        for (int i = 1; i <= n && i <= 10; ++i) {
            count += product;
            product *= base;
            --base;
        }
        
        return count;
    }
};
