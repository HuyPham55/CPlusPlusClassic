//Complex number addition
//This program focus on operator overloading, both arithmetic and IO operators
//https://www.hackerrank.com/challenges/overload-operators/


//Operator Overloading
//(a+ib)+(c+id) = (a+c) + i(b+d)  

//Sample Input
/*
3+i4
5+i6
*/

//Sample Output
//8+i10 //Given output after performing required operations (overloading + operator) is 8+i10.
#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};


Complex operator+(Complex a, Complex b) {
    Complex result;
    result.a=a.a+b.a;
    result.b=a.b+b.b;
    return result;    
};

ostream & operator<<(ostream &out, Complex complex) { 
    return out<<complex.a<<"+i"<<to_string(complex.b);
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
