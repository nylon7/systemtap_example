#set -x

echo "display vfs_read's data struct \`file\` context"
sudo stap -e 'probe kernel.function("vfs_read").return {printf("%s\n",$file$);exit();}'
echo " "

echo "display vfs_read's data struct private_data value of \`file\` "
sudo stap -e 'probe kernel.function("vfs_read").return {printf("%d\n",$file->private_data); exit();}'
echo " "

echo "display vfs_read's data struct f_pos_lock context of \`file\` layer 1"
sudo stap -e 'probe kernel.function("vfs_read").return {printf("%s\n",$file->f_pos_lock$);exit();}' -w
echo " "
echo "display vfs_read's data struct f_pos_lock context of \`file\` layer 2"
sudo stap -e 'probe kernel.function("vfs_read").return {printf("%s\n",$file->f_pos_lock$$);exit();}' -w
echo " "
echo "display vfs_read's data struct f_pos_lock context of \`file\` layer 3"
sudo stap -e 'probe kernel.function("vfs_read").return {printf("%s\n",$file->f_pos_lock$$$);exit();}' -w
echo " "
