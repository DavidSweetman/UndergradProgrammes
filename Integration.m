function tot=Integration(f,a,b,N)
h=(b-a)/N;
A=zeros(1,N);
for i=1:N
    I(i)=((f(a+i*h-h)+f(a+i*h))/2)*(h);
    A(1,i)=I(i);
    
end
tot=sum(A);
disp(tot)

