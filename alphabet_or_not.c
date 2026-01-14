#include<stdio.h>

main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
  
    //conditions for checking its belongs to A to Z , also check a to z
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
        printf("%c is an alphabet.\n", ch);
        }
    else
        {
        printf("%c is not an alphabet.\n", ch);
        }
    return 0;

}
