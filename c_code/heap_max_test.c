#include <stdio.h>
#include <stdlib.h>

unsigned maxsum = 0;

int main(int argc,char *argv[])
{
    unsigned blocksize[] = {1024*1024,1024,1};
    int i,count;
    for(i = 0; i < 3; i++)
    {
        for(count = 1;;count++)
        {
            void *block = malloc(maxsum + blocksize[i]*count);
            if (block)
            {
                maxsum = maxsum + blocksize[i]*count;
                free(block);
            }
            else
            {
                break;
            }
        }
    }
    printf("maxheap malloc size = %u bytes\n",maxsum);
        

    return 0;
}

