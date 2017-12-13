#include <iostream>
using namespace std;
int main(){
   unsigned short int n = 5556;
   cout<<"n_10 = "<<dec<<n<<endl;
   cout<<"n_16 = "<<hex<<n<<endl;
   int vid = 0xFF;		
   short int bait;
   int k, m;
   for(int i = 1; i <= 2; i++){
       bait = n & vid;
       cout<<"n = "<<n<<" bait = "<<bait<<' '<<endl;
    k = 0;   m = 1;
    while (bait){
       if ((bait & m) == 1) k++;
       bait = bait >> 1;
     }
     cout<<"  kol edinic v bait= "<<k<<endl;
     n = n >> 8;
    }
   cout<<endl;
 }

