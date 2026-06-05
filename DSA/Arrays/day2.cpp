// Given an array arr[], check whether it is sorted in non-decreasing order. 
//Return true if it is sorted otherwise false.
//code
class Solution
{
public:
    bool isSorted(vector<int> &arr)
    {
        bool sort = true;
        int n = arr.size();

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                sort = false;
                break;
            }
        }

        return sort;
    }
};
// You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared.

//code
class Solution
{
public:
    vector<int> removeDuplicates(vector<int> &arr)
    {
        vector<int> ans;

        ans.push_back(arr[0]);

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] != arr[i - 1])
            {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};
