function x = FalsePosition
f = @(x) cos(x)-x;
sol=fzero(f,0);
x=  0:0.1:2;
y = f(x);
x1= 0;
x2= 2;
niter=20;
xall= zeros(1,niter);
for i=1:niter;
    if abs(f(xall))<0.1
        break
    end
xnew=(x2)-((f(x2)*(x2-x1))/((f(x2))-(f(x1))));
if f(x2)*f(xnew)<0
    x1=xnew;
else
   x2=xnew;
end

xall(i)=xnew;
end
disp('FalsePosition Sol')
disp(sol)
yall=f(xall);
plot (x,y,xall,yall,'rx'); grid on
disp (xall);