////POLYMORPHISM
//#include<iostream>
//using namespace std;
//class Base{
//    public:
//        void show(){
//            cout<<"Base\n";
//        }
//};
//class Derv1:public Base{
//    public:
//        void show(){
//            cout<<"Derv1\n";
//        }
//};
//class Derv2:public Base{
//    public:
//        void show(){
//            cout<<"Derv2\n";
//        }
//};
//int main(){
//    Derv1 dv1;
//    Derv2 dv2;
//    Base  *ptr;
//    ptr=&dv1;
//    ptr->show();
//    ptr=&dv2;
//    ptr->show();
//    return 0;
//}
//================================================================

//#include<iostream>
//using namespace std;
//class shape{
//    public:
//        double a;
//        virtual void area(){
//            a=0;
//        }
//};
//class circle:public shape{
//    double r;
//    public:
//        circle(double x){
//            r=x;
//        }
//        void area(){
//            a=3.14*r*r;
//            cout<<"area of circle"<<a<<endl;
//        }
//};
//class triangle:public shape{
//    double base, height;
//    public:
//        triangle(double b,double h){
//            base=b, height=h;
//        }
//        void area(){
//            a=0.5*base*height;
//            cout<<"area of triangle"<<a<<endl;
//        }
//};
//class rectangle:public shape{
//    double length,width;
//    public:
//        rectangle(double l,double w){
//            length=l; width=w;
//        }
//        void area(){
//            a=length*width;
//            cout<<"area of rectangle"<<a<<endl;
//        }
//};
//int main(){
//    shape *p;
//    p=new circle(2.5);
//    p->area();
//    p=new triangle(1.5,3.6);
//    p->area();
//    p=new rectangle(3.0,4.0);
//    p->area();
//    return 0;
//}
//===========================================================================
//#include<iostream>
//using namespace std;
//class Shape{
//    public:
//        virtual float cal_Area()=0;
//};
//class Square: public Shape{
//    float a;
//    public:
//        Square(float l)
//        {
//            a=1;
//        }
//        float cal_Area()
//        {
//            return a * a;
//        }
//};
//class Circle: public Shape{
//    float r;
//    public:
//        Circle(float x)
//        {
//            r=x;
//        }
//        float cal_Area()
//        {
//            return 3.14*r*r;
//        }
//};
//int main(){
//    Shape*shape;
//    Square s(3.4);
//    Circle c(7.8);
//    shape=&s;
//    int a1=shape->cal_Area();
//    shape=&c;
//    int a3=shape->cal_Area();
//    cout<<"The area of square is: "<<a1<<endl;
//    cout<<"The area of circle is: "<<a3<<endl;
//    return 0;
//}
//================================================================================
//#include<iostream>
//using namespace std;
//class birthday{
//    int date,month,year;
//public:
//    birthday(int d,int m,int y){
//        date=d;
//        month=m;
//        year=y;
//        cout<<"birthday constructor"<<endl;
//    }
//    ~birthday(){
//        cout<<"birthday destructor"<<endl;
//    }
//    void display()
//    {
//        cout<<date<<"/"<<month<<"/"<<year<<endl;
//    }
//};
//class person{
//    string name;
//    birthday b;
//public:
//    person(string n,int d,int m,int y):
//    b(d,m,y){
//        name=n;
//        cout<<"person contructor"<<endl;
//    }
//    void show()
//    {
//        b.display();
//        cout<<name;
//        
//    }
//    ~person(){
//        cout<<"person destructor"<<endl;
//    }
//};
//int main ()
//{
//    person ob("abc",12,10,2023);
//    ob.show();
//    return 0;
//}
///==================================================================================================
//#include <iostream>
// using namespace std;
// void heapify(int arr[], int n, int i)
//{
// int largest = i;
//    int l = 2 * i + 1;
//    int r = 2 * i + 2;
//    if (l < n && arr[l] > arr[largest])
//        largest = l;
//    if (r < n && arr[r] > arr[largest])
//        largest = r;
//    if (largest != i) {
//
//        swap(arr[i], arr[largest]);
// 
//        heapify(arr, n, largest);
//    }
//}
// void deleteRoot(int arr[], int& n)
//{
//    int lastElement = arr[n - 1];
//    arr[0] = lastElement;
//    n = n - 1;
//    heapify(arr, n, 0);
//}
// 
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; ++i)
//        cout << arr[i] << " ";
//    cout << "\n";
//}
// int main()
//{
//    int arr[] = { 10, 5, 3, 2, 4 };
//   int n = sizeof(arr) / sizeof(arr[0]);
//   deleteRoot(arr, n);
//   printArray(arr, n);
//  return 0;
//}
//========================================================================================
