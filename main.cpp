#include "clase_caini.h"

using namespace std;

int main()
{
    int verf;
    cout << "If the dog has spots then press 1.\nOtherwise press 2.\n";
    cin >> verf;
    if(verf == 1){
        Caine *pObj;
        CaineCuPete obj;
        pObj = &obj;
        pObj->get_details();
        obj.spots();
        pObj->display();
    }
    else{
        Caine *pObj;
        CaineFaraPete obj_2;
        pObj = &obj_2;
        pObj->get_details();
        pObj->display();
    }
}
