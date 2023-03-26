class Solution {
public:
    int kItemsWithMaximumSum(int one, int zero, int neg, int k) {
        if(k<=one) return k;
        else if(k<=one+zero) return one;
        else return one+(one+zero-k);
    }
};
