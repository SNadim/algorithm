// Time Complexity O(nlogn) // best, avg
// Time Complexity O(n2) // worst
// Space Complexity O(logn) // best, avg
// Space Complexity O(n) // worst
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &nums, int l, int h)
{
    int pivot = nums[l];
    int i = l, j = h;

    while (i < j)
    {
        while (nums[i] <= pivot && i < h) i++;
        while (nums[j] > pivot && j > l) j--;
        if (i < j) swap(nums[i], nums[j]);
    }
    swap(nums[l], nums[j]);
    return j;
}

void quickSort(vector<int> &nums, int l, int h)
{
    if (l < h)
    {
        int j = partition(nums, l, h);
        quickSort(nums, l, j - 1);
        quickSort(nums, j + 1, h);
    }
}

int main()
{
    vector<int> nums = {4, 3, 1, 2, 5, 9, 7, 10, 6};
    quickSort(nums, 0, nums.size() - 1);
    for (auto i : nums) cout << i << " ";
    return 0;
}
