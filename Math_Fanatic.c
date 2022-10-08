#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {
    long n;
    long cool=0;

    scanf("%ld",&n);

    if(n>pow(10,5)||n<1)
    {
        return 1;
    }

    long * s=malloc(n*sizeof(long));
    long * prefix=malloc(n*sizeof(long));
    for(int i=0;i<n;i++)
    {
        scanf("%ld",(s+i));
        if(*(s+i)<1||*(s+i)>pow(10,9))
        {
            return 1;
        }

    }
    for(int i=0;i<n;i++)
    {
        //*(prefix+i)=cool-*(s+n-2-i);
        //printf("%d=%d-%d\n",*(prefix+i),cool,*(s+n-2-i));
        cool+=*(s+i);
        *(prefix+i)=cool;
        // printf("p=%d s=%d,cool =%d\n",*(prefix+i),*(s+i),cool);


    }
    for(int i=0;i<n;i++)
    {
        if(*(prefix+i)%*(s+i)==0)
        {
            printf("%ld %ld\n",*(prefix+i),*(s+i));
        }
    }



    free(s);
    free(prefix);
    return 0;
}
