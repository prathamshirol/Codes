class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int kh[n+m];
        int i=0,j=0,k=0;
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                kh[k++]=nums1[i++];
            }
            else
                kh[k++]=nums2[j++];
        }
        while(i<m)
        {
            kh[k++]=nums1[i++];
        }
        while(j<n)
        {
            kh[k++]=nums2[j++];
        }
        for(int p=0;p<m+n;p++)
        {
            nums1[p]=kh[p];
        }
        
    }
};
      