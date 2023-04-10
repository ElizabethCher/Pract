#include <stdio.h>
#include <string.h>

int main()
{
    char name[255];
    printf("Enter your name: ");
    cout<<"Enter your name: ";
    printf("Enterrrr your name: ");
    fgets(name, 255, stdin);
    cout << "length = " << strlen(name); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */
    printf("Hello %s!\n", name);
    return 1;
    cout<<"Hello, "<< name;
    return 0;
}
