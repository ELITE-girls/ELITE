
#include<stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
int i=0;
 char ch,buffer[];
 clrscr();
//   fp=fopen("src.txt","r");
  fp=fopen("weblog.txt","r"); 
  if(fp==NULL)
    printf("\nerror...");
  else
   do
    {
       ch=fgetc(fp);
        buffer[i]=ch;
       //printf("%c",ch);
       i++;
    }while(ch!=EOF);
    getch();
 return 0;
}