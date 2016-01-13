class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int digitCounts(int k, int n) {
        // write your code here
        int count = 0;
    
        for(int i=0;i<=n;i++)
        {
            int num = i;
            if(k==0 && i==0)
                count++;
            while(num>0)
            {
                if(num%10==k)
                    count++;
                num = num/10;
            }
        }
        return count;
    }
};
