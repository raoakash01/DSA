#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size()-2; i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int l = i+1, r = nums.size()-1;
        while(l<r){
            int sum = nums[i]+nums[l]+nums[r];
            if(sum==0){
                ans.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[l+1]) l++;
                while(l<r && nums[r]==nums[r-1]) r--;
                l++;
                r--;
            }
            else if(sum>0){
                r--;
            }
            else{
                l++;
            }
        }
           
    }
    
    return ans;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,4};
    vector<vector<int>> result = threeSum(nums);

    for (int i = 0; i < result.size(); i++){
        cout << "[";
        for (int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << ",";
        }
        cout << "]";
    }
    return 0;
}
