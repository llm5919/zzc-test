# rm example1 example2a example2b example3 example4a example4b example4c example7 example8 example9 \
#    example10a example10b example11 example12 example21 example23 example24 example25

# /home/zzc/llvm-13.0/build/bin/clang++ fitLine2D.cpp dummy.o init.o -o fitLine2D_avx2 -march=native -O3 -ffast-math -mprefer-vector-width=256 -mno-avx512f -Rpass=loop
# /home/zzc/llvm-13.0/build/bin/clang++ $1.cpp memory.o -o $1 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ memory.cpp  -c -o memory.o -march=native -O0
/home/zzc/llvm-13.0/build/bin/clang++ example1.cpp memory.o -o example1 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example2a.cpp memory.o -o example2a -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example2b.cpp memory.o -o example2b -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example3.cpp memory.o -o example3 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example4a.cpp memory.o -o example4a -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example4b.cpp memory.o -o example4b -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example4c.cpp memory.o -o example4c -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example7.cpp memory.o -o example7 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example8.cpp memory.o -o example8 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example9.cpp memory.o -o example9 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example10a.cpp memory.o -o example10a -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example10b.cpp memory.o -o example10b -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example11.cpp memory.o -o example11 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example12.cpp memory.o -o example12 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example21.cpp memory.o -o example21 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example23.cpp memory.o -o example23 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example24.cpp memory.o -o example24 -march=native -O3 -ffast-math 
/home/zzc/llvm-13.0/build/bin/clang++ example25.cpp memory.o -o example25 -march=native -O3 -ffast-math 
