#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

/*************1.***************/
int is_prime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    if(x==1)
    {
        return 0;
    }
    return 1;
}

void sort(int*arr,int num)
{
    for(int i=0;i<num;i++)
    {
        int max=i;
        for(int j=i+1;j<num;j++)
        {
            if(arr[max]<arr[j])
            {
                max=j;
            }
        }
        int temp=arr[max];
        arr[max]=arr[i];
        arr[i]=temp;
    }
}

/********************2.*************/
int find_max(int *arr,int num)
{
    int max=arr[0];
    for(int i=1;i<num;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

/******************3.**************/
void del_repeat(char*str)
{
    int lenth=strlen(str);
    for(int i=0;i<lenth;i++)
    {
        for(int j=i+1;j<lenth;j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<lenth;k++)
                {
                    str[k]=str[k+1];
                }
                lenth--;
                j--;
            }
        }
    }
}

int main()
{
    /*************1.************/
    // int arr[20];
    // srand((unsigned int)time(NULL));
    // for(int i=0;i<20;i++)
    // {
    //     //scanf("%d",&arr[i]);
    //     arr[i]=rand()%100+1;
    // }
    // for(int i=0;i<20;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // int temp[20];
    // int j=0;
    // for(int i=0;i<20;i++)
    // {
    //     if(is_prime(arr[i]))
    //     {
    //         temp[j++]=arr[i];
    //     }
    // }
    // sort(temp,j);
    // for(int i=0;i<j;i++)
    // {
    //     printf("%d ",temp[i]);
    // }


    /*************2.******************/
    // int arr[5][9];
    // int temp[9][5];
    // srand((unsigned int)time(NULL));
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<9;j++)
    //     {
    //         arr[i][j]=rand()%10;
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<9;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         temp[i][j]=arr[j][i];
    //     }
    // }
    // int ret=0;
    // for(int i=0;i<9;i++)
    // {
    //     ret=ret*10+find_max(temp[i],5);
    // }
    // printf("%d",ret);


    /******************3.****************/
    char str[100];
    scanf("%s",str);
    del_repeat(str);
    printf("%s",str);
}