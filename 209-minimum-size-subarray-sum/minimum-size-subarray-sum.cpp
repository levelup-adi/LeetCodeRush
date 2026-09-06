class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //Now the main error is for time limit exceeding here now how can i optimize here these cases

        //1st I have to reduce the loop case check what is needed here not the whole combinations here  
        
        
//imp syntax here
//after sorting here [1,2,2,3,3,4]

        int minlen=nums.size()+1;
        int j=0;
        int s=0;
        
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            
            while(s>=target){
                minlen=min(i-j+1,minlen);
                s-=nums[j];
                j++;
            }
            
            
        }
        if(minlen==nums.size()+1){return 0;}

        return minlen;   
    }
};