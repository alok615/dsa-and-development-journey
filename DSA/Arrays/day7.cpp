//Find the repeating and missing numbers

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();

        long long sumN = (n * (n + 1)) / 2;
        long long sumSqN = (n * (n + 1) * (2 * n + 1)) / 6;

        long long arrSum = 0;
        long long arrSqSum = 0;

        for (int num : nums) {
            arrSum += num;
            arrSqSum += 1LL * num * num;
        }

        long long x = arrSum - sumN;              
        long long y = (arrSqSum - sumSqN) / x;   

        long long A = (x + y) / 2;   
        long long B = (y - x) / 2;

        return {(int)A, (int)B};
    }
};
