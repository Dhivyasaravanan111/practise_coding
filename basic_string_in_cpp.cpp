#include <iostream>
#include <string>
using namespace std;

int main() {
   string str1,str2,str3;
    char b,a;
    int strlen1,strlen2;
    cin>>str1>>str2;
    strlen1 = str1.size();
    strlen2 = str2.size();
    cout<<strlen1;
    cout<<" "<<strlen2;
    str3 = str1+str2;
    cout<<endl<<str3;
    

    a = str2[0];
    b = str1[0];        
    str1[0] = a;
    str2[0] = b;
    cout<<"\n";
    cout<<str1;
    cout<<" "<<str2;
  
    return 0;
}
