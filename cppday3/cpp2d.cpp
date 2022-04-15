
#include<iostream>
using namespace std;
int main()
{
    int numgrid[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    for(int i=0;i<3;i++){
        for(int j=0;i<3;j++){

            cout << " " <<numgrid[i][j];
        }
        cout <<endl;
    }

return 0;
}
