# include <stdio.h>

int main() {

    char main;
    // 97-122 = a-z

    printf("Please Enter the Character To Identify That The Character is in UPPERCASE Or in lowercase: ");
    scanf("%c", &main);

    if (main>=97 && main<=122)
    {
        printf("The Given Character is in: lowercase ");
    }
    
    else
    {
        printf("The Given Character is in: UPPERCASE");
    }
    

    return 0;
}
