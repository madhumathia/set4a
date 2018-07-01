{
    public static void main(String args[])throws IOException
    {
        int num,n,i;
        DataInputStream dis = new DataInputStream(System.in);
        num=Integer.parseInt(dis.readLine());
        if(num>0&&num<=10)
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
    }
}
