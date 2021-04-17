import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintStream out;
        try {
            out = new PrintStream(System.out, true, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            return;
        }


        int N = Integer.parseInt(br.readLine());
        String[] arr = null;
        ArrayList<student> sList = new ArrayList<>();

        for(int i = 0; i < N; i++){
            arr = br.readLine().split(" ");
            String name = arr[0];
            int score = Integer.parseInt(arr[1]);
            boolean tries = Boolean.parseBoolean(arr[2]);
            sList.add(new student(name, score, tries));

        }

        Collections.sort(sList); //Collections caution!!

        for(student data : sList){
            out.println(data);
        }

    }


}

class student implements Comparable<student>{
    String name;
    int score;
    boolean tries;


    public student(String name, int score, boolean tries){
        this.name = name;
        this.score = score;
        this.tries = tries;
    }

    public String toString(){
        return this.name;
    }

    @Override
    public int compareTo(student o){
        if(this.score == o.score){
            if(this.tries!=o.tries){
                if(this.tries){
                    return 1;
                }else{
                    return -1;
                }
            }else{
                return 0; //return state caution!!
            }

        }else{
            return o.score - this.score;
        }

    }

}
