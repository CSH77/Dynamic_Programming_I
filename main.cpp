#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        return 0;
    }

    int rob_simple(vector<int>& nums, int start, int end){
        int t1 = 0;
        int t2 = 0;

        for(int i = start; i <= end; i++){
            int temp = t1;
            int current = nums[i];
            t1 = max(current + t2, t1);

        }

    }

};

int main()
{
    Solution obj;
    vector<int> input = {2,3,2}; //expect 3

    cout << obj.rob(input);

    return 0;
}

