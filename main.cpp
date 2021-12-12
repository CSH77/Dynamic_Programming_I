#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
<<<<<<< HEAD
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
=======

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
>>>>>>> 4e6010517ccc819fcf84759bbb6472491a2ea5b7
    }
};

int main()
{
    Solution obj;
<<<<<<< HEAD
    // vector<int> input = {2,3,2}; //expect 3
    // vector<int> input = {0}; //expect 0;
    vector<int> input = {200,3,140,20,10}; //expect 340;
=======
    //vector<int> input = {2,3,2}; //expect 3
    vector<int> input = {1,2,3,1}; //expect 4

>>>>>>> 4e6010517ccc819fcf84759bbb6472491a2ea5b7

    cout << obj.rob(input);

    return 0;
}

<<<<<<< HEAD

=======
>>>>>>> 4e6010517ccc819fcf84759bbb6472491a2ea5b7
