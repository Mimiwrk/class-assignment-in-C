#include <stdio.h>

int main(){
    int version = 1;
    //print to standard output (formatted string)
    printf("version%02d%s\n", version, ".txt");

    char versionString[15];
    //print to standard file (formatted string)
    sprintf(versionString, "%s%02d%s", "version", version, ".txt");

    return 0;
}