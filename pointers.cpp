#include <iostream>
#include <cstring>
using namespace std;
#define log(x) cout<<x<<endl

int main()
{
    int a=8;
    int* ptr = &a;
    *ptr=10;
    log(a);

    char* buffer = new char[8]; //allocates 8 bytes of memory for char
    memset(buffer,0,8); //takes pointer as input and allocates some memory

    char** pt = &buffer; //double pointer -> pointer that is pointing to pointer buffer
    
    delete[] buffer; //deletes the memory allocated by memeset() 

    return 0;
}