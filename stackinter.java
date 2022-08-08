package prg9;

public class stackinter {
    public static void main(String[] args) {
        char ch;
        int n;
        Isimplestack s;
        FixedLengthStack f =new FixedLengthStack(10);
        DynamicStack d=new DynamicStack(5);
        s=f;
        for(int i=0;i<=9;i++)
    {
        n='A'+i;
        ch=(char)n;
     s.push(ch);   
    }
    System.out.println("Stack is full\n");
    for(int i=0;i<=9;i++)
    {
        ch=s.pop();
        System.out.print(ch+"\t");
    }
    s=d;
    for(int i=0;i<26;i++)
    {
        n='A'+i;
        ch=(char)n;
        s.push(ch);
    }
    System.out.println("\nStack elements are:\n");
    for(int i=0;i<26;i++)
    {
        ch=s.pop();
        System.out.print(ch +"\t");
    }

    }
}
