import java.util.*;
import java.io.*;
import java.io.PrintStream;
import java.io.UnsupportedEncodingException;


//15:05

abstract class Student implements Comparable<Student> {
    public String name;

    public Student(String name) {
        this.name = name;
    }

    @Override
    public int compareTo(Student o) {
        if (this.getClass() == o.getClass()) {
            return this.compare(o);
        } else {
            return this.getClass().toString().compareTo(o.getClass().toString());
        }
    }

    abstract public int compare(Object o);
}



public class Main{
    public static void main(String[] args)throws IOException{

        PrintStream out;
        try {
            out = new PrintStream(System.out, true, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            return;
        }



        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] sArr = null;
        ArrayList<Student> data = new ArrayList<>();

        while(N-- >0){
            sArr = br.readLine().split(" ");
            if(sArr.length == 3){
                Student a = new Android(sArr[0], sArr[1], sArr[2]);
                data.add(a);
            }else{
                Student h = new Human(sArr[0], Integer.parseInt(sArr[1]));
                data.add(h);
            }
        }

        Collections.sort(data);

        for(Student s : data){
            out.println(s);
        }

    }
}

class Human extends Student{

    int id;

    public Human(String name, int id) {
        super(name);
        this.id = id;
    }

    @Override
    public int compare(Object o) {
        Human s = (Human) o;
        return this.id-s.id;
    }

    public String toString(){
        return this.name;
    }
}



class Android extends Student{
    String mNum;
    String sNum;

    public Android(String name, String mNum, String sNum){
        super(name);
        this.mNum = mNum;
        this.sNum = sNum;
    }

    @Override
    public int compare(Object o){
        Android a = (Android) o;
        if(a.mNum.equals(this.mNum)){
            return this.sNum.compareTo(a.sNum);
        }else{
            return this.mNum.compareTo(a.mNum);
        }

    }

    public String toString(){
        return this.name;
    }

}
