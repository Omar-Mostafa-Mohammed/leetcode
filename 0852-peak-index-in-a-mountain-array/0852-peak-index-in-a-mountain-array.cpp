class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int final_ans=0;
        int n = arr.size()-1;
        int st=1,ed=n-1,mid;
        while(st<ed)
        {
            mid = (st+ed+1)/2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) 
            {
                return mid;
            }
            
            else if(arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
                st=mid;
            else
                ed = mid-1;
        }
       return st;
    }
};