//
//  chat.c
//  AinetsecChat
//
//  Created by AG_lab_10 on 28.05.11.
//  Copyright 2011 AG_lab_10. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main_good (int argc, const char * argv[]) {

    char string[512];
    char quitInput[] = "quit";
   
   puts("Welcome to ChatMe 0.1.2!");
    
    while (scanf("%s", &string)) {
       
        if(strcmp(quitInput, string) ==0 ){

            puts("I'll be back :D");
            break;
        }
        printf("%s\n", string);
        
    }
    
    return 0;
}

int main_evil (int argc, const char * argv[]) {
    
    FILE *outfile;
    char string[512];
    char quitInput[] = "quit";
    char *outfilename = "settings.txt";
    outfile = fopen(outfilename, "w");
    
    puts("Welcome to ChatMe 0.1.2!");
    
    while (scanf("%s", &string)) {
        
        if(strcmp(quitInput, string) ==0 ){
            
            puts("I'll be back :D");
            break;
        }
        fprintf(outfile, "%s\n",string);
        printf("%s\n", string);
        
    }
    
    return 0;
}
