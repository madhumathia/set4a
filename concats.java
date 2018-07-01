import java.io.*;
class concats
{
    public static void main(String args[])throws IOException
    {
        String str1,str2,strcon;
        DataInputStream dis = new DataInputStream(System.in);
        str1=dis.readLine();
        str2=dis.readLine();
        strcon=str1+str2;
        System.out.println(strcon);
        }
}
