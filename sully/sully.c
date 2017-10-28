#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#define NAME "Sully_%i.c"
#define RUN "./Sully_%i"
#define COMPILE "gcc Sully_%i.c -o Sully_%i"
#define FLAGS O_CREAT|O_RDWR
#define SOURCE "#include <unistd.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <stdio.h>%c#define NAME %cSully_%ci.c%c%c#define RUN %c./Sully_%ci%c%c#define COMPILE %cgcc Sully_%ci.c -o Sully_%ci%c%c#define FLAGS O_CREAT|O_RDWR%c#define SOURCE %c%s%c%cint main() { int i=%i;%cif(i<=0){return(1);}char *name;asprintf(&name,NAME,i);%cint fd=open(name,FLAGS,0777);%cdprintf(fd,SOURCE,10,10,10,10,34,37,34,10,34,37,34,10,34,37,37,34,10,10,34,SOURCE,34,10,(i-1),10,10,10,10,10);%cchar *compile;asprintf(&compile,COMPILE,i,i);system(compile);%cchar *run;asprintf(&run,RUN,i);system(run);return(1);}"
int main() { int i=5;
	if(i<=0){return(1);}char *name;asprintf(&name,NAME,i);
	int fd=open(name,FLAGS,0777);
	dprintf(fd,SOURCE,10,10,10,10,34,37,34,10,34,37,34,10,34,37,37,34,10,10,34,SOURCE,34,10,(i-1),10,10,10,10,10);//i-1
	char *compile;asprintf(&compile,COMPILE,i,i);system(compile);
	char *run;asprintf(&run,RUN,i);system(run);return(1);}
