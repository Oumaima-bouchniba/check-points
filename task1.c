ALGORITHM Task1
VAR 

voy: array Of Char ;
j,i,n,sum,sumv: INTEGER;
ch: string;

  BEGIN
  voy[0]= a;
  voy[1]= e;
  voy[2]= y;
  voy[3]= u;
  voy[4]= i;
  voy[5]= o;
   n=length(ch);
  
    
    if (ch[n-1] = '.' )
    { 
     sum = 0;
     sumv= 0;
    for ( i=0; i<n; i++)
    {
         for (j=0; j<5; j++)
         {
            if (ch[i] = voy[j])
            {
          sumv = sumv + 1;
        
           }
    }
    if (ch[i]= ' ' ) {sum +=1}
  }
    Write(sum);
    Write(sumv);
}
END