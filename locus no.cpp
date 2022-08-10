#include<iostream>
using namespace std;

int locus(int a) {
    int q=2,w=1;
    int i=0;
    while(i<a-2) {
        cout<<q<<" "<<w<<" ";
        q=q+w;
        w=w+q;
        i++;
    }
}

int main() {
    int t;
    while(t--) {
        int a;
        cin>>a;
        locus(a);
    }
}