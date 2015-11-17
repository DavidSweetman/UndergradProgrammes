
f=@(x) 4*x.^2+2;
a=0;
b=10;
error=zeros(1,10);
I=zeros(1,N);
for N=1:1:10;
    I=integration(f,a,b,N);
    error(1,N)=abs((4060/3)-I);
    plot(N,error,'r')
end