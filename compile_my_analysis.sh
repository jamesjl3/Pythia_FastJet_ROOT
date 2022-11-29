#!/bin/bash

# compile script for make analysis that includes fastjet and pythia and root

#g++ main_jetanalysis_at_RHIC.cc -o main_jetanalysis_at_RHIC -w -I../include -O2 -pedantic -W -Wall -Wshadow -fPIC -pthread -lCore -stdlib=libc++ -pthread -std=c++17 -m64  -L../lib -Wl,-rpath,../lib -lpythia8 -ldl -I/Users/jamesjl3/utilities/fastjet_install/include -L/Users/jamesjl3/utilities/fastjet_install/lib -Wl,-rpath,/Users/jamesjl3/utilities/fastjet_install/lib -lfastjet -lfastjettools -lRecursiveTools -L/opt/homebrew/Cellar/root/6.26.04_1/lib/root -Wl,-rpath,/opt/homebrew/Cellar/root/6.26.04_1/lib/root  -I/opt/homebrew/Cellar/root/6.26.04_1/include/root -L/opt/homebrew/Cellar/root/6.26.04_1/lib/root -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -Wl,-rpath,/opt/homebrew/Cellar/root/6.26.04_1/lib/root -stdlib=libc++ -lpthread -lm -ldl


#g++ main_jetanalysis_at_RHIC.cc -o main_jetanalysis_at_RHIC main74 -w -I../include -O2 -std=c++17 -pedantic -W -Wall -Wshadow -fPIC -pthread  -L../lib -Wl,-rpath,../lib -lpythia8 -ldl -I/Users/jamesjl3/utilities/fastjet_install/include -L/Users/jamesjl3/utilities/fastjet_install/lib -Wl,-rpath,/Users/jamesjl3/utilities/fastjet_install/lib -lfastjet -lfastjettools -lRecursiveTools -L/opt/homebrew/Cellar/root/6.26.04_1/lib/root -Wl,-rpath,/opt/homebrew/Cellar/root/6.26.04_1/lib/root  -I/opt/homebrew/Cellar/root/6.26.04_1/include/root -L/opt/homebrew/Cellar/root/6.26.04_1/lib/root

g++ main_jetanalysis_at_RHIC.cc -o main_jetanalysis_at_RHIC -w -I../include -O2 -std=c++11 -pedantic -W -Wall -Wshadow -fPIC -pthread  -L../lib -Wl,-rpath,../lib -lpythia8 -ldl -I/Users/jamesjl3/utilities/fastjet_install/include\
         -L/Users/jamesjl3/utilities/fastjet_install/lib -Wl,-rpath,/Users/jamesjl3/utilities/fastjet_install/lib -lfastjet -lfastjettools -lRecursiveTools -ldl -L/opt/homebrew/Cellar/root/6.26.04_1/lib/root -Wl,-rpath,/opt/homebrew/Cellar/root/6.26.04_1/lib/root -lCore\
         `root-config --cflags --glibs`
