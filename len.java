import java.io.*;
class len
{
    public static void main(String args[])throws IOException
    {
        String str = new String();
        DataInputStream dis = new DataInputStream(System.in);
        str=dis.readLine();
        String str1=new String();
        str1=str;
        String str2=new String();
       str2=str.replaceAll(" ","");
        System.out.println(str2.length());
    }
}

