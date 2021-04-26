# statement
1.gcc -g statement.c
2.sudo stap statement.stp -c ./a.out
# function call and return demo
sudo stap call_and_return.stp
# dynamic probe function call and return
sudo stap dynamic_probe_function.stp 'function probe'
e.g. sudo stap dynamic_probe_function.stp 'kernel.function("sys_open")'
# monitor global variables
sudo stap global_var.stp -c ./a.out
