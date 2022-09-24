#include <iostream>
using namespace std;
 int main() 
{
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    int t3;
	
  cout <<"enter the numbers for the calculation and write the start ";
	cin >> v1;
	cin >> v2;
	cin >> v3;
	cin >> t1;
	cin >> t2;
	cin >> t3;
    
    v3=v1+v2;
    t3=(t1+t2)/2;
    
    cout<<"the volume is"<<v1<<endl;
    cout<<"the temperature is="<<t1<<endl;
    system("pause");
	return 0;
}
