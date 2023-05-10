#include<iostream>
#include<fstream>
using namespace std ; 
int main(){
    char ch ;
    ifstream myfile("encyption.txt", ios::in);
    while (myfile >> ch){
        ch = ch-3 ;
        ofstream file("decrypt.txt", ios::app) ;
        file<<ch;
        file.close();
    }
    myfile.close() ; 
    return 0 ;
}
