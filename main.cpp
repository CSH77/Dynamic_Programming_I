#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();

        if(N == 0)
        {
            return 0;
        }

        vector<int> maxRobbedAmount;
        maxRobbedAmount.resize(N + 1);

        maxRobbedAmount[N] = 0;
        maxRobbedAmount[N - 1] = nums[N - 1];

        for(int i = N - 2; i >= 0; i--)
        {
            maxRobbedAmount[i] = max(maxRobbedAmount[i + 1], maxRobbedAmount[i + 2] + nums[i]);
        }

        return maxRobbedAmount[0];
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



