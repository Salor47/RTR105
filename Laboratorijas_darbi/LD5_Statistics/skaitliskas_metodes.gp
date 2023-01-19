set term 'png'
set output "Histogramma.png"

set grid

set title "Teikuma statistika" font ",25"
set yrange[0:3]
set xlabel "ASCII Vērtības" font ",13"
set ylabel "Frekvence" font ",13"

set style data histograms
set style fill solid border 0.1 

plot 'statistics.dat' using 1:xtic(2) with boxes notitle lt rgb "red"
