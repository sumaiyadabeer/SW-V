package scheduling;
import java.util.*;

public class Proscheduling {

	int id;
	int At;
	int Bt;
	int Color=50;
	int Ct;
	int Tat;
	int Wt;
	
	Proscheduling (int x,int y,int z)
	{
		id=x;
		At=y;
		Bt=z;
	}
	public static void main(String str[])
	{
		Scanner inp=new Scanner(System.in);
		int n;
		System.out.println("enter the no. of processes");
		n=inp.nextInt();
		int t=0;

		System.out.println(n);
		//Proscheduling var = new Proscheduling();
		Proscheduling[] arr=new Proscheduling[n];
		int var,var1;
		for(int i=0;i<n;i++)
		{
		
			System.out.println("enter the arrival time:");
		var=inp.nextInt();
	
			System.out.println("enter the burst time");
			var1=inp.nextInt();

			arr[i] =new Proscheduling(i+1,var,var1);
			
		}
		
		//PriorityQueue <Integer> h=new PriorityQueue<Integer>();      //HEAP
		int j=0;
		Queue <Proscheduling> q=new LinkedList <Proscheduling>();
		for( t=0;j<n;t++)
		{
			
			for(int i=0;i<n;i++)
			      {
				if(t==arr[i].At)	{
					
					q.add(arr[i]);	
					System.out.println(arr[i].At);
					j++;
					break;	
								}
					}
		}
		
		
		///FCFS
		t=0;
		Proscheduling p=new Proscheduling(0,0,0);
		while(q.peek()!=null)
		{
			p=q.remove();
			t=t+p.Bt;
			p.Ct=t;
			System.out.println(p.id+"arrival time: "+ p.At+"burst time "+p.Bt);
			
			System.out.println("null h bhai");
			
		}
		
		
		
	
	//	for(int i=0;i<n;i++){
		//	q.add(arr[i]);	
		//}
		
		
		
	/*	for(int i=0;i<n;i++)
		{
			
			System.out.println(arr[i].id+"arrival time: "+ arr[i].At+"burst time "+arr[i].Bt);
			
			
		}
		*/
		System.out.println();
		System.out.println();
	//	Proscheduling p=new Proscheduling(0,0,0);
		System.out.println("b4 loop");
		for(int i=0;i<n;i++){
			arr[i].Tat=arr[i].Ct-arr[i].At;
			arr[i].Wt=arr[i].Tat-arr[i].Bt;
			System.out.println(arr[i].id+"  arrival time:    "+ arr[i].At+"burst time   "+arr[i].Bt+" cmpltn time   "+arr[i].Ct+"  turn arnd tym   "+arr[i].Tat+"  W8tng tym   "+arr[i].Wt);
		
		}
		System.out.println("aftr loop");
		
		
		/*for(int i=0;i<n;i++){
			h.add(arr[i].Bt);	
		}
		
		
		
		for(int i=0;i<n;i++)
		{
			
			System.out.println(arr[i].id+"arrival time: "+ arr[i].At+"burst time "+arr[i].Bt);
			
			
		}
		
		System.out.println();
		System.out.println();
		
		for(int i=0;i<n;i++){
			arr[i].Bt=h.remove();
			System.out.println(arr[i].id+"arrival time: "+ arr[i].At+"burst time "+arr[i].Bt);
		
		}
		*/
	}
	
}

