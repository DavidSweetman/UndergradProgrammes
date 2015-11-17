f=@(t,y) cos(t);
tm=10;
N=100;
y0=0;
h=tm/N;
t=0:h:tm;
y=Euler(f,tm,y0,N);
plot(t,y,'rp')
hold on
plot(t,sin(t))
hold off