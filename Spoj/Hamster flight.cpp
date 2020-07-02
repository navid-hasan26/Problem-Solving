    #include<stdio.h>
    #include<math.h>
    #define Pie 3.141592653589793
    int main()
    {
        int t,i;
        double v0,k1,k2,H,R,theta;
        scanf("%d",&t);
        for(i=1; i<=t; i++)
        {
            scanf("%lf%lf%lf",&v0,&k1,&k2);
            theta=(Pie-atan(4*k1/k2))/2;
            H=v0*v0*sin(theta)*sin(theta)/20;
            R=v0*v0*sin(2*theta) /10;
            printf("%.3lf %.3lf\n",theta,k1*R+k2*H);
        }
        return 0;
    } 