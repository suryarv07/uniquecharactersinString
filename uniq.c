#include<stdio.h>
#include<string.h>


void isUniq(char arr[],int  len)
{

    for(int i=0;i<len;i++)
    {
        int j;
       for(j=0;j<i;j++)
           if(arr[i]==arr[j])
                break;
        if(i==j)
         printf("%c",arr[I]);
}



int main()
{



    char array[300];

    printf("Enter The String ");
    fgets(array,300,stdin);

    int len=strlen(array);
    isUniq(array,len);

    return 0;
}
