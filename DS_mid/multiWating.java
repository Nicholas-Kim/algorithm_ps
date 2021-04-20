import java.util.*;
import java.io.*;

class Customer implements Comparable<Customer>{
    int start;
    int service;
    public Customer(int start, int service)
    {
        this.start = start;
        this.service = service;
    }
    @Override
    public int compareTo(Customer o) {
        if(this.start==o.start){
            return this.service - o.service;
        }else{
            return this.start - o.start;
        }

    }

}

public class Main {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner scan = new Scanner(System.in);
        Queue<Customer> q = new LinkedList<>();
        int Q = scan.nextInt();
        int N = scan.nextInt();
        Customer arr[] = new Customer[N];
        for(int i=0;i<N;i++)
        {
            int start = scan.nextInt();
            int end = scan.nextInt();
            arr[i] = new Customer(start, end);

        }
        Arrays.sort(arr);
        for(int i=0;i<N;i++)
        {
            q.add(new Customer(arr[i].start, arr[i].service));
        }


        int wait = 0;
        int now = 0;
        int thread[] = new int[Q];
        boolean exit = false;
        while(q.size() != 0)
        {
            Customer temp = q.peek();
            for(int i=0;i<Q;i++)
            {
                if(thread[i] != 0 && !exit)
                    thread[i]--;
            }
            exit = false;
            for(int i=0;i<Q;i++)
            {
                if(thread[i] == 0 && now >= temp.start)
                {
                    //System.out.println(now);
                    wait += now - temp.start;
                    thread[i] = temp.service;
                    q.poll();
                    exit = true;
                    break;
                }
            }
            if(!exit)
            {
                now++;
            }

        }
        System.out.println(Math.round((double)wait / N * 100) / 100.0);
    }

}
