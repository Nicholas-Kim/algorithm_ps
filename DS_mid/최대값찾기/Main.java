import java.util.*;
import java.io.*;
//02:52


public class Main{
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] sArr = null;
        Stack<ArrayList<Integer>> st = new Stack<>();
        

        
        int cnt = 0;
        int tmp = 0;

        for(int i = 0; i < N; i++){
            ArrayList<Integer> list = new ArrayList<>();
            
            sArr = br.readLine().split(" ");
            if(sArr.length == 2){
                tmp = Integer.parseInt(sArr[1]);
            }

            if(sArr[0].equals("Push")){
                if(st.size() == 0){
                    list.add(++cnt);
                    list.add(tmp);
                    st.push(list);
                }else{
                    int max = st.peek().get(1);
                    if(max <= tmp){
                        list.add(++cnt);
                        list.add(tmp);
                        st.push(list);
                    }else{
                        cnt++;
                        st.push(st.peek());
                    }
                    
                }
                
            }if(sArr[0].equals("Pop")){
                list = st.pop();
                System.out.println(list.get(0)+" "+list.get(1));
                
            }
        }


    }
}


/*

입력 어케 받는지 잘 확인할것


*/
