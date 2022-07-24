# ploting PDF

You can plot any parton distribution function as a function of x(momentum shared fraction) vs xfx 0r Q^{2}. you just nedd to run the lhapdf.cc by giving two arguments. i.e. 
g++ lhapdf.cc -o myexe `lhapdf-config --cflags --ldflags`
./myexe (PDF name) (pdfmember)
after you will get a list of .dat files that contains info about x, Q2 and xf(x,Q2).
you can plot directly by reading  that .dat file for any quark or first create a root file with branches fo quarks and then plot by reading created tree. 
a example is given here. i.e. plotxfx1ogev.cc 
