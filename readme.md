# this file is a description for the project

GCC : The GNU Compiler Collection

GDB : The GUN project debugger

./vscode/tasks.json  这个文件是用来配置代码的编译工具的，比如code runner

./vscode/c_cpp_properties.json 是用来配置c语言和c++的相关配置，比如头文件或别的内容

gcc -g 加个-g 是为了gdb 用，不然gdb用不到

gcc -g file_name -o some | some  来执行两个步骤，|之前编译代码，之后执行代码

gcc 编译器是用4个字节存储整数的