clear all; clc;
a = 8; b = 2; c = 0; d = 8;

start = -(b + d + 1);
finish = b + d +1;
int = (b + d + 1)/10;

[X,Y] = meshgrid(start:int:finish);
Z = (X.^2)/(c+1) + (Y.^2)/b;


colormap(colorcube)
mesh(X,Y,Z)
xlabel('x')
ylabel('y')
zlabel('z')
title('Графік z(x,y)')
text(-5,-5 ,150,'\it {Варіант 9}')
legend('z = (X.^2)/(c+1) + (Y.^2)/b')
figure;

grid off

mesh(X,Y,Z)
colormap(colorcube)
shading interp
colorbar