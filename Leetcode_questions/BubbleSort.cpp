// https://leetcode.com/problems/sort-colors/

#include "bits/stdc++.h"
#include <iostream>
using namespace std;
void SelectionSort(vector<int> &nums)
{
    int n = nums.size();
    int mi = nums[0];
    int m_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (mi > nums[i])
        {
            mi = nums[i];
            m_index = i;
        }
    }
    swap(nums[0], nums[m_index]);
    for (int i = 1; i < n - 1; i++)
    {
        int mi = nums[i];
        int m_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mi > nums[j])
            {
                mi = nums[j];
                m_index = j;
            }
        }
        swap(nums[i], nums[m_index]);
    }
}
void BubbleSort(vector<int> &nums)
{

    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
        cout << "After " << i << "th Iteration :\n";
        for (int k = 0; k < n; k++)
        {
            cout << nums[k] << " ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> que;
    for (int i = 0; i < n; i++)
    {
        int te;
        cin >> te;
        que.push_back(te);
    }
    // BubbleSort(que);

    // SelectionSort(que);
    for (int i = 0; i < n; i++)
    {
        cout << que[i] << " ";
    }
    return 0;
}