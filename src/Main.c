#include "/home/codeleaded/System/Static/Library/CStrCmp.h"

int main(int argc,char **argv){
    CStrCmp cc = CStrCmp_New("Hello World","Hello Welt");
    CStrCmp_Build(&cc);
    CStrCmp_Print(&cc);
    CStrCmp_Free(&cc);
    return 0;
}