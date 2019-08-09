#define eff_cxx
#include "eff.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TFile.h>
#include <TTree.h>
#include <fstream>
#include <TROOT.h>
#include <iostream>
using namespace std;

void eff::Loop()
{
  //  ofstream outfile;
  //outfile.open("efficiency.txt", ios::app); 
  Long64_t nentries = fChain->GetEntriesFast();
  //  cout << "Nentries is:" << nentries << endl;
  Long64_t nbytes = 0, nb = 0;
  float n_passed = 0;
  if (fChain == 0) return;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //cout << jentry << endl;
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
	
    //int n_passed = 0;
    if(HLT_xe110_pufit_L1XE50 == 1)
      {
	n_passed++;
      }
    
  }
  //Efficiency:
  //float eff = (n_passed/nentries);
  //cout << "n_passed is: " << n_passed << endl;
  //cout << "Efficiency is:" << eff << endl;
  //outfile << eff << "\n";
  cout << n_passed << endl; 
}






int efficiency(){
  ifstream samples;
  //  ofstream outfile;
  string line;
  
  
  samples.open("samples.txt");
  //outfile.open("efficiency.txt", "WRITE");
  if(!samples)
    {
      cout << "SAMPLE FILE NOT OPEN" << endl;
      return 1;
    }
  for(int i = 0; i < 90; i++)
    {
      getline(samples, line);
      TFile* fin = new TFile(line.c_str());
      TTree *_tree=(TTree*)fin->Get("ntupOutput");
      eff *analysis=new eff(_tree);
    
      analysis->Loop();
      
    }
  //samples.close();
  //outfile.close();
  return 0;
}
