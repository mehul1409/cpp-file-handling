#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string word;
    ifstream file1("data.txt",ios::in);
    while(getline(file1,word))
    {
        cout<<word<<"\n";
    }
    file1.close();
return 0;
}
