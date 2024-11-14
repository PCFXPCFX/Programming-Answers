class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> myque;
        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
            
            while(myque.empty()!=true&&nums[i]>nums[myque.back()])
            {
                myque.pop_back();
            }

            myque.push_back(i);

            if(myque.front()<=i-k)
            {
                myque.pop_front();
            }

            if(i>=k-1)
            ans.push_back(nums[myque.front()]);

        }
        return ans;
    }  
};
