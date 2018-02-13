#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// r <<< $(python -c "print 'R'+'A'*126+'D'+'C'*40+'\xf6\x05\x40'+'\x00'*5")

// gcc -masm=intel -fPIE -o pivotal pivotal.c --no-stack-protector
void debug(){
 asm("sub rdi, 5");   
 asm("sub rdi, 4");   
 asm("sub rdi, 3");   
 asm("sub rsp, 0xa8");   
 asm("ret");   
 asm("sub rdi, 2");   
 asm("sub rdi, 1");   
}

int main(int argc, char ** argv) {
    setbuf(stdout, NULL);
    char buf[20];
    char dato[128];
    printf("random number: %p\n", &printf);
    printf("What did you do today?\n> ");
    read(0, &dato, sizeof(dato));
    printf("And what is your name?\n> ");
    read(0, buf, sizeof(buf)+32);
    printf("%s", buf);
    return 0;
}
