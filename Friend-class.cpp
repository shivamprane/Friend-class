#include<iostream>
using namespace std;


class box{
private:
    int length=10;
    int breadth=12;
    int height=13;
    friend class rectangle;
public:
    int area()
    {
        return length*breadth*height;
    
    }
    
};

class rectangle{
    private:
    
    public:
    
    int arearec()
    {
        box box1;
        return box1.length*box1.breadth;
    }
    
};
int main(){
    box box1;
    rectangle rectangle1;

    cout << rectangle1.arearec() << endl;
    return 0;
}

 
