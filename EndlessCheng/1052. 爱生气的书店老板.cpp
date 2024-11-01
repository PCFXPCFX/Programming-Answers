class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisNum=0,maxSatis=0,currentSatis=0;
        int n=customers.size();
      
        for(int i=0;i<minutes;i++)
        {
            if(grumpy[i]==0)
            {
                satisNum+=customers[i];
            }
           else
            {
                currentSatis+=customers[i];
            }
       
        }
      
        maxSatis=currentSatis;
      
        for(int i=minutes;i<n;i++)
        {
            if(grumpy[i]==0)
            {
                satisNum+=customers[i];
            }
            else
            {
                currentSatis+=customers[i];
            }
            if(grumpy[i-minutes]==1)
            {
                currentSatis-=customers[i-minutes];
            }
            maxSatis=max(maxSatis,currentSatis);
        }
        return satisNum+maxSatis;

    }
};
