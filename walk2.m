function walk2(n)
x=zeros(1,n);
y=zeros(1,n);
for i=2:n;
    x(1,i)=x(1,i-1)+randn(1);
    y(1,i)=y(1,i-1)+randn(1);
end
plot(y,x)