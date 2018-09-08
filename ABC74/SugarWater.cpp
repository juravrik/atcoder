#include <bits/stdc++.h>
using namespace std;

double rati(double a, double b){
    if(a==0 && b==0){
        return 0;
    }else{
        return (100.0*b)/(a+b);
    }
}

int main(){
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<double> x, y;

    for(int i=0;i<f; i++){
        for(int j=0; j<f; j++){
            double t=i*c+j*d;
            if(t<=f){
                y.push_back(t);
            }
        }
    }

    for(int i=0;i<f; i++){
        for(int j=0; j<f; j++){
            double t=i*a*100+j*b*100;
            if(t<=f){
                x.push_back(t);
            }
        }
    }

    double max_w=x[0];
    double max_s=y[0];

    for(int i=0; i<x.size(); i++){
        for(int j=0; j<y.size(); j++){
            double t=x[i]+y[j];

            if(t<=f && (x[i]*e/100 >= y[j])){
                if(rati(x[i], y[j]) >= rati(max_w, max_s)){
                    max_s=y[j];
                    max_w=x[i];
                }
            }
        }
    }

    cout << max_s+max_w << ' ' << max_s << endl;




    return 0;
}
