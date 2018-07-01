import java.io.*;
class nextnum
{
    public static void main(String args[])throws IOException
    {
        int num;
        DataInputStream dis = new DataInputStream(System.in);
        num=Integer.parseInt(dis.readLine());
        System.out.println(num+1);
    }
}
