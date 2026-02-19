#include <iostream>
using namespace std;


int main() {
    char a;
   cin>>a;
    if('a'<=a&&a<='z')
     cout<<"small"<<endl;
  else if('A'<=a&&a<='Z')
        cout<<"capital"<<endl;
    else if('0'<=a&&a<='9')
        cout<<"digit"<<endl;
    else{
        cout<<"symbol"<<endl;
    }




    return 0;
}
