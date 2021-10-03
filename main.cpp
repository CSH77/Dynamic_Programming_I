#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        if(nums.size() == 1)
            return nums[0];
        else if(nums.size() <= 2)
        {
            return max(nums[0], nums[1]);
        }

        int answer = robFrom(nums);
        return answer;
    }

    int robFrom(vector<int>& nums)
    {
        int SIZE = nums.size();
        for(int i = 0; i < nums.size() - 2; i++)
        {
            nums[i + 2] = nums[i] + nums[i + 2];
        }

        return max(nums[SIZE - 2], nums[SIZE - 1]);
    }
};

int main()
{
    Solution obj;
    // vector<int> input = {0}; //expect 0
    // vector<int> input = {1}; //expect 1
    // vector<int> input = {1,2,3,1}; //expect 4
    // vector<int> input = {2,7,9,3,1}; //expect 12
    vector<int> input = {2,1,1,2}; //expect 4
    int answer = obj.rob(input);
    cout << answer << endl;

    return 0;
}



