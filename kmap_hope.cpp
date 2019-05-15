#include<iostream>
#include<conio.h>
#include<cstring>
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

int setval1(char tststr[5]){
	int flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='a' || tststr[i]=='A')
	flag=1;
}
if(flag==0)
return 8;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='b' || tststr[i]=='B')
	flag=1;
}
if(flag==0)
return 4;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='c' || tststr[i]=='C')
	flag=1;
}
if(flag==0)
return 2;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='d' || tststr[i]=='D')
	flag=1;
}
if(flag==0)
return 1;


return 0;
	
}
int setval2(char tststr[5],int val1){
	
	int flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='a' || tststr[i]=='A')
		flag=1;		
}
if(flag==0 && val1!=8)
return 8;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='b' || tststr[i]=='B')
	flag=1;
}
if(flag==0&& val1!=4)
return 4;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='c' || tststr[i]=='C')
	flag=1;
}
if(flag==0&& val1!=2)
return 2;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='d' || tststr[i]=='D')
	flag=1;
}
if(flag==0&& val1!=1)
return 1;


return 0;
	
	
}
int setval3(char tststr[5],int val1,int val2){
	
	int flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='a' || tststr[i]=='A')
		flag=1;		
}
if(flag==0 && val1!=8 && val2!=8)
return 8;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='b' || tststr[i]=='B')
	flag=1;
}
if(flag==0&& val1!=4 && val2!=4)
return 4;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='c' || tststr[i]=='C')
	flag=1;
}
if(flag==0&& val1!=2 && val2!=2)
return 2;

flag=0;
for(int i=0;i<4;i++)
{
	if(tststr[i]=='d' || tststr[i]=='D')
	flag=1;
}
if(flag==0&& val1!=1 && val2!=8)
return 1;


return 0;
	
}





//PRINT FUNCTION

void out_single(int val)
{
if( val==0)
cout<<"ABCD";
else if(val==1)	
cout<<"ABCd";
else if(val==3)
cout<<"ABcD";	
else if(val==2)	
cout<<"ABcd";
else if(val==4)
cout<<"AbCD";	
else if(val==5)	
cout<<"AbCd";
else if(val==7)	
cout<<"AbcD";
else if(val==6)	
cout<<"Abcd";
else if(val==12)	
cout<<"aBCD";
else if(val==13)	
cout<<"aBCd";
else if(val==15)
cout<<"aBcD";	
else if(val==14)
cout<<"aBcd";	//fliping is not handled yet ->handled!!
else if(val==8)
cout<<"abCD";	
else if(val==9)
cout<<"abCd";	
else if(val==11)
cout<<"abcD";	
else if(val==10)
cout<<"abcd";	
else
cout<<"something went wrong in single ";	
}

void out_fulR(int val)
{
if( val==0)
cout<<"AB";
else if(val==1)	
cout<<"Ab";
else if(val==2)
cout<<"ab";	
else if(val==3)	
cout<<"aB";	
else
cout<<"something went wrong in full row ";	
	
}

void out_fulC(int val)
{
if( val==0)
cout<<"CD";
else if(val==1)	
cout<<"Cd";
else if(val==2)
cout<<"cd";	
else if(val==3)	
cout<<"cD";	
else
cout<<"something went wrong in full col ";	
	
}
void  out_Cor()
{
	cout<<"BD";
}

void out_prSq(int val)
{
	if( val==0)
cout<<"AC";
else if(val==1)	
cout<<"Ad";
else if(val==2)
cout<<"Ac";	
else if(val==4)
cout<<"bC";	
else if(val==5)	
cout<<"bd";
else if(val==6)	
cout<<"cb";
else if(val==8)	
cout<<"aC";
else if(val==9)	
cout<<"ad";
else if(val==10)	
cout<<"ac";
else
cout<<"something went wrong in perfect square ";	

}

void out_RhfSq(int val)
{ 
if (val==0)
cout<<"AD";
else if(val==1)	
cout<<"bD";
else if(val==2)
cout<<"aD";	
else
cout<<"something went wrong in half row square ";	
}


void out_ChfSq(int val)
{ 
if (val==0)
cout<<"BC";
else if(val==1)	
cout<<"Bd";
else if(val==2)
cout<<"Bc";	
else
cout<<"something went wrong in half col square ";	
}

void out_hpRpr(int val)  
{
if( val==0)
cout<<"ABC";
else if(val==1)	
cout<<"ABd";
else if(val==2)
cout<<"ABc";	
else if(val==4)
cout<<"AbC";	
else if(val==5)	
cout<<"Abd";
else if(val==6)	
cout<<"Acb";
else if(val==8)	
cout<<"abC";
else if(val==9)	
cout<<"abd";
else if(val==10)
cout<<"abc";
else if(val==12)
cout<<"aBC";	
else if(val==13)
cout<<"aBd";	
else if(val==14)
cout<<"aBc";	
else
cout<<"something went wrong in happy row pair ";	
	
	
	
}

void out_hpCpr(int val)  
{
if( val==0)
cout<<"ACD";
else if(val==1)	
cout<<"AdC";
else if(val==2)
cout<<"Acd";	
else if(val==3)	
cout<<"ADc";
else if(val==4)
cout<<"bCD";	
else if(val==5)	
cout<<"bCd";
else if(val==6)	
cout<<"bcd";
else if(val==7)	
cout<<"bcD";
else if(val==8)	
cout<<"aDC";
else if(val==9)	
cout<<"adC";
else if(val==10)
cout<<"acd";	
else if(val==11)
cout<<"aDc";
else
cout<<"something went wrong in happy col pair ";	
}



void out_tqRpr(int val)
{
if( val==0)
cout<<"ABD";
else if(val==1)	
cout<<"AbD";
else if(val==2)
cout<<"abD";	
else if(val==3)	
cout<<"aBD";
else
cout<<"something went wrong in tq row pair";	
}


void out_tqCpr(int val)
{
	if( val==0)
cout<<"BCD";
else if(val==1)	
cout<<"BCd";
else if(val==2)
cout<<"Bcd";	
else if(val==3)	
cout<<"BcD";
else
cout<<"something went wrong in tq col pair";	
}



//SOLVE FUNCTION
int single(int arr[5][5])
{
	
//	cout<<"single is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	for( j=0;j<4;j++){
		if(	arr[i][j]==1){
				arr[i][j]=0;
				out_single((4*i)+j);
			return ((4*i)+j);		
		}
	
}}
return -1;
}

int fulR(int arr[5][5])
{
//		cout<<"full row is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[i][0] && arr[i][1] && arr[i][2] && arr[i][3]){
	arr[i][0]=0;
	arr[i][1]=0;
	arr[i][2]=0;
	arr[i][3]=0;
	 out_fulR(i);	
		return i;	
	}	

		}
	

return -1;
}


int fulC(int arr[5][5])
{
//		cout<<"full col is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[0][i] && arr[1][i] && arr[2][i] && arr[3][i]){
	arr[0][i]=0;
	arr[1][i]=0;
	arr[2][i]=0;
	arr[3][i]=0;
	 out_fulC(i);		
		return i;	
	}	

		}
	

return -1;
}


int Cor(int arr[5][5])
{
//		cout<<"corner is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
	if(arr[0][0] && arr[0][3] && arr[3][0] && arr[3][3]){
	arr[0][0]=0;
	arr[0][3]=0;
	arr[3][0]=0;
	arr[3][3]=0;
	 out_Cor();	
		return 1000;	
	}	

		}
	

return -1;
}


int prSq(int arr[5][5])
{
//		cout<<"perfect square is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] && arr[i+1][j+1] && arr[i+1][j] && arr[i][j+1]){
	arr[i][j]=0;
	arr[i][j+1]=0;
	arr[i+1][j]=0;
	arr[i+1][j+1]=0;
	out_prSq((4*i)+j);	
		return 100+((4*i)+j);	
	}	
    }
		}
	

return -1;
}

int RhfSq(int arr[5][5])
{
//		cout<<"half row square is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){						///bound 4 or 3??
	if(arr[0][j] && arr[0][j+1] && arr[3][j+1] && arr[3][j]){
	arr[0][j]=0;
	arr[0][j+1]=0;
	arr[3][j]=0;
	arr[3][j+1]=0;
	out_RhfSq(j);	
		return 200+j;	
	}	
    }
		
	

return -1;
}

int ChfSq(int arr[5][5])
{
//		cout<<"half col square is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){				///bound 4 or 3??
	if(arr[j][0] && arr[j+1][0] && arr[j+1][3] && arr[j][3]){
	arr[j][0]=0;
	arr[j+1][0]=0;
	arr[j][3]=0;
	arr[j+1][3]=0;	
	out_ChfSq(j);
		return 300+j;	
	}	
    }
		
	

return -1;
}

int tqCpr(int arr[5][5])
{
//		cout<<"talaq col pair is called " <<endl;
	int i,j;

			for(j=0;j<4;j++){
	if(arr[0][j] && arr[3][j]){
	arr[0][j]=0;
	arr[3][j]=0;
out_tqCpr(j);
		return 400+j;	
	}	
    }
		
	

return -1;
}


int tqRpr(int arr[5][5])
{
//		cout<<"talaq row pair is called " <<endl;
	int i,j;

			for(i=0;i<4;i++){
	if(arr[i][0] && arr[i][3]){
	arr[i][0]=0;
	arr[i][3]=0;
out_tqRpr(i);
		return 500+i;	
	}	
    }
		
	

return -1;
}



int hpRpr(int arr[5][5])
{
//		cout<<"happy row pair is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] &&  arr[i][j+1]){
	arr[i][j]=0;
	arr[i][j+1]=0;
		out_hpRpr((4*i)+j);
		return 600+((4*i)+j);	
	}	
    }
		}
	

return -1;
}


int hpCpr(int arr[5][5])
{
//		cout<<"happy col pair is called " <<endl;
	int i,j;
	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
	if(arr[i][j] && arr[i+1][j] ){
	arr[i][j]=0;
	arr[i+1][j]=0;
	out_hpCpr((4*i)+j);  
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
		int value,val1,val2,val3,value_;
		val1=0;
		val2=0;
		val3=0;
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

if(strlen(tststr)==1)
{
val1=setval1(tststr);
val2=setval2(tststr,val1);
val3=setval3(tststr,val1,val2);	
}

if(strlen(tststr)==2)
{
val1=setval1(tststr);
val2=setval2(tststr,val1);	
}

if(strlen(tststr)==3)
val1=setval1(tststr);
cout<<val1<<" "<<val2<<" "<<val3<<" "<<endl;
for(int x=0;x<2;x++){
	for(int y=0;y<2;y++){
		for(int z=0;z<2;z++){
			value_=value+val1*x+val2*y+val3*z;
		setmat(arr,value_);	
		cout<<"value  is"<<value_ <<endl;	
		}
	}
}

	}
	
	//change mat into map
int temp;	
for(int i=0;i<5;i++){
temp =arr[i][3];
arr[i][3]=arr[i][2];
arr[i][2]=temp;	
}

for(int i=0;i<5;i++){
temp =arr[3][i];
arr[3][i]=arr[2][i];
arr[2][i]=temp;	
}				

for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	cout<<arr[i][j];
	}
	cout<<endl;
}

	//get values of 1 
	//problem with 00-->"handled successfully :> <3"
	
	int check=199;
	while(check!= -1)
{	cout<<"hi "<<check<<endl;

	if(check!=199)
	cout<<" + ";
	check=add_string(arr);

}	

	
	getch();
	return 0;
}
