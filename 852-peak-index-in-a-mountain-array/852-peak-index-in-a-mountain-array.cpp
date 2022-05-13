class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(m==0)m++;
            if(m==arr.size()-1)m--;
            if(arr[m]>arr[m-1]&&arr[m]>arr[m+1])return m;
            else if(arr[m]>arr[m+1])r=m-1;
            else if(arr[m]<arr[m+1])l=m+1;
        }
        return 0;
    }
};