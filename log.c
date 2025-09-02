#include <stdio.h>
#include <stdlib.h>
///usr/bin/i686-w64-mingw32-gcc log.c -o log.exe 
#define true 1
#define false 0 
int main(){
    int b=true;
    char buffer[4096];
    FILE* f1;
    printf("\033c\033[43;30m\nprocessing....\n");
    f1=fopen("log.txt","w");
    
    while(b){
        fgets(buffer,4095,stdin);
        fputs(buffer,f1);
        if(feof(stdin))break;
        
    }
    fclose(f1); 
    return 0;
}