import java.util.*;
import java.io.*;

public class zooproblem{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int c[]= new int[3];
        int maximumarea[]= new int[3];
        int minimumreq[]= new int[3];
        for(int i=0; i<3; i++){
            c[i]= sc.nextInt();
        }
        for(int i=0; i<3; i++){
            maximumarea[i]= sc.nextInt();
        }
        int totalsum=0;
        for(int i=0; i<3; i++){
            int mul=1;
            for(int j=0; j<2; j++){
                mul*=sc.nextInt();
            }
            minimumreq[i]= mul;
            totalsum+=mul;
        }
        int allotedinput= sc.nextInt();
        allotedinput-=totalsum;
        int first_1 =0, second_2=0, third=0;
        int min= 10001, max=0;
        for(int i=0; i<3; i++){
            if(c[i]>max){
                max= c[i];
                third=i;
            }
            if(c[i]<min){
                min=c[i];
                first_1= i;
            }
        }
        second_2= 3- (first_1+third);
        maximumarea[0]-=minimumreq[0];
        maximumarea[1]-=minimumreq[1];
        maximumarea[2]-=minimumreq[2];

        long res= minimumreq[0]*c[0] + minimumreq[1]*c[1] + minimumreq[2]*c[2];

        while(allotedinput>0){
            if(maximumarea[first_1]>0){
                int min_val= Math.min(maximumarea[first_1], allotedinput);
                res+=min_val*c[first_1];
                allotedinput-=min_val;
                maximumarea[first_1]-=min_val;
            }
            else if(maximumarea[second_2]>0){
                int min_val= Math.min(maximumarea[second_2], allotedinput);
                res+= min_val * c[second_2];
                allotedinput-=min_val;
                maximumarea[second_2]-=min_val;
            }
            else if(maximumarea[third]>0){
                int min_val= Math.min(maximumarea[third], allotedinput);
                res+=min_val*c[third];
                allotedinput-=min_val;
                maximumarea[third]-=min_val;
            }
        }

        System.out.println(res);
    }
}
