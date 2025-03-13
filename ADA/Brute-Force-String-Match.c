#include<stdio.h>
#include<string.h>

int search(char *text,char *pat)
{
    int j;
    int n=strlen(text);
    int m=strlen(pat);
    for(int i=0;i<n-m;i++)
    {
        j=0;
        while(text[i+j]==pat[j] && j<m)
        {
            j++;
        }
        if(j==m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char text[]="Hello World";
    char pat[]="ell";
    int res=search(text,pat);
    if(res==-1)
        printf("String not matched\n");
    else
        printf("String matched\n");
    return 0;
}
