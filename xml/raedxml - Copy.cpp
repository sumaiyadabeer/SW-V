#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int ftest(char c){
	if(c=='A')
	return 0;
	else if(c=='B')
	return 1;
	else if (c=='C')
	return 2;
	else if (c=='D')
	return 3;
	else if (c=='E')
	return 4;
	else if (c=='F')
	return 5;
	else if (c=='G')
	return 6;	
	else if (c=='H')
	return 7;
	else if (c=='I')
	return 8;
	else if (c=='J')
	return 9;
	else 
	{return -1;
//	exit(1);
	}
}


int chk(int j,int done[10]){
	
	for(int i=0;i<10;i++){
		if(j==done[i])
		return 0;
		
		
	}
	
return 1;	
}

void store(int j,int done[10]){
	for(int i=0;i<10;i++){
		if(done[i]==-1){
		done[i]=j;
		return;
		
		}
		
	}
	
	
}

char res(int c)
{
	if(c==0)
	return 'A';
	else if(c== 1)
	return 'B';
	else if (c==2)
	return 'C';
	else if (c==3)
	return 'D';
	else if (c==4)
	return 'E';
	else if (c==5)
	return 'F';
	else if (c==6)
	return 'G';	
	else if (c==7)
	return 'H';
	else if (c==8)
	return 'I';
	else if (c==9)
	return 'J';
	else 
	return -1;
}

int main ()
{
	FILE *fp;
	char line [30] ;
	int done[10];
	int adjMat[10][10];
	char result[10];
	char name[10];
	char test;
	int n;
	for(int i=0;i<10;i++){
	for(int j=0;j<10;j++){
		adjMat[i][j]=0;
	}	
		
	}
	
		for(int i=0;i<10;i++){
			done[i]=-1;
		}
	fp=fopen("data.xml","r");
	int x=0;
	
	while(!feof(fp)){
		fgets( line,30,fp);	
	if(!strncmp("<name>",line,6)){
		 name[x]=line[7];
		 	 x++;		
	}}
	n=x;
//	cout<<"no of elemenet are "<<x;
	rewind(fp);
	x=-1;
	int i=0;
	int y=0;
		while((!feof(fp)) )
	{
	
		if(!strncmp("<node>",line,6)){
			x++;
			y=-1;
		fgets( line,30,fp);
		fgets( line,30,fp);	
		}	
	//	y++;

		do{
				fgets( line,30,fp);
				y++;
				if(!strncmp("<depend>",line,8))
				{
					test=line[9];
				//	cout<<test<<endl;
					y=ftest(test);
				adjMat[x][y]=1;	
				//cout<< "depend.."<<line<<"x is "<<x<<"y is "<<y<<endl;
				
				}
		
					i++;
		}while((!strncmp("</node>",line,7) && i<20));
	
		
		}
	
		rewind(fp);
	int flag;
	for(int l=0;l<n;l++)
	{ //round
		
	for(int i=0;i<n;i++){
		flag=0;
		while(!chk(i,done)){
		if(!chk(i,done))
		i++;	
		}
		
	for(int j=0;j<n;j++){
	if(adjMat[i][j]==1 ){
		flag=1;	
		
	}

	}	
	if(flag==0)
	{
		store(i,done); 
	//	cout<<i<<endl;
		for(int k=0;k<n;k++)
		adjMat[k][i]=0;
		break;
	}
	}
		/*for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<"  "<<adjMat[i][j];
	}	
		cout<<endl;
	}*/
}
	

		for(i=0;i<n;i++)
		result[i]=res(done[i]);	

	for(i=0;i<n;i++)	
cout<<"  "<<result[i];
	
	// fgets( line,30,fp);			//chk ;)
//std :: cout<<"name is "<<line<< std :: endl;




	getch();
	return 0;
}
