#include <iostream>
using namespace std;


void Sawp(double& x, double& y){
    double help;
    
    help = x;
    x = y;
    y = help;
    
    return;
}

int main(){
  //  char mystring[20] = "my test string";
//char mystring2[20] = mystring;

//char myString[20] = "my test string";
//if (myString == "my test string")
//{
//   cout<<"The same"<<endl;
//}

//char myString[20] = "my test string";
//int i = 0, spaceCount = 0;
//while (i < 20)
//{
//   if (myString[i] == ' ')
//   {
//        spaceCount++;
//   }
//}

//char myString[2] = "my test string";
//int i = 0;
//while (myString != '\0')
//{
//   cout<<myString[i];
//   i++;
//}

/*char myString[20] = "my test string";
myString[14] = '!';
cout<<myString<<endl;
*/

int alpha = 5;
int beta = 20;

int * alphaPtr = &alpha;
int * betaPtr = &beta;

cout<<*alphaPtr<<endl;
cout<<*betaPtr<<endl;

*alphaPtr += 5;
betaPtr = alphaPtr;

cout<<*alphaPtr<<endl;
cout<<*betaPtr<<endl;



}