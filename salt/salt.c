#include <stdio.h>
#include <stdlib.h>

char * banner = "      /| ________________\nO|===|* >________________>\n      \\|";

int main(){
    char buf[1337]; 
    setbuf(stdout, NULL);
    puts(banner);
    printf("It's dangerous to go alone! Take this, %p\n", &puts);
    printf("Did you want a shell? (Y/n): ");
    gets(buf);
    puts("bye! :^)");
    return 0;
}
