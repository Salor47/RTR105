set grid
set title "Funkcijas f(x)"


plot "derivative.dat" every ::1 using 1:2 with lines title "exp(x)",\
"derivative.dat" every ::1 using 1:3 with lines title "exp'(x) Analitiska forma",\
"derivative.dat" every ::1 using 1:4 with lines title "exp'(x) Finite difference",\
"derivative.dat" every ::1 using 1:5 with lines title "exp''(x) Analitiska forma",\
"derivative.dat" every ::1 using 1:6 with lines title "exp''(x) Finite difference"

