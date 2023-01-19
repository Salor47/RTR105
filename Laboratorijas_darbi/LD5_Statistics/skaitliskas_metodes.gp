set grid

set title "Teikuma statistika"
set xlabel "ASCII Vērtības"
set ylabel "Frekvence"

plot 'statistics.dat' using 1:xtic(2) with boxes notitle