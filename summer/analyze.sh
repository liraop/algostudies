gprof -p -b ./run gmon.out > results/flat.txt
gprof -q -b ./run gmon.out > results/callgraph.txt
