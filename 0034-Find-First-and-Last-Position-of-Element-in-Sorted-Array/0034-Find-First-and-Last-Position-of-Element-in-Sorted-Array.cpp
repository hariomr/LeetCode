class Solution {
public:
    int left(int x, vector<int>& nums){
        int n=nums.size();
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==x){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int right(int x, vector<int>& nums){
        int n=nums.size();
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==x){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l1=left(target,nums);
        int r1=right(target,nums);

        return{l1,r1};
    }
};
