#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char str[20];
    char sen[100];
    
    scanf("%c",&c);
    scanf("%s",str);
    getchar();
    scanf("%[^\n]s", sen);
    
    printf("%c\n",c);
    printf("%s\n",str);
    printf("%s\n",sen);
    
    return 0;
}
