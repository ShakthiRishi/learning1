#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
int is(char buffer[]){
    char keywords[6][10] = {"char","double","float","int","long"};
    int i, f=0;
    
   
        if(strcmp(keywords[0], buffer) == 0){
            f=1;
            
        }
        else if(strcmp(keywords[1], buffer) == 0){
        	f=2;
        
    }
    else if(strcmp(keywords[2], buffer) == 0){
        	f=3;
        	
    }
    else if(strcmp(keywords[3], buffer) == 0){
        	f=4;
        
    }
    else if(strcmp(keywords[4], buffer) == 0){
        	f=5;
        	
    }
    
    return f;
}
void check(char bb[]){
		if(is(bb) == 1)
                {
                	printf("c \t\t");
                	
                	printf("%s \t\t",bb); 
                	printf("1 \t\t");
                	printf("global\n");
                	exit(0);
                	
                }
                if(is(bb) == 2)
                {
                	printf("d \t\t");
                	
                	printf("%s \t\t",bb); 
                	printf("8 \t\t");
                	printf("global\n");
                	exit(0);
                	
                }
                if(is(bb) == 3)
                {
                	printf("f \t\t");
                	
                	printf("%s \t\t",bb); 
                	printf("4 \t\t");
                	printf("global\n");
                	exit(0);
                	
                }
			   
			   	if(is(bb) == 4)
                {
                	printf("a \t\t");
                	
                	printf("%s \t\t",bb); 
                	printf("2 \t\t");
                	printf("global\n");
                	exit(0);
                	
                }
                if(is(bb) == 5)
                {
                	printf("l \t\t");
                	
                	printf("%s \t\t",bb); 
                	printf("4 \t\t");
                	printf("global\n");
                	exit(0);
                }
}
 
int main(){
    char ch, c2, b2[15], buffer[15];
    FILE *fp;
    int i,j=0;
    
    fp = fopen("program.txt","r");
    
    if(fp == NULL){
        printf("error while opening the file\n");
        exit(0);
    }
    printf("\n\tSYMBOL TABLE IMPLEMENTATION\n\n");
    printf("var name \tvar type \tvar size \tvar scope\n");
    while((ch = fgetc(fp)) != EOF){
           
           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ')&& (j != 0)){
				j=0;
           		check(buffer);
				   }
            }
            fclose(fp);
			return 0;
				}
				
    
    

    
    

