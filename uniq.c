#include<stdio.h>
#include<string.h>


void isUniq(char arr[],int  len)
{

    for(int i=0;i<len;i++)
    {
        while(i<len&& arr[i]==arr[i+1])
            i++;

        printf("%c",arr[i]);
    }
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
