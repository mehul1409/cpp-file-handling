#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    cout<<"WRITE YOUR NAME:";
    getline(cin,name);

    ofstream file1("data.txt",ios::app);
    file1 << name << endl;

    file1.close();
return 0;
}


