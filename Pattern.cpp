#include<iostream>
using namespace std;
void pattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j=1; j<=i ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for ( int j=1; j<=n-i ; j++) {
            cout<<" ";
        }
        for (int k=1; k<=i ; k++) {
            cout<<k;
        }
        cout<<endl;
    }
}
void pattern3(int n) {

}
void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for ( int j=1; j<=n-i ; j++) {
            cout<<" ";
        }
        for (int k=1; k<=i ; k++) {
            cout<<" "<<k;
        }
        cout<<endl;
    }
    for (int i=n-1; i>0 ; i--) {
        for (int j=1; j<=n-i ; j++) {
            cout<<" ";
        }
        for (int k=1; k<=i ; k++) {
            cout<<" "<<k;
        }
        cout<<endl;
    }
}

int main() {
    int n = 7;
    pattern4(n);
}