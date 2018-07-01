import java.io.*;
class numdigit
{
    public static void main(String args[])throws IOException
    {
        int num,count=0;
        DataInputStream dis = new DataInputStream(System.in);
        num=Integer.parseInt(dis.readLine());
        while(num>0)
        {
            num=num/10;
            count++;
        }
        System.out.println(count);
    }
}
