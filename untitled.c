#include <stdio.h>
#include <string.h>
#include "stradd.c"


char data[100][100];
char data2[100][100];
int how;

void sysfun(int a){
	//sytem("cd target");



	
	char str[1000]="cd target & rename ";
	int c=0;
		
	
//for(int a=0;a<how;a++){
//printf("\n%s",str);
	c=strlen(str);
    stradd(str," ",c-1);
	c=strlen(str);
	
	stradd(str,data2[a],c);
	c=strlen(str);
//	
	stradd(str," ",c-1);
	c=strlen(str);
	
	
	stradd(str,data[a],c);
	c=strlen(str);
//system("cd target");
//system("dir /b");
 printf("%s thisis::%d",str,c);   

  system(str);
//printf("file %d done",a);
	
  // strcpy("cd target & rename ",str);
  
  }
	

	
	

void file_arr(){
	
	char buffer[100];
char result[4000]="";

FILE *ptr;

//system("cd target");
ptr=popen("cd target & dir /b ","r");

while(fgets(buffer,sizeof(buffer),ptr)){

	strcat(result,buffer);
	}

pclose(ptr);

FILE *file;

file=fopen("tooll.txt","w");
//g_print("%s",result);

fprintf(file,"%s",result);

	fclose(file);

	
	ptr=fopen("tooll.txt","r");

	int a=0;
	while(1){
		if(feof(ptr)){
			break;
		}

	fgets(data[a],400,ptr);
	a++;
	}
//a=a-1;
how=a;


int i=0;
	while(i<how){
			
	strcpy(data2[i],data[i]);
		i++;
		}

}




void string_replace(char *ch_char,char *change_to,char *str){
	
if(change_to==NULL){
	
	
	
	
	
	
	
	int a=0;
	char tem[100];
	int count=strlen(ch_char);
	
	while(1){
		if(str[a]=='\0'){
			break;
			}
	
		tem[a]=str[a+count];
		a++;
		}
	
	strcpy(str,tem);
	
	//printf("  the char %s\n\n",tem);
}
else{
	
	
	}

}

int main(int argc, char **argv)
{
		
		
printf("\t\t\tSIMPLE FILE RENAME TOOL \n\n");
	system("cd target & dir /b");
	
	 
	
		
printf("\n\nENTER THE  CHARACTER YOU WANT TO REMAVE  funck\n\n");
char str[100];
gets(str);

file_arr();



for(int a=0;a<how;a++){
string_replace(str,NULL,data[a]);
}

for(int a=0;a<how-1;a++){

sysfun(a);
printf("FILE NO > %d DONE ", a);
}
		
printf("\n\nafter string funck\n\n");
for(int a=0;a<how;a++){
printf("%s",data[a]);
}	
//		system("cd tooll &dir /b");


getchar();
	
	printf("\n\n\t\t%d FILES COMPLETED",how);
	return 0;
}

