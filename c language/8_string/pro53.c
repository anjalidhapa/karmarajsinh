#include<stdio.h>
#include<string.h>
void main(){
    int menu,l,check;
    char str1[20],str2[20],s1[10],s2[10];
    start:
    
    printf("MENU:\n");
    printf("\n1. length of string ");
    printf("\n2. copy a string ");
    printf("\n3. merge a string ");
    printf("\n4. compare of string ");
    printf("\n5. EXIT ");
    
    printf("\nEnter the choice ---> ");
    scanf("%d",&menu);
    
    switch (menu) {
        case 1:
        printf("\nenter your word --->");
        scanf("%s",&str1);
        l=strlen(str1);
        printf("\nLength=%d",l);
         goto start;
        break;
        
        case 2:
        printf("\nenter your word --->");
        scanf("%s",&str1);
        strcpy(str2,str1);
        printf("\nstr2:%s",str2);
         goto start;
        break;
        
        case 3:
        printf("\nenter s1 --->");
        scanf("%s",&s1);
        printf("enter s2 --->");
        scanf("%s",&s2);
        strcat(s1, s2);
        printf("\nmerge:%s",s1);
         goto start;
        break;
        
        case 4:
        printf("\nenter s1 --->");
        scanf("%s",&s1);
        printf("enter s2 --->");
        scanf("%s",&s2);
        check=strcmp(s1,s2);
        if(check<0){
            printf("s2 is larger than s1");
        }
        else if (check>0)
        {
            printf("s1 is larger than s2");
        }
        else{
            printf("s1 and s2 are equal");
        }
         goto start;
        break;
        
        case 5:
        break;
    
        default:
            printf("Error-- choice not found");

    }
}