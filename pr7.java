 //package java;

import java.util.Scanner;

class QueueException extends Exception{
   public void error()
   { 
    System.out.println("Queue is full");
}
}

class Queue{
   int size;
   int front;
   int rear;
   int que[];
  // public int que[]= new int[10];
  Queue(int ele)
  {
   que=new int[ele];
  }
void insert(int ele)throws QueueException
   {
    if(rear>=que.length)
    {
          throw new QueueException();
    }
    if(front==-1)
    {
        front=0;
    }
    que[rear++]=ele;
   }
   int delete()
   { 
    int ele;
    if(front==-1)
    {
      throw new ArrayIndexOutOfBoundsException();
    }
    if(front==rear)
    {
        ele=que[front];
        front=rear=-1;
    }
    else{
        ele=que[front++];
    }
    return ele;
   }
   void display()
   {
    if(front==-1)
    {
        System.out.println("Queue is empty");
    }
    for(int i=front;i<rear;i++)
    {
        System.out.print("\n");
     System.out.println(que[i]+"\t");
    }
   }
}


public class pr7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter the size of queue : ");
        int size=sc.nextInt();
        Queue que=new Queue(size);
        try{
            while(true)
            {
                System.out.println("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
                System.out.println("Enter your choice :");
                int choice =sc.nextInt();
                switch(choice)
                {
                    case 1: System.out.println("Enter the element to be inserted :");
                            int s=sc.nextInt();
                            que.insert(s);
                            break;
                    case 2:que.delete();
                            break;
                    case 3:que.display();
                            break;
                    case 4: System.exit(0);
                           // break;
                }
            }
        }catch(QueueException e)
        {
            e.error();
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Queue is empty...");
        }
    }
}
