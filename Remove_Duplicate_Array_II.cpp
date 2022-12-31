class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        
    int len=2;
      int n=nums.size();
      if(n<=2)
          return n;
      for(int i=2;i<n;i++){
         if( nums[i]!=nums[len-2]||nums[i]!=nums[len-1])
         {
           nums[len++]=nums[i];
            
         }
      }
      return len;
        
    }
};