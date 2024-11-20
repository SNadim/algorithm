// Insertion Sort
// Time Complexity O(n2) // avg, worst
// Time Complexity O(n) // best
// Space Complexity O(1)
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int nums[] = {3, 2, 1, 6, -1};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0 && nums[j-1] > nums[j])
        {
            swap(nums[j], nums[j-1]);
            j--;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
