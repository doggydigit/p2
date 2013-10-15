plot "experiment.dat"
set terminal png
set output "graph.png"
set key off
f(x) = a*x + b
fit f(x) 'reglin.dat' via a, b
set xlabel "m.n"
set ylabel "temps"
plot f(x) with lines, 'reglin.dat' with points 