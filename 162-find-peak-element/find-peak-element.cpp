class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //peak nums
        //so just that the peak elements are greater than the neighbours here so
        //then from the binary search here we maitain mid and left and right
        //conditons are like if we compare mid and mid-1 and mid+1 then if it is then good and if not then 

        //Observation here that we only require to compare th mid and mid+1 only 
    
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=i+(j-i)/2;

            if(nums[mid]<nums[mid+1]){
                i=mid+1;
            }

            else if( nums[mid]>nums[mid+1]){
                j=mid;
            }

        }
        return j;
    }
};