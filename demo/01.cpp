#include <iostream>
using namespace std;
struct Stct
{
    int val;
    Stct(int x) : val(x) ,next(nullptr){}
    Stct *next;
    Stct* setNext(int x){
        if(next!=nullptr){
            next->val = x;
        }else{
            next = new Stct(x);
        }
        return next;
    }
};
class Cls{
private:
    int val;
    Cls* next;
public:
    Cls(int x){
        val=x;
    }
    Cls* setNext(int y){
        if(next){
            next->val = y;
        }else{
            next = new Cls(y);
        }
        return next;
    }
};
int main()
{
    {
        Stct head(9);
        head.setNext(9)->setNext(8)->setNext(5);
        Cls* chead = new Cls(1000);
        chead->setNext(100)->setNext(10)->setNext(0);
        cout<<head.val<<endl;
    }
    {
        cout << "Hello world" << endl;
        int a = 25;
        char b = 'a';
        int arr[] = {1, 2, 3};
        int *brr = new int[9];
        brr[8] = 6;
        brr[9] = 257;
    }

    return 0;
}