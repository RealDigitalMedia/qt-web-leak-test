
To reproduce:
- Build this application (qmake && make)
- Run the application ./leak-test
- While application is running:
  - `while true; do sleep 1; grep VmRSS /proc/$(pidof leak-test)/status | awk '{print $2}'; done`
- Observe, or graph, that these values are increasing over time 
