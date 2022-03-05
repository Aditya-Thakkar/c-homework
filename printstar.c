#include<stdio.h>
void main()
{
    int i,a[5],j;
    
        printf("Enter the five numbers you want to print\n");
        printf("Number should be greater than 0 and smaller than 30\n");
        for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
            while(a[i]<0 || a[i]>31)
            {
                printf("Please Enter a valid value\n");
                scanf("%d",&a[i]);
            }
        }
        printf("Input\t");
        printf("Output\n");
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[j]);
            for(i=0;i<a[j];i++)
            {
                printf("*");    
            }
            printf("\n");
        }
       
}
