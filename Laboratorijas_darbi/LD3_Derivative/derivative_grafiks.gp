set term png
set output 'derivative_grafiks.png'

set grid
set title "Cos(x/2) Atvasinajumi"


plot "derivative.dat" every ::6 using 1:2 with lines title "cos(x/2)" lw 2 lt rgb "pink",\
     "derivative.dat" every ::6 using 1:3 with lines title "cos(x/2)' Analitiska forma" lw 2 lt rgb "black",\
     "derivative.dat" every ::6 using 1:4 with lines title "cos(x/2)' Finite difference" lw 2 lt rgb "green",\
     "derivative.dat" every ::6 using 1:5 with lines title "cos(x/2)'' Analitiska forma" lw 2 lt rgb "blue",\
     "derivative.dat" every ::6 using 1:6 with lines title "cos(x/2)'' Finite difference" lw 2 lt rgb "red"


