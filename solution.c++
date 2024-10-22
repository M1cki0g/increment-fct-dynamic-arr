#include <iostream>

using namespace std;

int* increment(int* x){
cout<<"adrss: "<<x<<endl;
cout<<"val: "<<*x<<endl;
*x += 100;
int** j = &x;
cout<<"val: "<<**j<<endl;

return x;
}


int main()
{
    int* f= new int;
    *f = 100;
    int* j = increment(f);
    *j += 300;
    cout<<"res= "<<*j<<endl;

    return 0;
}
