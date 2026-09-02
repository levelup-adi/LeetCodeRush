class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    
        /*vector<int> nums2;
        int c=0;
        if(nums1[0]%2==0){
            
            for(int i=0;i<nums1.size();i++){
                
                if(nums1[i]%2==0){
                    //nums2.push_back(nums1[i]);
                    c++;
                }

                else{
                    for(int j=0;j<nums1.size();j++){
                        if(i!=j && (nums1[i]-nums1[j]) % 2 == 0){
                            //nums2.push_back(nums1[i]-nums1[j]);
                            c++;
                            break;
                        }
                    }
                }
        }
                
        }
        else{
            for(int i=0;i<nums1.size();i++){
                
                if(nums1[i]%2!=0){
                    //nums2.push_back(nums1[i]);
                    c++;
                }

                else{
                    for(int j=0;j<nums1.size();j++){
                        if(i!=j && (nums1[i]-nums1[j]) % 2 != 0){
                        //    nums2.push_back(nums1[i]-nums1[j]);
                            c++;
                            break;
                        }
                    }
                }
        }
        
        }
        if (c==nums1.size()) return true;    
        else return false;    */
        return true;
    }
};