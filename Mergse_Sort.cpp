#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right)
{
    int i = 0, j = 0;
    vector<int> arr;
    
    while(i < left.size() && j < right.size())
    {
        if(left[i] < right[j])
        {
            arr.push_back(left[i++]);
        }
        else
        {
            arr.push_back(right[j++]);
        }
    }
    
    while(i < left.size())
    {
        arr.push_back(left[i++]);
    }
    
    while(j < right.size())
    {
        arr.push_back(right[j++]);
    }
    
    return arr;
}
vector<int> mergeSort(vector<int> arr)
{
    int n = arr.size();
    if(n < 2) return arr;
    
    int mid = n/2;
    vector<int> left;
    vector<int> right;
    for(int i = 0; i < mid; i++)
    {
        left.push_back(arr[i]);
    }
    
    for(int i = mid; i < n; i++)
    {
        right.push_back(arr[i]);
    }
    vector<int> leftSort = mergeSort(left);
    vector<int> rightSort = mergeSort(right);
    return merge(leftSort, rightSort);
}
int main() {
    vector<int> arr = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    vector<int> ans = mergeSort(arr);
    for(auto i : ans) cout << i << " ";
     return 0;
}
