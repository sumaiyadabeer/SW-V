
public class Problem {
    private Chopstick[] s;
    private Philosopher[] f;
    private Helper hlp;

    private void init(){
        s = new Chopstick[5];
        f = new Philosopher[5];
        hlp = new Helper();
        for(int i=0; i<5; i++)
            s[i] = new Chopstick();

        for(int i=0; i<5; i++){
            f[i] = new Philosopher(i, s[i], s[(i+4)%5], hlp);
            new Thread(f[i]).start();
        }

    }

    public Problem(){
        init();
    }

    public static void main(String[] args){
    	 System.out.println( "PH1  PH2  PH3  PH4  PH5 id_ph_whs_st_z_chng");
    	 System.out.println();
        new Problem();
    }
}