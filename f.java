import java.util.*;
class Prefix
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int min=99999;
		int i,j,len,f=1;
		int c=0;

		String s=sc.nextLine();
		String A[]=new String[n];
		for(i=0;i<n;i++){
			A[i]=sc.nextLine();
			len=A[i].length();
			if(len<min)
				min=len;
		}
		for(i=0;i<=min-1;i++){
			for(j=0;j<=n-2;j++){
				if(A[j].charAt(i)==A[j+1].charAt(i))
					continue;
				else{
					f=0;
					break;
				}
					
			}
			if(f==1){
				c++;
				System.out.print(A[0].charAt(i));
			}
			else
				break;

		}
		if(c==0)
			System.out.println("No Common Prefix Found");
	}
	
}

