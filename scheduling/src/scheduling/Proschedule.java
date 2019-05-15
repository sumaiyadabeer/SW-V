package scheduling;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Proschedule {

	int id;
	int At;
	int Bt;
	int _bt;
//	int Color=50;
	int Ct=0;
	int Tat;
	int Wt;
	
	
static	Queue <Proschedule> q =new LinkedList <Proschedule>();
static int  n;
int c0=0;
	Proschedule (int x,int y,int z)
	{
		id=x;
		At=y;
		Bt=z;
	}
	
	
	Proschedule()
	{
		
	}
	
	
	
	
	
	////SORTING........
	
	

	static public void sort(Proschedule[] arr){
		
		Proschedule p=new Proschedule();
		for(int i=0;i<n;i++){
			System.out.println("oh please in 1 lop");
		for(int j=0;j<n;j++){
			if(arr[i].At<arr[j].At)
			{
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
				
				System.out.println("SWAP******");
			}
		}
		}
		
	}
	

	
	
	////SORTING_bt shorest tym........
	
	

	static public void sort_bt(Proschedule[] arr){
		
		Proschedule p=new Proschedule();
		for(int i=0;i<n;i++){
			System.out.println("oh please in 1 lop");
		for(int j=0;j<n;j++){
			if(arr[i].Bt<arr[j].Bt)
			{
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
				
				System.out.println("SWAP******");
			}
		}
		}
		
	}
	
	//public static void(Queue <Proschedule> q)
	//{
		
	//}
	
	
	////FCFS////////....
	
	
	
	public static void Fcfs(Proschedule[] arr){
		
		int t=0;
		int j=0;
	
		//adding FcFs
		sort(arr);
		
		
		t=-1;
		Proschedule p=new Proschedule();
		while(q.peek()!=null || j<n)
		{
			
			if(j<n){
				if(t>arr[j].At){
					q.add(arr[j]);
						
				System.out.println("element aded"+arr[j].id);	
				j++;
				}}
			if(q.peek()!=null)
			{
				p=q.remove();
				t=t+p.Bt;
				//p.Ct=t;
				arr[p.id-1].Ct=t;
for(int i=0;i<n;i++)
	System.out.println(arr[i].Ct);
				System.out.println("compltn tym of :"+arr[p.id-1]+"is "+t);
			}else{
			
				System.out.println("t incremented"+t);	
				t=t+1;
			}
			
		
			System.out.println("in looop");
			
		}
		
		System.out.println();
		System.out.println();
			
	}

	
	
	///ROUND ROBIN....
	
	public static void RR(Proschedule[] arr){
//		int t=0;
		int tq=2;
		int t=0;
		int j=0;
		//adding rr
		sort(arr);
		
		
		t=0;
		Proschedule p=new Proschedule();
		while(q.peek()!=null || j<n)
		{
			
			if(q.peek()!=null)
			{
				p=q.remove();
				System.out.println("out is :: "+p.id );
			    if(p.Bt<=tq)
			    {
			    	t=t+p.Bt;
				//	p.Bt=p.Bt-tq;
					arr[p.id-1].Bt=0;
				//	p.Ct=t;
					arr[p.id-1].Ct=t;
					System.out.println("compltn tym of :"+arr[p.id-1].id+"is "+t);
					
					
			    }else if(p.Bt>tq)
			    {
					t=t+tq;
					//p.Bt=p.Bt-tq;
					arr[p.id-1].Ct=t;
					System.out.println("temp compltn tym of :"+arr[p.id-1].id+"is "+t);
					arr[p.id-1].Bt=arr[p.id-1].Bt-tq;
					if(j>=n){
						q.add(arr[p.id-1]);
						System.out.println("queue again in else:"+arr[p.id-1].id);
						}
				
					
			    }				
				}else{
			
				System.out.println("t incremented"+t);	
				t=t+1;
			}
			
			int fl=0;
			if(j<n){
				
				while(j<n && t>=arr[j].At){
					q.add(arr[j]);
						
				System.out.println("element aded"+arr[j].id);	
				j++;
				if(j==n)
					fl=1;
				}}
			if( p.Bt!=0 &&( j<n || fl==1)){
			q.add(arr[p.id-1]);
			System.out.println("queue again :"+arr[p.id-1].id);
			}
			
			System.out.println("in looop");

for(int i=0;i<n;i++)
	System.out.println(arr[i].Ct);
		}
		System.out.println("out looop");
		if(q.peek()==null)
			System.out.println("q is null");
		if(j<n)
			System.out.println("j<n");
		System.out.println();
		System.out.println();
		
	}

	
		
		////SJF//.....

	public static void SJF(Proschedule[] arr){
		
		int t=0;
		int j=0;
	
		//adding FcFs
		sort_bt(arr);
		
		int f;
		t=-1;
		Proschedule p=new Proschedule();
		Proschedule temp=new Proschedule();
		while(q.peek()!=null || j<n)
		{
			f=0;
			
			if(j<n){
				sort(arr);
				while(j<n && t>arr[j].At)
				{
				
					q.add(arr[j]);
						
				System.out.println("element aded"+arr[j].id);	
				j++;
				}}
			
			if(q.peek()!=null)
			{//manipulate queue first
				
				
				p=q.remove();
				int k=0;
				while(q.peek()!=null && k<n)
				
				{System.out.println("is stuck here");
					temp=q.remove();
					if(p.Bt<temp.Bt)
					{
						q.add(arr[temp.id-1]);
						
					}else
					{
						q.add(arr[p.id-1]);
						p=temp;
					}
					k++;
				}
				
		
			
				t=t+p.Bt;
				//p.Ct=t;
				arr[p.id-1].Bt=0;
				arr[p.id-1].Ct=t;
				
for(int i=0;i<n;i++)
	System.out.println(arr[i].Ct);
				System.out.println("compltn tym of :"+arr[p.id-1]+"is "+t);
			}else{
			
				System.out.println("t incremented"+t);	
				t=t+1;
			}
			
		
			System.out.println("in looop");
			
		}
		System.out.println("out looop");
		if(q.peek()==null)
			System.out.println("null");
		System.out.println();
		System.out.println();
			
	}
	
	
	//// SRT.........
	
	public static void SRT(Proschedule[] arr)
	{
		int t=0;
		int j=0;
	
		//adding FcFs
		sort_bt(arr);
		
		int f;
		t=-1;
		Proschedule p=new Proschedule();
		Proschedule temp=new Proschedule();
		while(q.peek()!=null || j<n)
		{
			f=0;
			
			if(j<n){
				sort(arr);
				while(j<n && t>arr[j].At)
				{
				
					q.add(arr[j]);
						
				System.out.println("element aded"+arr[j].id);	
				j++;
				}}
			
			if(q.peek()!=null)
			{//manipulate queue first
				
				
				p=q.remove();
				int k=0;
				while(q.peek()!=null && k<n)
				
				{System.out.println("is stuck here");
					temp=q.remove();
					if(p.Bt<temp.Bt)
					{
						q.add(arr[temp.id-1]);
						
					}else
					{
						q.add(arr[p.id-1]);
						p=temp;
					}
					k++;
				}
				
		
			
				//t=t+p.Bt;
				t=t+1;
				
				//p.Ct=t;
				arr[p.id-1].Bt=arr[p.id-1].Bt-1;
				arr[p.id-1].Ct=t;
				if(arr[p.id-1].Bt!=0)
				q.add(arr[p.id-1]);
for(int i=0;i<n;i++)
	System.out.println(arr[i].Ct);
				System.out.println("compltn tym of :"+arr[p.id-1]+"is "+t);
			}else{
			
				System.out.println("t incremented"+t);	
				t=t+1;
			}
			
		
			System.out.println("in looop");
			
		}
		System.out.println("out looop");
		if(q.peek()==null)
			System.out.println("null");
		System.out.println();
		System.out.println();
			
		
		
		
		
	}
	
	
	
	
	public static void main(String str[])
	{
		Scanner inp=new Scanner(System.in);
		//int n;
		System.out.println("enter the no. of processes");
		n=inp.nextInt();
		int t=0;

		System.out.println(n);
				Proschedule[] arr=new Proschedule[n];
				Proschedule[] arr1=new Proschedule[n];
		int var,var1;
	for(int i=0;i<n;i++)
		{
		
			System.out.println("enter the arrival time:");
		var=inp.nextInt();
	
			System.out.println("enter the burst time");
			var1=inp.nextInt();

			arr[i] =new Proschedule(i+1,var,var1);
			arr1[i] =new Proschedule(i+1,var,var1);
			arr[i]._bt=var1;
			arr1[i]._bt=var1;
			
		}
	int ch;	
	int repeat=0;
	
	while(repeat==0){
		
		
		for(int i=0;i<n;i++){
			arr[i] =arr1[i] ;
			arr[i]._bt=	arr1[i]._bt;	
		}

double avg_tat=0;
double avg_wt=0;
double avg_ct=0;
	System.out.println("PRESS 1 FOR FCFS");
	System.out.println("PRESS 2 FOR SJF");
	System.out.println("PRESS 3 FOR SRT");
	System.out.println("PRESS 4 FOR RR");
	ch=inp.nextInt();
switch(ch)
{
case 1:
	Fcfs(arr);			//done

			System.out.println("main result");
			for(int i=0;i<n;i++){
				arr[i].Ct=arr[i].Ct-1;//only if fcfs call
				arr[i].Tat=arr[i].Ct-arr[i].At;
				arr[i].Wt=arr[i].Tat-arr[i]._bt;
				avg_tat=avg_tat+arr[i].Tat;
				avg_wt=avg_wt+arr[i].Wt;
				avg_ct=avg_ct+arr[i].Ct;
				System.out.println(arr[i].id+ "     arrival time:    "+ arr[i].At+"  burst time:   "+arr[i]._bt+" cmpltn time:   "+arr[i].Ct+"  turn arnd tym:   "+arr[i].Tat+"  W8tng tym:   "+arr[i].Wt);
			
			}
			System.out.println("AVERAGE WAITNG TIME IS: "+avg_wt/n);
			System.out.println("AVERAGE COMPLETION TIME IS: "+avg_ct/n);
			System.out.println("AVERAGE TURN AROUND TIME IS: "+avg_tat/n);
			System.out.println("good bye!");
	break;
case 2:
	SJF(arr);               //done   problem in repeated switching

			System.out.println("main result");
			for(int i=0;i<n;i++){
				arr[i].Ct=arr[i].Ct-1;//only if fcfs call
				arr[i].Tat=arr[i].Ct-arr[i].At;
				arr[i].Wt=arr[i].Tat-arr[i]._bt;
				avg_tat=avg_tat+arr[i].Tat;
				avg_wt=avg_wt+arr[i].Wt;
				avg_ct=avg_ct+arr[i].Ct;
				System.out.println(arr[i].id+ "     arrival time:    "+ arr[i].At+"  burst time:   "+arr[i]._bt+" cmpltn time:   "+arr[i].Ct+"  turn arnd tym:   "+arr[i].Tat+"  W8tng tym:   "+arr[i].Wt);
			
			}
			System.out.println("AVERAGE WAITNG TIME IS: "+avg_wt/n);
			System.out.println("AVERAGE COMPLETION TIME IS: "+avg_ct/n);
			System.out.println("AVERAGE TURN AROUND TIME IS: "+avg_tat/n);
			System.out.println("good bye!");
	break;
case 3:
	SRT(arr);             //done

			System.out.println("main result");
			for(int i=0;i<n;i++){
				arr[i].Ct=arr[i].Ct-1;//only if fcfs call
				arr[i].Tat=arr[i].Ct-arr[i].At;
				arr[i].Wt=arr[i].Tat-arr[i]._bt;
				avg_tat=avg_tat+arr[i].Tat;
				avg_wt=avg_wt+arr[i].Wt;
				avg_ct=avg_ct+arr[i].Ct;
				System.out.println(arr[i].id+ "     arrival time:    "+ arr[i].At+"  burst time:   "+arr[i]._bt+" cmpltn time:   "+arr[i].Ct+"  turn arnd tym:   "+arr[i].Tat+"  W8tng tym:   "+arr[i].Wt);
			
			}
			System.out.println("AVERAGE WAITNG TIME IS: "+avg_wt/n);
			System.out.println("AVERAGE COMPLETION TIME IS: "+avg_ct/n);
			System.out.println("AVERAGE TURN AROUND TIME IS: "+avg_tat/n);
			System.out.println("good bye!");
	break;
case 4:
	RR(arr);             //done
	
	
			System.out.println("main result");
			for(int i=0;i<n;i++){
				arr[i].Ct=arr[i].Ct-1;//only if fcfs call
				arr[i].Tat=arr[i].Ct-arr[i].At;
				arr[i].Wt=arr[i].Tat-arr[i]._bt;
				avg_tat=avg_tat+arr[i].Tat;
				avg_wt=avg_wt+arr[i].Wt;
				avg_ct=avg_ct+arr[i].Ct;
				System.out.println(arr[i].id+ "     arrival time:    "+ arr[i].At+"  burst time:   "+arr[i]._bt+" cmpltn time:   "+arr[i].Ct+"  turn arnd tym:   "+arr[i].Tat+"  W8tng tym:   "+arr[i].Wt);
			
			}
			System.out.println("AVERAGE WAITNG TIME IS: "+avg_wt/n);
			System.out.println("AVERAGE COMPLETION TIME IS: "+avg_ct/n);
			System.out.println("AVERAGE TURN AROUND TIME IS: "+avg_tat/n);
			System.out.println("good bye!");
	break;
default :
	System.out.println("PLEASE ENTER VALID CHOICE");
	break;
}	

System.out.println("PRESS 0 TO CONINUE::");
repeat=inp.nextInt();


	}
//
	//
	//
	//
	//	sort(arr);
	//sort_bt(arr);
		
		/// result

			
		
		
	}
	
}
