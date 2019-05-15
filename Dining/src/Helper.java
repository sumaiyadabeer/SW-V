
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;


class Helper{
    private Lock mutex = null;
    private Condition[] cond;
    private String[] state;
    private int[] id;

    private void outputState(int id){
        StringBuffer line = new StringBuffer();
        for(int i=0; i<5; i++)
            line.append(state[i] + " ");
        System.out.println(line + "(" + (id+1) + ")");
    }

    public Helper(){
        id = new int[5];
        mutex = new ReentrantLock();
        state = new String[5];
        cond = new Condition[5];
        for(int i=0; i<5; i++){
            id[i] = i;
            state[i] = "pon ";
            cond[i] = mutex.newCondition();
        }
    }

    public void setState(int id, String s){
        state[id] = s;
    }

    public void grabChopsticks(int id, Chopstick l, Chopstick r){
        mutex.lock();
        try{
            setState(id, "hgr ");
            while(!l.getAvailability() || !r.getAvailability())
                cond[id].await();

            l.setAvailability(false);
            r.setAvailability(false);
            setState(id, "eat ");
            outputState(id);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }finally{
            mutex.unlock();
        }
    }


    public void releaseChopsticks(int id, Chopstick l, Chopstick r){
        mutex.lock();
        try{
            setState(id, "pon ");
            l.setAvailability(true);
            r.setAvailability(true);
            cond[(id+1)%5].signalAll();
            cond[(id+4)%5].signalAll();
            outputState(id);
        }finally{
            mutex.unlock();
        }
    }
}

