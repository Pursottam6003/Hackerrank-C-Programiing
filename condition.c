#include<stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    
    switch(i)
    {
        case 1:
        printf("one");
        break;
        
        case 2:
        printf("two");
        break;
        case 3:
        
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        
        case 5:
        printf("five");
        break;    
        case 6:
        printf("six");
        
        case 7:
        printf("seven");
        break;    
        case 8:
        printf("eight");
        break; 
         
        case 9:
        printf("nine");
        break;
    }
    
    if(i>9)
    {
        printf("Greater than 9");
    }
    
    
    return 0;
}
