function y=Euler(f,tm,y0,N)
h=tm/N;
t=0:h:tm;
y=zeros(1,N+1);
y(1)=y0;
for i=1:N
    y(i+1)=y(i)+f(t(i),y(i))*h;
end
