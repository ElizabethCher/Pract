#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];
    cout<<"Enter your name: ";
    fgets(name, 255, stdin);
    cout << "length = " << strlen(name); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */
    cout<<"Hello, "<< name;
    return 0;
}
