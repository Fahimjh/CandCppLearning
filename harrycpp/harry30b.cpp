#include<iostream>
#include<math.h>
using namespace std;

class point{
    friend float distb2nPoint(point,point);
    int x,y;
    public:
    point(int a, int b){
        x=a;
        y=b;
    }
    void getPoint(void){
        cout<<"Coordinates :("<<x<<","<<y<<")"<<endl;
    }
};
float distb2nPoint(point a, point b){
    return sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
}

int main(){
    point p(2,2),q(4,4);
    p.getPoint();
    q.getPoint();
    cout<<"Distance between two points is: "<<distb2nPoint(p,q)<<endl;
    return 0;
}