clear all; clc;
a = 8, b = 2, c = 0, d = 8
B = magic(4)
A = B(:, [1 3 2 4])
C = rand(4,4)
D = randn(4,4)
load ldata.dat
S = [ldata B; C D]
S(:,c+1) = []
S(c+1,:) = []