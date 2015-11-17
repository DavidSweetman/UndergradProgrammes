function lattice(n)
x=zeros(1,n);
y=zeros(1,n);
for i=2:n;
    r=ceil(4*rand(1));
    switch r
        case 1
            x(1,i)=x(1,i-1)+1;
            y(1,i)=y(1,i-1);
        case 2
            x(1,i)=x(1,i-1)-1;
            y(1,i)=y(1,i-1);
        case 3
            y(1,i)=y(1,i-1)+1;
            x(1,i)=x(1,i-1);
        case 4
            y(1,i)=y(1,i-1)-1;
            x(1,i)=x(1,i-1);
    end 
end
plot(y,x,'r')