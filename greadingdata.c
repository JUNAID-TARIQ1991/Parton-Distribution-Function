
//read data from dat file and store them into root tree, from where it can be read for ploting gluon pdf

void greadingdata(){
fstream file;
file.open("NNPDF31_nnlo_as_0118_0_21.dat",ios::in);
TFile *gluonoutput=new TFile("gluonoutputall.root","recreate"); 
TTree *tree=new TTree("gluon","data from gluon file");
Double_t x,y,z;
tree->Branch("x",&x,"x/D");
tree->Branch("fx",&z,"z/D");
while(1){
file>>x>>y>>z;
if(file.eof()) break;
if(y==10){      // for Q^2=10GeV
tree->Fill();
//cout<<x<<" "<<z<<endl;

}
}
gluonoutput->Write();
gluonoutput->Close();

file.close();


}
