import java.util.*;
 class GridPathsI {
    static int ans = 0;

    static int mod=1000000007;

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int dp[][]= new int [n][n];
        char arr[][] = new char[n][n];
for (int i = 0; i < n; i++) {
    String s = sc.next();
    for (int j = 0; j < n; j++) {
        arr[i][j] = s.charAt(j);
    }
}
        if (arr[0][0] == '*'||arr[n-1][n-1]=='*') {
            System.out.println(0);
            return;
        }
        else if(n==1)
        {
            System.out.println(1);
            return;
        }
        else
      {  dp[n-1][n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[n-1][i]!='*')
            {
                dp[n-1][i]=dp[n-1][i+1];
            }
            else 
            {
                break;
            }
        }
         for(int i=n-2;i>=0;i--)
        {
            if(arr[i][n-1]!='*')
            {
                dp[i][n-1]=dp[i+1][n-1];
            }
            else 
            {
                break;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                if(arr[i][j]!='*'){
                     dp[i][j]=(dp[i][j+1]+dp[i+1][j])%mod;
                    
                }
               
            }
        }
      
        System.out.println(dp[0][0]);}
    }
}
