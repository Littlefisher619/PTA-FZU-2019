void sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
            if(a[i]>a[j]) t=a[i],a[i]=a[j],a[j]=t;
    
}
 
