#include <iostream>
using namespace std;

int main(){
    int mat[4][4];
    srand(time(NULL));
    for(int f=0;f<4;f++){
        for(int c=0;c<4;c++){
            mat[f][c]=1 + (rand() % 9);
            std::cout << mat[f][c]<<"";
        }
        cout<<endl;
    }
    return 0;
    }