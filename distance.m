function distance(n)

for j=1:10
xj=zeros(1,n);
yj=zeros(1,n);

for i=2:n;
    r=ceil(4*rand(1));
    if r==1
        xj(1,i)=xj(1,i-1)+1;
        yj(1,i)=yj(1,i-1);
    end
    if r==2
        xj(1,i)=xj(1,i-1)-1;
        yj(1,i)=yj(1,i-1);
    end
    if r==3
        yj(1,i)=yj(1,i-1)+1;
        xj(1,i)=xj(1,i-1);
    end
    if r==4
        yj(1,i)=yj(1,i-1)-1;
        xj(1,i)=xj(1,i-1);
    end
    disti=((xj(1,i))^2)+((yj(1,i))^2)^(1/2);
 

end
 aver=mean(disti);
 stan=std(disti);
end
plot(i,aver)
hold on
plot(i,stan)

%dist=((xj(1,i))^2)+((yj(1,i))^2))^(1/2)