#include<iostream>
#include<conio.h>

using namespace std;

//INPUT FUNCTION
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






//SOLVE FUNCTION
int single(int arr[5][5])
{
	
	cout<<"single is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	for( j=0;j<4;j++){
		if(	arr[i][j]==1){
				arr[i][j]=0;
			return ((4*i)+j);		
		}
	
}}
return -1;
}

int fulR(int arr[5][5])
{
		cout<<"full row is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[i][0] && arr[i][1] && arr[i][2] && arr[i][3]){
	arr[i][0]=0;
	arr[i][1]=0;
	arr[i][2]=0;
	arr[i][3]=0;	
		return i;	
	}	

		}
	

return -1;
}


int fulC(int arr[5][5])
{
		cout<<"full col is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[0][i] && arr[1][i] && arr[2][i] && arr[3][i]){
	arr[0][i]=0;
	arr[1][i]=0;
	arr[2][i]=0;
	arr[3][i]=0;	
		return i;	
	}	

		}
	

return -1;
}


int Cor(int arr[5][5])
{
		cout<<"corner is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[0][0] && arr[0][3] && arr[3][0] && arr[3][3]){
	arr[0][0]=0;
	arr[0][3]=0;
	arr[3][0]=0;
	arr[3][3]=0;	
		return 1000;	
	}	

		}
	

return -1;
}


int prSq(int arr[5][5])
{
		cout<<"perfect square is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] && arr[i+1][j+1] && arr[i+1][j] && arr[i][j+1]){
	arr[i][j]=0;
	arr[i][j+1]=0;
	arr[i+1][j]=0;
	arr[i+1][j+1]=0;	
		return 100+((4*i)+j);	
	}	
    }
		}
	

return -1;
}

int RhfSq(int arr[5][5])
{
		cout<<"half row square is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){
	if(arr[0][j] && arr[0][j+1] && arr[3][j+1] && arr[3][j]){
	arr[0][j]=0;
	arr[0][j+1]=0;
	arr[3][j]=0;
	arr[3][j+1]=0;	
		return 200+j;	
	}	
    }
		
	

return -1;
}

int ChfSq(int arr[5][5])
{
		cout<<"half col square is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){
	if(arr[j][0] && arr[j+1][0] && arr[j+1][3] && arr[j][3]){
	arr[j][0]=0;
	arr[j+1][0]=0;
	arr[j][3]=0;
	arr[j+1][3]=0;	
		return 300+j;	
	}	
    }
		
	

return -1;
}

int tqCpr(int arr[5][5])
{
		cout<<"talaq col pair is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){
	if(arr[0][j] && arr[3][j]){
	arr[0][j]=0;
	arr[3][j]=0;

		return 400+j;	
	}	
    }
		
	

return -1;
}


int tqRpr(int arr[5][5])
{
		cout<<"talaq row pair is called " <<endl;
	int i,j;

			for(i=0;i<4;i++){
	if(arr[i][0] && arr[i][3]){
	arr[i][0]=0;
	arr[i][3]=0;

		return 500+i;	
	}	
    }
		
	

return -1;
}



int hpRpr(int arr[5][5])
{
		cout<<"happy row pair is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] &&  arr[i][j+1]){
	arr[i][j]=0;
	arr[i][j+1]=0;
	
		return 600+((4*i)+j);	
	}	
    }
		}
	

return -1;
}


int hpCpr(int arr[5][5])
{
		cout<<"happy col pair is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] && arr[i+1][j] ){
	arr[i][j]=0;
	arr[i+1][j]=0;
		return 700+((4*i)+j);	
	}	
    }
		}
	

return -1;
}












int add_string(int arr[5][5]){
	int ret;
//ful_rw
ret=fulR(arr);
if(ret!=-1)
return ret;

//ful_cl
ret=fulC(arr);
if(ret!=-1)
return ret;

//corner
ret=Cor(arr);
if(ret!=-1)
return ret;

//perfect_square
ret=prSq(arr);
if(ret!=-1)
return ret;

//half_square
ret=RhfSq(arr);
if(ret!=-1)
return ret;

ret=ChfSq(arr);
if(ret!=-1)
return ret;

//married_pair :)

ret=hpRpr(arr);
if(ret!=-1)
return ret;

ret=hpCpr(arr);
if(ret!=-1)
return ret;
   
ret=tqRpr(arr);		//talaaq :(
if(ret!=-1)
return ret;

ret=tqCpr(arr);
if(ret!=-1)
return ret;


//single ;(
ret=single(arr);	
if(ret!=-1)
return ret;

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
	
				
	//get values of 1 
	//problem with 00-->"handled successfully :> <3"
	
	int check=1;
	while(check!= -1)
{	cout<<"hi "<<check<<endl;
	check=add_string(arr);
	
	
}	
	
	getch();
	return 0;
}
