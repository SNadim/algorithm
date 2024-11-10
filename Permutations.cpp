#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, vector<int>& nums, vector<int> comb, vector<vector<int>> &ans)
{
    if(n == nums.size())
    {
        ans.push_back(comb);
        return;
    }
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(comb[i] == -1) {
            comb[i] = nums[n];
            dfs(n+1, nums, comb, ans);
            comb[i] = -1;
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) 
{
    vector<int> comb(nums.size(), -1);
    vector<vector<int>> ans;
    dfs(0, nums, comb, ans);
    return ans;
}
int main() {
    vector<int> nums = {0,1};
    vector<vector<int>> ans = permute(nums);
    for(auto i : ans)
    {
        for(auto j : i) cout << j << ' ';
        cout << '\n';
    }
    return 0;
}
