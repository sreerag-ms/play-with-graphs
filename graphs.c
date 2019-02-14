#include<math.h>
#include<stdio.h>
void main()
{
float rad(float d)
{
        float radian=(d/180)*3.14;
                return radian;

}
void delay(int x)
{
int j=0,k;
while(j<x)
{
        for(k=0;k<1000;k++)
        {

        }
j++;
}
}

int r=80,a,ang=0,i=0;
while(i<200)
{       ang++;
        for(a=0;a<(80+r*(cos(rad(ang))));a++)
                {
                printf(" ");
                }

        printf(".\n");
        delay(3000);


}
}


