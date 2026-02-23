#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    int t;
    for(t=1; t<=T; t++)
    {
        int m,n;
        scanf("%d%d",&n,&m);

        int sum=0;
        int sign=-1;
        int c=0;
        for(int i=1; i<=n; i++)
        {
            if(i%m==1)
            {
                sign*=-1;
                c++;
            sum+=sign*i;


        }
        printf("Case %d: %d\n",t,sum);


    }}
    return 0;


}




