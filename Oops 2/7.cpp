#include<iostream>//this is array of Objects;
using namespace std;
 class crikator{
    public:
    string name;
    int totalRun;
    int avgRun;
 };
 int main(){
    crikator A;
    A.avgRun=50;
    A.name="Aman Patel";
    A.totalRun=50000;

    crikator B;
    B.avgRun=55;
    B.name="Arjit Singh";
    B.totalRun=44444;
    
    crikator C;
    C.avgRun=55;
    C.name="Arpit Singh";
    C.totalRun=66644;

    crikator crikators[3]={A,B,C};

    for(int i=0;i<3;i++){
        cout<<"Name : "<<crikators[i].name<<endl;
        cout<<"AvgRun : "<<crikators[i].avgRun<<endl;
        cout<<"Total Run : "<<crikators[i].totalRun<<endl;
        cout<<endl;
    }
 }
