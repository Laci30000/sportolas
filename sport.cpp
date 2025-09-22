#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

int U = 0; 
int G = 0;
int F = 0;
int K = 0;

void elso(){
    cout<< " irja be a hetet" << endl;
    string szoveg;
    cin >> szoveg;
    int mennyiseg = 0;
    for (size_t i = 0; i < szoveg.size(); i++)
    {
        if(szoveg[i] == 'U'){
            mennyiseg++;
            U++;
        }
        else if(szoveg[i] == "G"){
            mennyiseg++;
            G++;
        }
        else if(szoveg[i] == "F"){
            mennyiseg += 2;
            F++;
        }
        else if(szoveg[i] == "K"){
            mennyiseg += 10;
            K++;
        }
    }

    if(U && G && F && K){
        cout << "gratulalok szep munka a jutalmad + 10km"   << endl;
        mennyiseg += 10;
    }else{
        cout << "sajnos lusta voltal hapsikam"   << endl;
        
    }
    

    if(mennyiseg >= 50){
        cout << "szep munka" << endl;
}else{
    cout << "tobbet kellene mozognod ocsem" << endl;
}

}

int main(int argc, char const *argv[])
{
    /* code */
    elso(); 
    return 0;
}
