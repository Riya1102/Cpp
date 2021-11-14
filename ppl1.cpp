#include<iostream>

using namespace std;

class shape{
    int height =0, base =0;
    public:
    shape(){}
    shape(int a, int b){
        height =a , base = b;
    }
    void set_ht(int a){
        height =a;
    }
    void set_base(int a){
        base =a;
    }
    int get_ht(){
        return height;
    }
    int get_base(){
        return base;
    }
};

class square : public shape{
    int area = 0;
    public:

    int area_of(){
        return get_ht() * get_base();
    }
    square(int a){
        set_ht(a); set_base(a);
    }
};
class triangle : public shape{
    int area = 0;
    public:

    int area_of(){
        return get_ht() * get_base()*0.5;
    }
    triangle(int a, int b){
        set_ht(a); set_base(b);
    }
};

void compare(square sq, triangle tr)
{
    cout<<sq.area_of()<<" "<<tr.area_of()<<endl;
    if(sq.area_of() < tr.area_of()) cout<<"Traingle is bigger\n";
    else cout<<"Square is bigger\n";
}
int main()
{
    square sq(3);
    triangle tr(4, 5);
    compare(sq, tr);

    square sq1(1);
    triangle tr1(40, 50);
    compare(sq1, tr1);



    return 0;
}
