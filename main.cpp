#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        if(nums.size() < 1)
            return 0;

        //only one item, return the item.
        if(nums.size() < 2)
            return nums[0];

        //circle, last one can't be robbed because first one is connected to last one.
        //start from first one, exclude last one.
        int a = rob_simple(nums, 0, nums.size() -2 );

        //sttart from second one
        int b = rob_simple(nums, 1, nums.size() - 1 );
        return max(a,b);
    }

    int rob_simple(vector<int>& nums, int start, int end){
        int t1 = 0; //latest max
        int t2 = 0; //olderest max

        for(int i = start; i <= end; i++){
            int temp = t1; //backup current max
            int current = nums[i];
            t1 = max(current + t2, t1);
            t2 = temp; //keep previous max
        }
        return t1;
    }
};

int main()
{
    Solution obj;
    //vector<int> input = {2,3,2}; //expect 3
    vector<int> input = {1,2,3,1}; //expect 4


    cout << obj.rob(input);

    return 0;
}

