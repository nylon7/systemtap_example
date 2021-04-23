# -x PID send PID's parameters to systemtap
sudo stap x-param.stp -x 10
# -T set systemtap script exit time
sudo stap T-param.stp -T 3
# -L & -l find out function line & parameters
./L_and_l.sh
# -G set global variable
sudo stap G-param.stp -G flag=1
