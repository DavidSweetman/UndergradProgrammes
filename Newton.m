function x = Newton
f = @(x) cos(x) - 4*x;
df = @(x) -sin(x) - 4;
x = 0:0.1:pi/2;
sol=fzero(f,0);
x1 = 0;
niter = 5;
x2 = zeros(1,niter);
esp = zeros(1,niter);
for i=1:niter;
x1 = x1 - f(x1)/df(x1);
x2(i)=x1;
esp(i)=abs(sol-x1);
end
plot(x,f(x),sol,f(sol),'go',x2,f(x2),'r*');
grid on;
disp('Solutions')
disp(sol)
disp(x2)