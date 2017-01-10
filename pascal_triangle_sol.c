#include <stdio.h>
int main()
{
    int n,i,j,ans=0,a;
    scanf("%d",&n);
    printf("1\n");
    for(i=1;i<n;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		if(j==0)
    			ans=1;
    		else
    		{
    			i+j==n+1;
    			a=i-j+1;
    			ans=ans*a;
    			ans=ans/j;
			}
    		printf("%d ",ans);
    	}
    	printf("\n");
    }
    return 0;
}

