

class Philosopher implements Runnable{
    private Helper hlp;
    private Chopstick l, r;
    private int id;
    public Philosopher(int id, Chopstick l, Chopstick r, Helper i){
        this.hlp = i;
        this.l = l;
        this.r = r;
        this.id = id;
    }

    private void eat(){
        try{
            Thread.sleep(2000);
        }catch(InterruptedException e){}
    }

    private void think(){
        try{
            Thread.sleep(2000);
        }catch(InterruptedException e){}
    }

    public void run(){
        while(true){
            hlp.grabChopsticks(id, l, r);
            eat();
            hlp.releaseChopsticks(id, l, r);
            think();
        }
    }
}

