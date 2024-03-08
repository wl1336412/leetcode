int maxFrequencyElements(int* nums, int numsSize) {
    int ret=0,max=0,numsHash[110]={0},i;
    for(i=0;i<numsSize;i++){
        numsHash[nums[i]]+=1;
        if(max<numsHash[nums[i]]){
            max=numsHash[nums[i]];
            ret=0;
        }
    }
    for(i=0;i<numsSize;i++){
        if(max==numsHash[nums[i]]){
            ret+=1;
        }
    }
    return ret;
}