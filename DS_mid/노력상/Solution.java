import java.util.*;
import java.io.*;
import java.io.PrintStream;
import java.io.UnsupportedEncodingException;

public class Solution{

    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintStream out;
        try {
            out = new PrintStream(System.out, true, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            return;
        }
        
        int N = Integer.parseInt(br.readLine());
        String[] sarr = null;
        ArrayList<student> slist = new ArrayList<>();
        for(int i = 0; i < N; i++){
            sarr = br.readLine().split(" ");
            slist.add(new student(sarr[0], Integer.parseInt(sarr[1]), Integer.parseInt(sarr[2])));
        }
        Collections.sort(slist);
        slist.remove(0);
        slist.remove(0);
        slist.remove(0);

        Collections.sort(slist, new Comparator<student>(){
            public int compare(student o1, student o2){
                if(o1.tries == o2.tries){
                    if(o1.score > o2.score){
                        return o2.score - o1.score;
                    }else{
                        return o2.score - o1.score;
                    }
                }else{
                    return o2.tries - o1.tries;
                }

            }

        });

        for(student data : slist){
            out.println(data);
        }


    }


}

class student extends human{

    public student(String name, int score, int tries){
        super(name,score,tries);
    }

    public String toString(){
        return this.name;
    }


}


abstract class human implements Comparable<student>{

    public String name;
    public int score;
    public int tries;

    public human(String name, int score, int tries){
        this.name = name;
        this.score = score;
        this.tries = tries;
    }

    @Override
    public int compareTo(student o){

        if(this.score==o.score){
            if(this.tries > o.tries){
                return this.tries - o.tries;
            }else{
                return this.tries - o.tries;
            }
        }else{
            return o.score - this.score;
        }
        


    }



}
