import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{
    public static void main(String[] args) throws IOException {

        int[][] input = new int[6][6];
        int[][] sum = new int[6][6];

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        for(int i = 1; i < 6;i++){
            String[] s = br.readLine().split(" ");
            for(int j = 1; j< 6; j++){
                input[i][j] = Integer.parseInt(s[j-1]);
            }
        }


        for(int i = 1; i< 6; i++){
            for(int j = 1; j<6; j++){
                sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+input[i][j];
            }
        }

        for(int i = 0; i < 6;i++){

            for(int j = 0; j< 6; j++){
                System.out.print(sum[i][j]+" ");

            }
            System.out.println();
        }


    }
}
