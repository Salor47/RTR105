set term png
set output 'roots_grafiks.png'

f(x) = cos(x/2)
a = 0

set grid
set xrange [-4:1]
set yrange [-2:2]

set object circle at -3.14,0 size scr 0.004 lw 4 fc rgb "red"
plot f(x) title 'cos(x/2)' lw 2 lt rgb "black"  
replot a title 'Izveleta a vertiba' 

