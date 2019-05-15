import java.util.*;
public class StackDemo {

   

   public static void main(String args[]) {
Stack<Integer> st = new Stack<Integer>();

      //Stack st = new Stack();
      System.out.println("stack: " + st);
    st.push( 42);
      st.push( 66);
      st.push(99);
 System.out.println("stack: " + st);
 System.out.println(st.pop());
 System.out.println(st.pop());
 System.out.println(st.pop());
      try {
        System.out.println(st.pop());
      }catch (EmptyStackException e) {
         System.out.println("empty stack");
      }
   }
}