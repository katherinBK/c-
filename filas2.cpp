#include <iostream>
using namespace std;

int main(){
    {int mat[7][7];
    srand(time(NULL));
    for(int f=0;f<7;f++){
        for(int c=0;c<7;c++){
            mat[f][c]=1 + (rand() % 9);
            std::cout << mat[f][c]<<"";
        }
        cout<<endl;
    }
    return 0;
    }
    {int mat[3][3];
    srand(time(NULL));
    for(int c2=0;c2<3;c2++){
        for(int f2=0;f2<3;f2++){
            mat[f2][c2] = 1 + (rand() % 9);
        }
    }
    }
}