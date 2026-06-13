//Maximize Number of 1's
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
//Find the Missing Number
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int mis;
        int n=arr.size();
        vector<bool> ans(n+2,false);
        for(int i=0;i<n;i++){
            ans[arr[i]]=true;
        }
        for(int i=1;i<=n+1;i++){
            if(ans[i]==false){
                mis=i;
            }
        }
        return mis;
        
    }
};
//Unique Number I
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int ans=0;
        for(int x:arr){
            ans^=x;
        }
        return ans;
    }
};
