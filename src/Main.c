#include "/home/codeleaded/System/Static/Library/CStrCmp.h"

int main(int argc,char **argv){
    CStrCmp cc = CStrCmp_Load("./data/Test0.txt","./data/Test1.txt");
    CStrCmp_Difference(&cc);
    //CStrCmp_Build(&cc);
    CStrCmp_Print(&cc);
    CStrCmp_Free(&cc);
    return 0;
}