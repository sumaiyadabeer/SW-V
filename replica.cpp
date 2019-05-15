#include<iostream>
#include<conio.h>
#include<math.h>
#include<stack>
#include<queue>
using namespace std;

class node {
	public:
	int id;
	int visited;
	int sibling=0;
	};





int main(){
	
	int no;
	
	cout<<"no of element :)"<<endl;
	cin>>no;
	 
	 node n[no];
	int adj[no][no];
	for(int i=0;i<no;i++)
	{
		adj[i][i]=0;
		for(int j=0;j<i;j++)
		{
			cout<<endl<<"between"<<i+1<<"and "<<j+1;
			cin>>adj[i][j];
			adj[j][i]=adj[i][j];
		}
	}
	
	cout<<"no is "<<no<<endl;       //varification
		for(int i=0;i<no;i++)
	{
		for(int j=0;j<no;j++)
		{
	cout<<"    "<<adj[i][j];
}
cout<<endl;
}             

//initialization of objects

for(int i=0;i<no;i++)
{
n[i].id=i+1;
n[i].visited=0;
for(int j=0;j<no;j++)
{
	if(adj[i][j]==1)
	{
		double po=j;
		int p=pow(2.0, po);
		n[i].sibling=n[i].sibling | p ;
	}
}	
	
	
}

for(int i=0;i<no;i++)
{
cout<<"NOde "<<n[i].id<<endl;
cout<<"sibling"<<n[i].sibling<<endl;
cout<<"is visited"<<n[i].visited<<endl;
}
 //stack <int> s;
 queue <int> s;
// s.push(100000);
 //int pp=s.pop();
// cout<<s.top();
 int str;
 cout<<"choose strtng node"<<endl;
 cin>>str;
 //str--;
 s.push(str);
 str--;
 	n[str].visited=1;
 	/*for(int i=0;i<no;i++){
 			int pr=pow(2.0 , str-1);
 	n[i].sibling = n[i].sibling - pr;	
 	}
 */
 
 //n[str].visited=1;
 int k;
 int dv;
/* while(!s.empty())
 {
 //cout<<s.top()<<"  ";
 	k=s.top()-1;
 	n[k].visited=1;
 	
 	if(n[k].sibling==0){
 		//	cout<<s.top()<<"  ";
 		cout<<"no sibling of "<<s.top()<<endl;
		 s.pop();
 		
 	}else{
 		for(int i=0;i<no;i++){
 			int pr=pow(2.0 , i);
		if(n[k].sibling & pr)
		{
			cout<<endl<<i+1<<"unvisited"<<endl;
			n[k].sibling = n[i].sibling - pr;
			i++;
		 s.push(i);	
		 cout<<s.top()<<"  ";
		 break;
		}
		
	}
 		
 		
 	} 	

 	
 	
 	
 	
 }
*/
int vis=1;
while(!s.empty() && vis < no)
 {
 //cout<<s.top()<<"  ";
 	k=s.front()-1;

 	
 
	 if(n[k].sibling!=0){
 		for(int i=0;i<no;i++){
 			int pr=pow(2.0 , i);
		if(n[k].sibling & pr)
		{
		//	cout<<endl<<i+1<<"unvisited"<<endl;
			n[k].sibling = n[k].sibling - pr;
			n[i].sibling= n[i].sibling -pow(2.0 , k);
			
		
			
			
			
		  if(	n[i].visited!=1){
		  		n[i].visited=1;
		   cout<< " edge "<<k+1<<i+1<<endl;
		  	 s.push(i+1);
			    vis=vis+1;	
		 
		 cout<<i+1<<"  "<<endl;	
		  	
		  }	
	
		 break;
		}
		
	}
 		
 		
 	} 	

 		if(n[k].sibling==0){
 		//	cout<<s.top()<<"  ";
 	//	cout<<"poping "<<s.front()<<endl;
		 s.pop();
 		
 	}
 	
 	
 	
 }

    getch();
	return 0;
}
