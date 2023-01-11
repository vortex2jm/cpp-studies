#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    int size=0;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int * pt = new int[size];

    cout << "Enter values to fill array" << endl;

    for(int i=0; i<size; i++){
        cout << "Value " << i+1 << endl;
        cin >> pt[i];
    }

    cout << "Printing array values" << endl;
    for(int i=0; i<size; i++){
        cout << pt[i] << " ";
    }

    cout << endl;
    delete [] pt;
    return 0;
}
