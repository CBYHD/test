#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000]= {};
    for(int i = 0;i<1000;i++){
        a[i] = '0';
    }
    cin >> a;
    int len = strlen(a);
    if(a[0] == '-'){
        cout << '-';
    }
    else{
        while(a[len-1] == '0' && len > 0){
            len--;
        }

        for(int i = len-1;i>=0;i--){
            cout << a[i];
        }
    }
    return 0;
}