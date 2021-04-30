#include<iostream>
using namespace std;

void my_function(int a, int b) {
   int sum=a+b;
   cout << "sum: " << sum << endl;
}
void reference(int &a, int &b)
{
    int sum=a+b;
   cout << "sum: " << sum << endl; 
}

 int main() {
   int x = 10, y=20;
   my_function(x , y);
   reference(x ,y);
}