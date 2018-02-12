#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char * not_used = "/bin/bash";

int not_called() {
    return system("/bin/date");
}

void vulnerable_function() {
    char buf[128];
    read(0, buf, 256);
}

int main(){
    setbuf(stdout, NULL);
    printf("welcome traveller.. how can i help you?\n> ");
    vulnerable_function();
}
