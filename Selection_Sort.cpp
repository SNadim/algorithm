// Selection Sort
// Time Complexity O(n2) // avg, worst, best
// Space Complexity O(1)


// selection sort
// two loop, Outer loop -> for loop 0 to n pick  each element and pick it as minInd 
// inner loop j = i+1 to n check the minElement comparing with minInd element and set new minElement index
// swap the i element with minIndex element

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int nums[] = {3, 2, 1, 6, -1};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = 0; i < n-1; i++)
    {
        int minInd = i;
        for(int j = i+1; j < n; j++)
        {
            if(nums[j] < nums[minInd])
            {
                minInd = j;
            }
        }
        if(minInd != i) swap(nums[minInd], nums[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
