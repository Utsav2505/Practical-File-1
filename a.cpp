#include<iostream>
#include<vector>

int vectorSize(std::vector<int>& nums1){
    
    return (nums1.size());
}
int getIndex(std::vector<int>& nums1,std::vector<int>& nums2){
    int index;
    for(int i=0; i<nums1.size();i++){
        if(nums1[i]>nums2[0]){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    std::vector<int> nums1 {1,2,5,6,7};
    std::vector<int> nums2 {3,4};
    double median;
        nums1.insert(nums1.begin() + getIndex(nums1,nums2), nums2.begin(), nums2.end());
        if(vectorSize(nums1)%2==0){ //for even no. of elements [1,2,3,4,5,6,7,8]
            median = ( nums1[vectorSize(nums1)/2] + nums1[(vectorSize(nums1)/2)+1] ) /2;
        }
        else{
            median = nums1[(vectorSize(nums1)+1)/2];
        }
        return median;    
}