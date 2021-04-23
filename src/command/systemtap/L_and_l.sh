set -x
sudo stap -L 'process("./a.out").function("func")'
sudo stap -l 'process("./a.out").function("func")'
sudo stap -L 'process("./a.out").function("*")'

