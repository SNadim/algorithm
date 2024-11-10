#include <iostream>
#include <vector>
using namespace std;

void f(int n, vector<int> &nums, vector<int> &curr, vector<vector<int>> &ans) 
{
    if(n == nums.size())
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(nums[n]);
    f(n+1, nums, curr, ans);
    curr.pop_back();
    f(n+1, nums, curr, ans);
    
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> curr;
    vector<vector<int>> ans;
    f(0, nums, curr, ans);
    return ans;
}
    
int main()
{
    vector<int> nums = {1,2,3};
    
    vector<vector<int>> ans = subsets(nums);
    
    for(auto i : ans)
    {
        for(auto j : i) cout << j << " ";
        cout << '\n';
    }
    return 0;
}
