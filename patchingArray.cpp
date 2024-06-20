#include<iostream>
#include<vector>
using namespace std;

int patchingArray(vector<int> nums, int n){
    int count = 0;
    int covered = 0;
    int i = 0;
    while(covered < n){
        if(i < nums.size() && nums[i] <= covered + 1){
            covered += nums[i];
            i++;
        }
        else{
            covered++;
            count++;
        }
    }
    
    return count;
}
int main(){
    int n = 6;
    vector<int> nums = {1, 3};
    cout<<patchingArray(nums, n );
    return 0;
}