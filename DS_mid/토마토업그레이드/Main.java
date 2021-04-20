import java.util.*;
import java.io.*;

class cell{
    int x;
    int y;
    int day;

    public cell(int x, int y, int day){
        this.x = x;
        this.y = y;
        this.day = day;
    }

}

public class Main{
    public static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public static int W;
    public static int H;
    public static int[] dx = {1,-1,0,0};
    public static int[] dy = {0,0,-1,1};
    public static int[][] ans;

    public static void main(String[] args)throws IOException{

        String[] sarr = br.readLine().split(" ");
        W = Integer.parseInt(sarr[0]);
        H = Integer.parseInt(sarr[1]);

        ans = new int[H][W];
        for(int i = 0; i < H; i++){
            sarr = br.readLine().split(" ");
            for(int j = 0; j < W; j++){
                ans[i][j] = Integer.parseInt(sarr[j]);
            }
        }

        bfs();
    }

    public static void bfs(){
        Queue<cell> q = new LinkedList<>();
        int day = 0;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(ans[i][j]==0){
                    q.offer(new cell(i, j, 0));
                }
            }
        }

        while(!q.isEmpty()){
            cell c = q.poll();
            day = c.day;

            for(int i = 0; i < 4; i++){

                int nx = c.x + dx[i];
                int ny = c.y + dy[i];

                if(nx >= 0 && nx < H && ny >=0 && ny < W){
                    if(ans[nx][ny]!=-1 && ans[nx][ny]!=0){
                        q.offer(new cell(nx, ny, day+ans[nx][ny]));
                        ans[nx][ny] = 0;
                    }
                }

            }
        }



        if(check()){
            System.out.println(day);
        }else{
            System.out.println("-1");
        }





    }

    public static boolean check(){
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(ans[i][j] >0){
                    return false;
                }
            }
        }

        return true;
    }


}
