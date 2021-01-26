#include<stdio.h>
#include<math.h>
void main()
{
    int weight_count,i;
    scanf("%d",&weight_count);
    float weight[weight_count];
    for(i=0;i<weight_count;i++)
    {
        scanf("%f",&weight[i]);
    }
    int x=0,y,z,res;
    for(i=0;i<weight_count;i++)
    {
        if(weight[i]>1.990001)
            x++;
    }
    z=weight_count-x;
    y=ceil(z/(float)2);
    res=x+y;
    printf("%d",res);
}
