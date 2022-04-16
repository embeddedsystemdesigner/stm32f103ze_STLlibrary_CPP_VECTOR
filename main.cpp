#include "stm32f10x.h"
#include <string.h>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm> 

// telegram id --->    @eneeir
// github --->  https://github.com/embeddedsystemdesigner
// website  ---> www.enee.ir



using namespace std;

void delay_us(unsigned int time);
void delay_ms(unsigned int time);

struct student
{
	
string name;
string family;
int age;
string eyes_color;
int Height;
int weight;	
	
	void print_information(void)
	{
		
		cout<<"name is: "<<name<<endl;
		cout<<"family is: "<<family<<endl;
		cout<<"age is: "<<age<<endl;
		cout<<"eyes_color is: "<<eyes_color<<endl;
		cout<<"Height is: "<<Height<<endl;
		cout<<"weight is: "<<weight<<endl;
		
		
	}
	
	
};

int main (void)
{

vector<int> number;
vector<student> mystudent(5);	
int buffer=0;
struct student stu;

/********************************************************/
cout<<"please enter 10 number"<<endl;
	
for(int count=1; count<11; count++)
	{
		cout<<"enter number "<<count<<":";
    cin>>buffer; 
	  number.push_back(buffer);	
		
	}	

cout<<"*****************************"<<endl;
cout<<"the numbers you entered are"<<endl;
	
for(int count=0; count<10; count++)
	{
  	cout<<number[count]<<endl;
	}	
/********************************************************/
	
cout<<"student information is"<<endl;	
stu.age = 30;
stu.eyes_color = "brown";	
stu.family = "vahdati";
stu.name = "bill";
stu.Height = 176;	
stu.weight = 65;

mystudent.push_back(stu);	
	
//stu.print_information();	
mystudent[0].print_information();	
cout<<"*****************************"<<endl;

mystudent[0].age = 100;
mystudent[0].name = "danial";	
mystudent[0].print_information();	
	
	
cout<<"*****************************"<<endl;	
mystudent[1].age = 30;
mystudent[1].eyes_color = "green";	
mystudent[1].family = "coper";
mystudent[1].name = "viliam";
mystudent[1].Height = 145;	
mystudent[1].weight = 60;

mystudent[1].print_information();
	
while(1)
	{
		
	
	}


	
}



void delay_us(unsigned int time)
{
	
	while(time--)	
		{
			
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
    __NOP();__NOP();	

		}
	
}




void delay_ms(unsigned int time)
{
	
	while(time--)	
		{
			
    delay_us(1000);
			
		}

}



