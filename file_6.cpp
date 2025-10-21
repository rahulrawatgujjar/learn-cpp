// if else

#include<iostream>
using namespace std;
int main()
{
  int age,income;
  cout<<"Enter age, income: ";
  cin>>age>>income;

  if (income > 50000){
    cout<<"Buy computer"<<endl;
  }
  else if (income<30000 && age<30){
    cout<<"Buy computer with external help"<<endl;
  }
  else if (income>35000 || age>30){
    cout<<"Buy computer  also"<<endl;
  }
  else{
    cout<<"Don't Buy computer"<<endl;
  }
  
  return 0;
}

/*
Output:

Enter age, income: 23 70000
Buy computer

Enter age, income: 23 25000
Buy computer with external help

Enter age, income: 35 40000
Buy computer  also

Enter age, income: 25 33000
Don't Buy computer

*/