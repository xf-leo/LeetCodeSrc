#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> indices;
        for(i=0;i<nums.size();++i)
        {
          vector<int>::const_iterator it = find(nums.begin(),nums.end(),target-nums[i]);
          if (it != nums.end())
          {
            indices.push_back(i);
            indices.push_back(it-nums.begin());
          }
        }
        
        return indices;
    }
};
