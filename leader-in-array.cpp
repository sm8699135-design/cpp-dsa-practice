#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>&nums){
    int n=nums.size();
    vector<int> ans;

    int max_element=nums[n-1];
    ans.push_back(max_element);

    for(int i=n-2; i>=0;i--){
        if(nums[i]>max_element){
            ans.push_back(nums[i]);
            max_element=nums[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>nums={16,17,4,3,5,2};

    vector<int>result=leaders(nums);

    cout<<"leaders in the array: ";
    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}