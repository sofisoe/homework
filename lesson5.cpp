#include <iostream>
using namespace std;
int main ()
{
    int i, y;
    enum location {
        o, b, f
    };
    location loc;
    for (i=0; i<3; i++)
    {
        for(y=0; y<3; y++){
            if (i+y==2) {
                loc = b;
            }
            else if (i+y<2) {
                loc = o;
            }
            else {
                loc=f;
            }
            
           switch (loc) {
            case b:
            cout<<'b'<<' ';
            break;
           case o:
           cout<<'o'<<' ';
           break;
           case f:
           cout<<'f'<<' ';
           };
        }
        cout<<endl;

}
return 0;
}