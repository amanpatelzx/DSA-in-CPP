#include<iostream>//electrical indcution measoring
#include<vector>
using namespace std;
    float x;
    

int main(){
    cout<<"Enter the no. of experiment\n";
    cin>>x;
    
    cout<<"Enter the no. of Element of frequency \n";
    vector<float>f;
    for(float i=0;i<x;i++){
        float y;
        cin>>y;
        f.push_back(y);
    
    }
    cout<<"Enter the no. of Element in current \n";
    vector<float>c;
    for(float i=0;i<x;i++){
        float y;
        cin>>y;
        c.push_back(y);
    
    }
    cout<<"The current are ";
    for(float i=0;i<x;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<"The frequency are ";
    for(float i=0;i<x;i++){
        cout<<f[i]<<" ";
    }
    cout<<endl;
    float v;
    cout<<"Enter the voltage\n";
    cin>>v;
    vector<float>l(x);
    for(float i=0;i<x;i++){
        l[i]=v/((2*3.14*f[i])*c[i]);
    }
    cout<<"The inductance are ";
    for(float i=0;i<x;i++){
        cout<<l[i]<<" ";
    }
    cout<<endl;
    
     
    float s=0;
    for(float i=0;i<x;i++){
       s=s+l[i];
    }
    cout<<"The average of indcutance "<<s/x;

   


}




