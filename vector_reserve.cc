#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;
void Test3()
{
    size_t sz;
    vector<int> foo;
    sz = foo.capacity();
    cout << sz<<endl;
    for (int i = 0; i < 100; i++)
     {
         foo.push_back(i);
         cout<<foo.capacity()<<endl;
         cout<<foo.size()<<endl;
         if (sz != foo.capacity())
         {
             sz = foo.capacity();
             cout << sz << endl;                            
             sleep(1);
         }
    }
}
int main()
{
    Test3();
    return 0;
}
