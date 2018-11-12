#include<iostream>
using namespace std;
int a,b;
int main(){
cout<<"Selectati primul nr -->";cin>>a;
cout<<"Selectati al doilea nr -->";cin>>b;
if( a==b ){
    cout<<"Cmmdc este -->"<<endl;cin>>a;
}
else{
    while(a!=b){
            if(a>b){a=a-b;}
            else{b=b-a;}

    }
    cout<<"CMMDC este --> "<<a;
}
return 0;
}
