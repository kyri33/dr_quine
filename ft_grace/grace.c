#define fun main
#define Zir z
#define Upo u
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
char *s="#define fun main%c#define Zir z%c#define Upo u%c#include <unistd.h>%c#include <fcntl.h>%c#include <stdio.h>%cchar *s=%c%s%c;%cint fun(){int fd = open(%cGrace_kid.c%c, O_CREAT|O_RDWR, 0666)/*comment*/;%cdprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10);}%c";
int fun(){int fd = open("Grace_kid.c", O_CREAT|O_RDWR, 0666)/*comment*/;
dprintf(fd,s,10,10,10,10,10,10,34,s,34,10,34,34,10,10);}
