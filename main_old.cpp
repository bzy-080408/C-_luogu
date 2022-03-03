

#include <bits/stdc++.h>
#define MAXN 6
int maxbs = 10;
using namespace std;

int _search(int *_begin,int *_end,string a){
}
void DFS(int sum,int ls){
    if(sum == 10){
        return;
    }
}

int main(){
    ifstream infile("test.in"); 
    string A,B;
    infile >> A >> B;
    string a[MAXN],b[MAXN];
    string tmp;
    int tmpi = 0;
    while(infile >> tmp){
        a[tmpi] += tmp;
        infile >> b[tmpi];
        tmpi++;
    }
    return 0;
}