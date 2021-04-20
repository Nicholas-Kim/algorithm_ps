import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class compiler2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = null;
        String[] sarr = null;
        Stack<String> st = new Stack<>();
        String[] left = {"{", "[", "("};
        String[] right = {"}", "]", ")"};
        String NE = "No Error";
        String CE = "Compile Error";
        boolean big = false;
        boolean small = false;
        String bigStr = "\"";
        String smallStr = "\'";
        String now = null;



        while((s = br.readLine())!=null){

            sarr = s.split("");


            for(int i = 0; i < sarr.length; i++){
                now = sarr[i];

                if(!now.equals(bigStr) && big){
                    continue;
                }



                if(now.equals(bigStr)){ // 큰따옴표가 들어옴
                    big = !big;
                }else if(now.equals(smallStr)){
                    if(i+2 < sarr.length){
                        if(sarr[i+2].equals(smallStr)){
                            i++;
                        }

                    }
                    small = !small;
                }



                if(big || small){
                    continue;
                }


                if(inArray(left, now) != -1 || inArray(right, now) != -1){

                    if(st.size() != 0){
                        String peek = st.peek();
                        int leftIndex = inArray(left, peek);
                        int rightIndex = inArray(right, now);

                        if(inArray(left, peek) != -1){
                            if(inArray(right, now) != -1){
                                if(inArray(right, now) == inArray(left, peek)){
                                    st.pop();
                                }else{
                                    System.out.println(CE);
                                    System.exit(0);
                                }
                            }
                            if(inArray(left, now) != -1){
                                st.push(now);
                            }
                        }
                    }

                    else{  //st.size == 0
                        if(inArray(left, now) != -1){
                            st.push(now);
                        }else{
                            System.out.println(CE);
                            System.exit(0);
                        }
                    }

                }

            }

        } // while 문 종료


        if(st.size() == 0 || big || small){
            System.out.println(NE);
        }else{
            System.out.println(CE);
        }

    }


    public static int inArray(String[] sarray, String s){
        for(int i = 0 ;i < sarray.length; i++){
            if(sarray[i].equals(s)){
                return i;
            }
        }

        return -1;

    }


}
