#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <array>


using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int cache[10001] = {0};

        for(int num : nums)
            cache[num] += num;

        int take = 0, skip = 0;
        for(int i=0; i<10001; i++)
        {
            int take_i = skip + cache[i];
            int skip_i = max(take, skip);
            take = take_i;
            skip = skip_i;
        }
        return take;
    }
};


int main()
{
    Solution obj;
    vector<int> input  = {2,2,3,3,3,4}; //expect 9;
    // vector<int> input = {1}; //expect 1;
    // vector<int> input = {3,1}; //expect 4;
    // vector<int> input = {3,4,2}; //expect 6;
    // vector<int> input = {1,1,1,2,4,5,5,5,6}; //expect 18;

    cout << obj.deleteAndEarn(input);

    return 0;
}

