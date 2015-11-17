function walk2pause(n)
x=zeros(1,n);
y=zeros(1,n);
for i=2:n;
    x(1,i)=x(1,i-1)+randn(1);
    y(1,i)=y(1,i-1)+randn(1);
end
for j=1:n
   plot(x(1,j),y(1,j),'r*')
   xmin=min(x);
   xmax=max(x);
   ymin=min(y);
   ymax=max(y);
   axis([xmin xmax ymin ymax])
   pause(0.5)
end