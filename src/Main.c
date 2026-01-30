#include "/home/codeleaded/System/Static/Library/CStrCmp.h"

int main(int argc,char **argv){
    CStrCmp cc = CStrCmp_Load("./data/Test0.txt","./data/Test1.txt");
    
    CStrCmp_Difference(&cc);
    CStrCmp_Print(&cc);
    CStrCmp_DiffMap_WriteF(&cc.ccdm,"./data/Diff");
    
    //CStrCmp_DiffMap_Add(&cc.ccdm,&cc.src);
    //Vec_CStr_Print(&cc.src);

    //CStrCmp_DiffMap ccdm = CStrCmp_DiffMap_ReadF("./data/Diff");
    //CStrCmp_DiffMap_Add(&ccdm,&cc.src);
    //Vec_CStr_Print(&cc.src);
    //CStrCmp_DiffMap_Free(&ccdm);

    CStrCmp_Free(&cc);
    return 0;
}