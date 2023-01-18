set term png
set output 'integral_grafiks.png'

f(x) = cos(x/2)
set grid
set xrange[-2 : 12]
set yrange[-2 : 2]

set arrow from 0,-2 to 0,2 lt 10 dt 4 nohead
set arrow from 10,-2 to 10,2 lt 10 dt 4 nohead

plot f(x) title 'cos(x/2)'
replot [0:3.14] f(x) with filledcurves above 
replot [3.14:9.425] f(x) with filledcurves below 
replot [9.425:10] f(x) with filledcurves above 
