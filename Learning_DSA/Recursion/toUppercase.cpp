// converting the string to upper case
#include<iostream>
using namespace std;

void toUpperCase(string &str, int index){
    if(index<0) return ;

    toUpperCase(str,index-1);
    str[index]= str[index] +'A' - 'a';
}

int main(){
    string name = "ankush";
    toUpperCase(name,name.length()-1);
    cout<<name<<endl;
    return 0;
}