#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
int sum=a;

if(a>b && a>c &&a>d){
sum=a;
}

else if(b>a && b>c && b>d){
sum=b;
}

else if(c>a && c>b && c>d){
sum=c;
}

else{
sum=d;
}

return sum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
