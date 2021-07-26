#include <iostream>

using namespace std;
int wtf;
int main()
{
   for(int i=0; i<256;i++){
    cout <<i<<"/: "<<char(i)<<" :/" << endl;
        if ((i+1)%10==0) cout << endl;
    }
    cin >> wtf;
    return 0;
}
