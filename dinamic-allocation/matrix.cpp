#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Allocating
    int ** pt = new int*[5];
    for(int i=0; i<5; i++){
        pt[i] = new int[5];
    }

    // Filling 
    int value = 1;
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            pt[l][c] = value;
            value++;
        }
    }    

    // Printing
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            cout << pt[l][c] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Deallocating 
    for(int i=0; i<5; i++){
        delete [] pt[i]; 
    }
    delete [] pt;   // The operator [] is used when you alloc an array
    return 0;
}
