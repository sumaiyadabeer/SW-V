#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;


int is_present(string alp, char c){
int flag=0;
cout<<"string recived izs "<<alp<<endl;
cout<<"char is "<<c <<endl;
for(int i=0;i<5 ;i++)
{
	if(alp[i]==c)
	flag=1;
}	
	
	return flag;
}

int main()
{
	int n;

string dic[5];
char alp[20];



n=5;

for(int i=0;i<10;i++)
	{
		alp[i]='\0';
	}
for(int i=0;i<n;i++)
	{
		cin>>dic[i];
		
	} 
for(int i=0;i<n;i++)
	{
		cout<<dic[i]<<endl;
		
	} 
	
	
for(int i=0;i<n;i++)
{
		
	for(int j=0;j<5;j++)
	{
		
		if(!is_present(alp,dic[i][j]))
		{
			for(int k=0;k<10;k++)
			{
				if(alp[k]=='\0'){
				alp[k]=dic[i][j];
				break;	
				}
				
			}
		}

	}
	

}	
	

cout<<"check "<< alp; //all alphabet collected
//just arrange them___________......
	// ;( but_how???
	
	
	
	
	
	getch();
	return 0;

}
