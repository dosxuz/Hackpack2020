 #include <stdio.h>\n'
#include <stdlib.h>\n'
#include <string.h>\n'
#include <unistd.h>\n'
\n'
void cheeeeeeeese() {\n'
\tsystem("/bin/sh");\n'
}\n'
\n'
void init() {\n'
\tsetvbuf(stdin, NULL, _IONBF, 0);\n'
\tsetvbuf(stdout, NULL, _IONBF, 0);\n'
\tsetvbuf(stderr, NULL, _IONBF, 0);\n'
}\n'
\n'
void set_mouse_name(char* name)\n'
{\n'
\tprintf("Name: ");\n'
\tread(0,name,32);\n'
\treturn;\n'
}\n'
\n'
void grab_cheese(char* sequence) {\n'
\tchar decode[16];\n'
\tstrcpy(decode,sequence);\n'
\treturn;\n'
}\n'
\n'
void deactivate_trap(char* buffer, long size) \n'
{\n'
\tprintf("Enter Code Sequence of %ld: ",size);\n'
\tread(0,buffer,size);\n'
\treturn;\n'
}\n'
\n'
void menu(void) {\n'
\tprintf("Welcome little mouse\\n");\n'
\tprintf("can you steal the cheese from the mouse trap\\n");\n'
\treturn;\n'
}\n'
\n'
int main(int argc,char** argv)\n'
{\n'
\tlong decode_size = 10;\n'
\tchar mouse_name[16];\n'
\tchar decode_sequence[256];\n'
\tinit();\n'
\tmenu();\n'
\tset_mouse_name(mouse_name); //this will lead the person to have control over the size variable\n'
    b'\tdeactivate_trap(decode_sequence,decode_size);\n'
    b'\tgrab_cheese(decode_sequence);\n'
    b'\tprintf("SNAAAAAAAP! you died!");\n'
    b'\treturn 0;\n'
    b'}\n'
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void cheeeeeeeese() {
    system("/bin/sh");
}

void init() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

void set_mouse_name(char* name)
{
    printf("Name: ");
    read(0,name,32);
    return;
}

void grab_cheese(char* sequence) {
    char decode[16];
    strcpy(decode,sequence);
    return;
}

void deactivate_trap(char* buffer, long size) 
{
    printf("Enter Code Sequence of %ld: ",size);
    read(0,buffer,size);
    return;
}

void menu(void) {
    printf("Welcome little mouse\n");
    printf("can you steal the cheese from the mouse trap\n");
    return;
}

int main(int argc,char** argv)
{
    long decode_size = 10;
    char mouse_name[16];
    char decode_sequence[256];
    init();
    menu();
    set_mouse_name(mouse_name); //this will lead the person to have control over the size variable
    deactivate_trap(decode_sequence,decode_size);
    grab_cheese(decode_sequence);
    printf("SNAAAAAAAP! you died!");
    return 0;
}

