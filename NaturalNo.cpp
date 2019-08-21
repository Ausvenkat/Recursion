#include <iostream>
using namespace std;
int natural(int n,int end);
int main() {
    int n=1,end;
    cin>>end;
    natural(n,end);
}
int natural(int n,int end){
    if(end!=0){
        cout<<n;
        n++;
        natural(n,(end-1));
    }
}   
