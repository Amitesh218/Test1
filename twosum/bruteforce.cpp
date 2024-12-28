class solution{
public:
  vector<int> twosum(vector<int> nums, int target){
    for (i=0,i<nums.size(), i++){

      for (j=i+1,j<nums.size(), j++){
        if (target== nums[i]+nums[j]){
            return (i,j);
        }
      }
    }
  return {0};
  }
}
