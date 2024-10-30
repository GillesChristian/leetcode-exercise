// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            };
        };

        return k;
    };
};

int main()
{
    Solution solution;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(5);
    nums.push_back(6);
    int result = solution.removeDuplicates(nums);

    cout << "List elements: [";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ", ";
    };
    cout << "]" << endl;
    cout << "Number of unique elements: " << result << endl;

    return 0;
};