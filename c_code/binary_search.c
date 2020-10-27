#include <stdio.h>

int binary_search(int array[],int num, int key);

int binary_search(int array[],int num,int key)
{
    int left = 0;
    int right = num-1;
    int mid = 0;
    while(left <= right)
    {
        mid = (left + right)/2;
         if(array[mid] == key)
         {
             return mid;
         }

         if(array[mid] < key)
         {
             left = mid + 1;
         }
         else
         {
             right = mid - 1;
         }
    }
    return -1;
}


int main()
{
    int ret;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    ret = binary_search(arr,9,1);
    if(ret == -1)
    {
        printf("key is not find!\n");
    }
    else
    {
        printf("key is find,and flag is = %d\n",ret);
    }
    printf("Hello world\n");
    return 0;
}

