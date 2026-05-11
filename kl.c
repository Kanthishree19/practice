#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }
    while(fgets(str, 100, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}