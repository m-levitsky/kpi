clear all; clc;
t = 0:0.3:30;
y = sqrt(t);
plot(t,y,'m--+')
grid off;
xlabel('t')
ylabel('sqrt(t)')
title('Графік sqrt(t) від t')
text(1, 1, '\it {Варіант 9}')
