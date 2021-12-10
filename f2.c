#include<stdio.h>
#include<stdlib.h>
void insert(FILE *fp)
{
    int n;
    printf("Enter how many no of students record you want to enter :");
    scanf("%d",&n);
    char ch[100];
    fp=fopen("f2.txt","a+");

    for(int i=0;i<n;i++)
    {
        printf("Enter Student name:");
        scanf("%s",ch);
        for(int j=0;j<strlen(ch);j++)
            fputc(ch[j],fp);
    }
    fclose(fp);

}
void read(FILE *fp)
{
    fp=fopen("f2.text","r");
    char *ch;
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%s",ch);
    }
}
void main(){
    FILE *fp;
    insert(fp);
    read(fp);


}

