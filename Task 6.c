#include <stdio.h>
#include <string.h>
int main()
{
    char name[30], roll[20];
    char username[60];
    printf("Enter first name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter roll number: ");
    fgets(roll, sizeof(roll), stdin);
    name[strcspn(name, "\n")] = '\0';
    roll[strcspn(roll, "\n")] = '\0';
    strcpy(username, name);
    strcat(username, "_");
    strcat(username, roll);
    printf("Username: %s\n", username);
    printf("Length: %d\n", (int)strlen(username));
    return 0;
}
