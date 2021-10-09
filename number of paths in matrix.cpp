  int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 or j==0){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i][j-1]+a[i-1][j];
            }
        }
    }
    return a[m-1][n-1];
}
