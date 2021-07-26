#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	int i,pos;
	char ch, newch[500];
	fp=fopen("myfile.txt","r");
	fseek(fp,0,SEEK_END);
	pos=ftell(fp);
	for(i=0;i<pos;i++)
	{
        fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
	fclose(fp);
	return 0;
}
