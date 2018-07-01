import java.io.*;
class string3
{
    public static void main(String args[])throws IOException
    {
        
        String name;
        DataInputStream dis = new DataInputStream(System.in);
        name=dis.readLine();
        int n=Integer.parseInt(dis.readLine());
        for(int i=0;i<n;i++)
        {
            System.out.println(name);
        }
    }
}
