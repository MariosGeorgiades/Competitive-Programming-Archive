#include<iostream>
#include<iomanip>

using namespace std;


int main() {
    int t;

    cin >> t;

    for(int i=0; i<t; i++){
        cout<<"Enter the number : ";
        int a;
        cin >> a;
        int e = a;
        int z=0;

        while(a != 0){
            int k = a%10;
            z = z*10+k;
            a /= 10;
        }

        if(z==e) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}