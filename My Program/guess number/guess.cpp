#include<bits/stdc++.h>
using namespace std;


int main() {
    srand(time(NULL));
    int A=rand()%100+1;
    while(1) {
        int a;
        cin>>a;
        if(a<A) printf("Too low!\n");
        else if (a>A) printf("Too high!\n");
        else {
            printf("Right!\n");
            break;
        }
    }
    return 0;
}