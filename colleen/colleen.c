/*outside comment*/
#include <stdio.h>
char*s="/*outside comment*/%c#include <stdio.h>%cchar*s=%c%s%c;%cint main(void){printf(s,10,10,34,s,34,10,10);/*inside comment*/}%c";
int main(void){printf(s,10,10,34,s,34,10,10);/*inside comment*/}
