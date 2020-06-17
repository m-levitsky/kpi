clear all; clc;
a = 8; b = 2; c = 0; d = 8;

y = [-a b c -d]

% пункт 1
poly2sym(y)

% пункт 2
syms x
y = sym2poly (-a*x^d + b*x^c + c*x^b - d*x^a)

% пункт 3
p = [d,-c]
x = [d, -c; b, -a] 
y = polyval(p,x)

% пункт 4
p = [-a, -b, c, 0 , d]
q = [c, -d, a]
s = polysum(p,q)

% пункт 5
y = conv(p,q)

% пункт 6
yd = deconv(y,p)

% пункт 7
d = polyder(p)
dc = polyder(y)
dd = polyder(yd)

% пункт 8
i = polyint(p,-c)

% пункт 9
x = roots(p)

% пункт 10
p = poly(x)
