// Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int cnt=0;
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                cnt++;
                if(cnt<max){
                    
                }
                else if(max<cnt){
                    max=cnt;
                }
            }
            else if(arr[i]==0){
                cnt=0;
            }
        }
        return max;
    }
};
