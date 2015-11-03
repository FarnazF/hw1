#include <iostream>
using namespace std;

int main (){
int N;
int a=0;
int b=1;
int c;
cout << "N" << endl; 
cin >> N;
for(int i=0; i<N-1; i++){
c=a+b;
a=b;
b=c;
}
cout << c << endl;
return 0;
}
