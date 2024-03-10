/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i,*ret=(int*)malloc(sizeof(int)*nums1Size);
    bool hash[1001];
    memset(hash,0,sizeof(hash));
    for(i=0;i<nums1Size;i++){
        hash[nums1[i]]=true;
    }
    returnSize[0]=0;
    for(i=0;i<nums2Size;i++){
        if(hash[nums2[i]]==true){
            hash[nums2[i]]=false;
            ret[(*returnSize)++]=nums2[i];
        }
    }
    return ret;
}