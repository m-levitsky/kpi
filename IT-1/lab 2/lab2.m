clear all; clc;
a = 8; b = 2; c = 0; d = 8;

n = 20 + d;

A = rand(n,1);
B = randn(n,1);
C = sqrt(A.^2 - B.^2);

t = 1:28;

subplot(1,3,1);
plot(t,A,'r--+');
%figure;
subplot(1,3,2);
plot(t,B,'g-*');
%figure;
subplot(1,3,3);
plot(t,imag(C),'b-.o')

hold on
plot(t,real(C),'m-.o')
legend('im','re')
