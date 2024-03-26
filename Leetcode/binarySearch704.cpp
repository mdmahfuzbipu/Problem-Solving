int search(int* nums, int numsSize, int target) {
    int lower,higher,mid;
    
    lower=0;
    higher=numsSize-1;

    while(lower<=higher)
    {
        mid=(higher+lower)/2;

        if(nums[mid]==target)
        {    return mid;
        }

        else if(nums[mid]>target)
        {
            higher=mid-1;
        }
        else
            {
                lower=mid+1;
            }

    }

    return -1;
}