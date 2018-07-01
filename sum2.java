import java.io.*;
class sum2
{
    public static void main(String args[])throws IOException
    {
        int n1,n2;
        DataInputStream dis = new DataInputStream(System.in);
        n1=Integer.parseInt(dis.readLine());
        n2=Integer.parseInt(dis.readLine());
        int sum=n1+n2;
        System.out.println(sum);
    }
}
