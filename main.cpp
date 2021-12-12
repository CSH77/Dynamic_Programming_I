#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        if(nums.size() == 1)
            return nums[0];

        if(nums.size() == 2)
            return max(nums[0], nums[1]);


        int a = rob_simple(nums, 0, nums.size() - 2);
        int b = rob_simple(nums, 1, nums.size() - 1);

        return max(a, b);
    }

    int rob_simple(vector<int> nums, int start, int end){
        int t1 = 0;
        int t2 = 0;

        for(int i = start; i <= end; i++){
            int temp = t1;
            nums[i] = max(nums[i] + t2, t1);
            t1 = nums[i];
            t2 = temp;
        }
        int answer = nums[end];

        return answer;
    }
};

int main()
{
    Solution obj;
    // vector<int> input = {2,3,2}; //expect 3
    // vector<int> input = {0}; //expect 0;
    vector<int> input = {200,3,140,20,10}; //expect 340;

    cout << obj.rob(input);

    return 0;
}


