// Bubble Sort
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
        for(int j = 0; j < n-i-1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
