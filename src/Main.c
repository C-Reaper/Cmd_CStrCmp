#include "/home/codeleaded/System/Static/Library/CStrCmp.h"

int main(int argc,char **argv){
    CStrCmp cc0 = CStrCmp_Load("./data/Test0.txt","./data/Test1.txt");
    CStrCmp_Difference(&cc0);
    CStrCmp_Print(&cc0);
    CStrCmp_DiffMap_WriteF(&cc0.ccdm,"./data/Diff0");

    CStrCmp cc1 = CStrCmp_Load("./data/Test0.txt","./data/Test2.txt");
    CStrCmp_Difference(&cc1);
    CStrCmp_Print(&cc1);
    CStrCmp_DiffMap_WriteF(&cc1.ccdm,"./data/Diff1");
    
    CStrCmp_DiffMap mg = CStrCmp_DiffMap_Merge(&cc0.ccdm,&cc1.ccdm);
    CStrCmp_DiffMap_Add(&mg,&cc0.src);
    CStrCmp_DiffMap_Free(&mg);

    Vec_CStr_Print(&cc0.src);

    CStrCmp_Free(&cc1);
    CStrCmp_Free(&cc0);



    CStrCmp cc02 = CStrCmp_Load("./data/Test0.txt","./data/Test1.txt");
    CStrCmp_Difference(&cc02);
    CStrCmp_Print(&cc02);
    CStrCmp_DiffMap_WriteF(&cc02.ccdm,"./data/Diff02");

    CStrCmp cc12 = CStrCmp_Load("./data/Test1.txt","./data/Test2.txt");
    CStrCmp_Difference(&cc12);
    CStrCmp_Print(&cc12);
    CStrCmp_DiffMap_WriteF(&cc12.ccdm,"./data/Diff12");
    
    CStrCmp_DiffMap_Acc(&cc02,&cc12);
    CStrCmp_DiffMap_Print(&cc02);

    CStrCmp_Free(&cc12);
    CStrCmp_Free(&cc02);

    //CStrCmp_DiffMap_Add(&cc.ccdm,&cc.src);
    //Vec_CStr_Print(&cc.src);

    //CStrCmp_DiffMap ccdm = CStrCmp_DiffMap_ReadF("./data/Diff");
    //CStrCmp_DiffMap_Add(&ccdm,&cc.src);
    //Vec_CStr_Print(&cc.src);
    //CStrCmp_DiffMap_Free(&ccdm);
    return 0;
}