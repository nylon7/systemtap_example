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
# display struct context
./display_struct_context.sh
# display global strcut context
sudo stap display_global_struct.stp
# typecasting
sudo stap cast.stp -c ./a.out 
# display local variables
sudo stap local_var.stp -c ./a.out
# associative array
sudo stap associative_array.stp
# find out element in associative array
sudo stap find_out_element_in_array.stp
# statistical aggregates
sudo stap statistical.stp -T 4

