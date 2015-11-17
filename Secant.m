function x = Secant
f = @(x) cos(x)-x;
sol=(fzero(f,0));
x=  0:0.1:pi/2;
y = f(x);
x1= 0;
x2= 2;
niter=30;
xall= zeros(1,niter);
for i=1:niter;
    if abs(f(xall))<0.1 
        break
    end
xnew=(x2)-((f(x2)*(x2-x1))/((f(x2))-(f(x1))));
x1=x2;
x2=xnew;
xall(i)=xnew;
end
disp('Secant Sol')
disp(sol)
yall=f(xall);
plot (x,y,xall,yall,'rx'); grid on
disp (xall);





