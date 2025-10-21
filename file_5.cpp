// Arithmetic operations

# include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter a,b: ";
  cin>>a>>b;
  
  cout<<"Sum = "<<a+b<<endl;
  cout<<"Difference = "<<a-b<<endl;
  cout<<"Product = "<<a*b<<endl;
  cout<<"Integer Division = "<<a/b<<endl;
  cout<<"Remainder = "<<a%b<<endl;

  // If you want actual division use static_cast 
  // to convert one of operand to float
  cout<<"Division = " << static_cast<float>(a)/b << endl;

  return 0;
}

// Output

/*
Enter a,b: 7 3
Sum = 10
Difference = 4
Product = 21
Integer Division = 2
Remainder = 1
Division = 2.33333
*/