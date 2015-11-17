function trajectory(n)
for j=1:5
    xj=zeros(1,n);
    yj=zeros(1,n);
for i=2:n;
    r=ceil(4*rand(1));
    switch r
        case 1
            xj(1,i)=xj(1,i-1)+1;
            yj(1,i)=yj(1,i-1);
        case 2
            xj(1,i)=xj(1,i-1)-1;
            yj(1,i)=yj(1,i-1);
        case 3
            yj(1,i)=yj(1,i-1)+1;
            xj(1,i)=xj(1,i-1);
        case 4
            yj(1,i)=yj(1,i-1)-1;
            xj(1,i)=xj(1,i-1);
            
    end
    disti=((xj(1,i))^2)+((yj(1,i))^2)^(1/2);
           
end
 averx=mean(disti);
standardx=std(disti);
end

plot(n,averx)
hold on
plot(n,standardx)