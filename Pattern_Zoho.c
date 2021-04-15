#include<stdio.h>


int main()
{
    char str[100],c;
    int n=0,i=0;
    char temp[100];
    while(scanf("%c",&c) && c!='\n')
    {
        str[n++] = c;
    }
    //printf("%s",str);

    int mid = n/2;
    int safe = mid;

    //printf("%d %d",mid,n);

    while(safe<n)
    {
        temp[i] = str[safe];
        i++;
        safe++;
    }
    int j=0;
    while(j<mid)
    {
        temp[i] = str[j];
        j++;
        i++;
    }
    //printf("%s",temp);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%c",temp[j]);
        }
        printf("\n");
    }
    return 0;
}
