string ari(string s)
{
    int ch = 0;
    int wd = 0;
    int sn = 0;
    for(int i=0;i<=strlen(s);i++)
    {
       if(s[i]!=' ')
         {if(s[i]=='.' || s[i]=='?' || s[i]=='!') 
                 sn++;
          else if (isalnum(s[i]))
           ch++;
         }
       
         
       else
         {  if(isalnum(s[i+1]))
               wd++;
          }
               
            
      
    }
    printf("\n%d",ch); 
    printf("\n%d",wd); 
    printf("\n%d",sn); 
    float in;
    in = (float) (4.71 * ch / wd ) + (0.5 * wd / sn) - 21.43;
    printf("\n%f",in);
    int a = in;
    printf("\n%d",a);   
    int b = a+1;
    printf("\n%d",b);   
    int c = a-1;
    printf("\n%d",c);   
    int x=0;
    if(c<in && in<a)
       x=a;
    else if (a<in && in<b)
       x=b;  
    printf("\n%d",x);    
    string d;
    switch(x)
    {
        case 1 : d= "Kindergarten ";
                break;
        case 2 :  d= "First/Second Grade ";
                break;
        case 3 :  d= "Third Grade ";
                break;
        case 4 :  d= "Fourth Grade ";
                break;
        case 5 :  d= "Fifth Grade  ";
                break;
        case 6 : d= "Sixth Grade ";
                break;
        case 7 : d= "Seventh Grade  ";
                break;
        case 8 :  d= "Eighth Grade   ";
                break;
        case 9 :  d= "Ninth Grade  ";
                break;
        case 10 : d= "Tenth Grade  ";
                break;
        case 11 :  d= " Eleventh Grade  ";
                break;
        case 12 :  d= "Twelfth grade   ";
                break;
        case 13 :  d= "College student ";
                break;
        case 14 :  d= "Professor  ";
                break;
        default :  d= "Professor  ";                                             

    }
    retuen d;

}
