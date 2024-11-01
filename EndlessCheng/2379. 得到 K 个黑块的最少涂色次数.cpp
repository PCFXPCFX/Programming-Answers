class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        long long sumBlack=0,maxSum;
        int n=blocks.length();
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='B')
            {
                sumBlack++;
            }
        }
        maxSum=sumBlack;
        for(int i=k;i<n;i++)
        {
            if(blocks[i]=='B')
            {
                sumBlack++;
            }
            if(blocks[i-k]=='B')
            {
                sumBlack--;
            }
            maxSum=max(maxSum,sumBlack);
            if(maxSum>=k)
            {
                return 0;
            }
        }
        return k-maxSum;
        
    }
};
