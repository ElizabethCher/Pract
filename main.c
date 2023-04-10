#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "rus");
    char name[255];

    cout << "Введите ваше имя: ";
    fgets(name, 255, stdin);
    cout << "Длина = " << strlen(name) << endl;/* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    cout << "Hello " << name;
    return 0;
}
