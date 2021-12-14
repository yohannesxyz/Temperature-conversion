//Temperature convertor

#include <iostream>
using namespace std;

int main()
{
int from , to;
float value;

cout<<"Temperature Conversion\n\n";
cout<<"Enter no of Unit to covert from : \n 1.celcius\n 2. Farenheit\n 3. Kelvin"<<endl;
cin>>from;

cout<<endl<<"Enter no of Unit to covert to : \n 1.celcius\n 2. Farenheit\n 3. Kelvin"<<endl;
cin>>to;

cout<<"Enter The value to convert: ";
cin>>value;

/*converting given value from specified unit to Kelvin*/
switch(from) {
case 1:
value= value + 273.15; 
break;
case 2:
value= (value+459.67)*5/9;
break;
case 3: 
break;
default: 
cout<<endl<<"wrong entry try again"<<endl;
return main();
break;
}

/*converting value from Kelvin to specified unit*/
switch(to) {
case 1:
value= value-273.15; 
break;
case 2:
value= value*9/5-459.67;
break;
case 3: 
break;
default: 
cout<<endl<<"wrong entry try again"<<endl;
return main();
break;
}

cout<<"The converted Value is :"<< value;
}
