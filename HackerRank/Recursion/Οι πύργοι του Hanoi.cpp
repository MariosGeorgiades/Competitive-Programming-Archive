#include <iostream>
using namespace std;

void hanoi(int disk, char start, char finish, char temp){
    if (disk == 0) {
        return;
     }
    hanoi(disk - 1, start, temp, finish);
    cout << "disk"<<" "<< disk << ':' << " "<<start<< " to " << finish << endl;
    hanoi(disk - 1, temp, finish ,start);
}

int main(){
    int N ;
    cin>>N;
    hanoi(N, 'A', 'C', 'B');
    return 0;

return 0;
}
