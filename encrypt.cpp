#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream obj("data.txt");
    while(obj >> ch)
    {
        ch+=3;
        ofstream obj2("encyption.txt",ios::app);
        obj2 << ch;
        obj2.close();
    }
    obj.close();
return 0;
}
