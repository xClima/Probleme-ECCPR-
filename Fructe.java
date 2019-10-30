
public class Fruct{
    int x,y,z,q;
    int tip;
    Fruct(int tip, int x, int y, int z, int q){
        this.x=x;
        this.y=y;
        this.z=z;
        this.q=q;
        this.tip=tip;
    }
    double calcDistanta(Fruct fruct){
        return Math.sqrt(Math.pow(this.x-fruct.x,2)+Math.pow(this.y-fruct.y,2)+Math.pow(this.z-fruct.z,2)+Math.pow(this.q-fruct.q,2));
    }
}

import java.util.*;
public class ECCPR{
    public static void main(String [] args){
        int n;
        double min=0;
        int out=0;
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        Fruct fruct=new Fruct(sc.nextInt(),sc.nextInt(),sc.nextInt(),sc.nextInt(),sc.nextInt());
        for(int i=0;i<n;i++){
            Fruct fruct_dismin=new Fruct(sc.nextInt(),sc.nextInt(),sc.nextInt(),sc.nextInt(),sc.nextInt());
            if(i==0){
                min=fruct.calcDistanta(fruct_dismin);
                out=fruct_dismin.tip;
            }else if(min>fruct.calcDistanta(fruct_dismin)){
                min=fruct.calcDistanta(fruct_dismin);
                out=fruct_dismin.tip;
            }
        }
        System.out.print(out);
        
    }
}