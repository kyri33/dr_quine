/*outside comment*/
#include <stdio.h>
char*s="/*outside comment*/%c#include <stdio.h>%cchar*s=%c%s%c;%cvoid doit(){printf(s,10,10,34,s,34,10,10);}int main(void){doit();/*inside comment*/}%c";
void doit(){printf(s,10,10,34,s,34,10,10);}int main(void){doit();/*inside comment*/}
