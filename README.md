# zzc-test
src下的子目录是拆分版本，
build
	cd src/gcc-loops(或runtime-checks)
	mkdir build
	cd build
	cmake ..
	make -j72
即可build所有可执行文件。
说明：
gcc-loops.cpp和runtime-checks.cpp的input都是自己生成。
gcc-loops
	没有增删函数，只进行拆分，文件名对应源文件中的函数名，其中example2、4、10为把a、b（、c）放到一起了，可以忽略这三个，这个源文件中部分example函数会使用同一数组，因此拆分后独立运行时的输出可能和一起运行的结果不同（2b，4b，7，11）。
runtime-checks
	先跑scalar再跑vector，然后check结果，考虑了一下，还是选择直接删掉了scalar、check和部分辅助函数。删掉scalar之后不会进行output检查。
