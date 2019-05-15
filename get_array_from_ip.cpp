#include<iostream>
#include<conio.h>

using namespace std;

int get_bit(char c,int val){
	if(c=='a'){
		val=val | 8;	
cout<<"a occr "<<val<<endl;
	} else if(c=='A'){
			val=val & (15-8);
			cout<<"A occr "<<val<<endl;
	
	} else if(c=='b'){
		
	val=val | 4;
	cout<<"b occr "<<val<<endl;	
	}	else if(c=='B'){
	
	val=val & (15-4);
	cout<<"B occr "<<val<<endl;	
	}	else if(c=='c'){
		
	
	val=val | 2;
	cout<<"c occr "<<val<<endl;	
	}else if(c=='C'){
	
	val=val & (15-2);
		cout<<"C occr "<<val<<endl;
	}else if(c=='d'){
		
	
	val=val | 1;
		cout<<"d occr "<<val<<endl;
	}else if(c=='D'){
	
	val=val & (15-1);	
		cout<<"D occr "<<val<<endl;
	}else
val=val&15;
	return val ;
	
	
}

int getmat(char tststr[5])	
{
	int i=0;
	char c;
	int val=0;
		c=tststr[i];	
	while(tststr[i]!='\0')
	{
	c=tststr[i];	
    val=get_bit(c,val);
	i++;	
	}
	return val;
	
}

void setmat(int arr[5][5],int value){
	
arr[value/4][value%4]=1;	
	
}	

int main()
{
	int n;
		char ipt[100];
	cout<<"-->> FOR TERMINATION PRESS  ;"<<endl<< "--> FOR COMPLEMENTED INPUT USE UPPERCASE LETTERS"<<endl <<"please enter  character one by one"<<endl;
		cin>>ipt;
			cout<<ipt<<endl;
	char c;

char tststr[5];
int i=0,j;
int arr[5][5];

for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		arr[i][j]=0;
	}
}


	while(ipt[i]!='\0')    {
		j=0;
		int value;
		//	cout<<"stuck in outer "	<<endl;
		while(ipt[i]!='+'&&ipt[i]!='\0'){
			c=ipt[i];
		//	cout<<c;
		tststr[j]=c;
		j++;
		i++;	
	//	cout<<"stuck in inner "	<<endl;
		}
		if(ipt[i]=='\0')
		i--;
			tststr[j]='\0';	
			i++;
	cout<<tststr<<endl;	
value=getmat(tststr);	
cout<<value<<endl;
setmat(arr,value);	
	}
	//	ipt[i]='\0';*/
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	cout<<"  "<<	arr[i][j];
	}
	cout<<endl;
}		
	
	getch();
	return 0;
}
