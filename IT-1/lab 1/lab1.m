clear all; clc;
a = 8, b = 2, c = 0, d = 8
A = [a b c d; a+b c a+c d; b a+d a c+b; d c b+d c+d]
columns = sum(A)
A_t = A'
rows = sum(A')'
diagSum = sum(diag(A))
B = fliplr(A)
antiDiagSum = sum(diag(B))
p6 = A(3,2)*A(3,4)/A(4,4)
B = [16 3 2 13; 5 10 11 8; 9 6 7 12; 4 15 14 1]
p7 = A.*B