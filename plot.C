#include <iostream>
#include <TH3D.h>
#include <stdlib.h>
using namespace std;

int plot()
{
  double t_min = 0;
  double t_max = 5;
  double t_bin = 5;
  double m_min = 90;
  double m_max = 1001;
  double m_bin = 10;
  double eff_min = 0;
  double eff_max = 1;

  auto *h = new TProfile2D("h", "Efficiency of HLT_XE110_pufit_LX50; Mass(Gev); Lifetime(ns)", m_bin, m_min, m_max, t_bin, t_min, t_max, eff_min, eff_max);
  gStyle->SetOptStat(0);

  h->GetYaxis()->SetBinLabel(1,"0.2");
  h->GetYaxis()->SetBinLabel(2,"1");
  h->GetYaxis()->SetBinLabel(3,"4");
  h->GetYaxis()->SetBinLabel(4,"10");
  h->GetYaxis()->SetBinLabel(5,"30");

  string m;
  string t;
  string eff;
  
  ifstream mass;
  ifstream lifetime2;
  ifstream efficiency;
  
  mass.open("mass.txt");
  lifetime2.open("lifetime2.txt");
  efficiency.open("efficiency.txt");

  if(!mass or !lifetime2 or !efficiency)
    {
      cout << "ONE OF THE TEXT FILES DID NOT OPEN!" << endl;
      return 1;
    }
    
  int n = 88;
    
  for(int i = 0; i < n; i++)
    {
  getline(mass, m);
  getline(lifetime2, t);
  getline(efficiency, eff);
  h->Fill(stod(m),stod(t),stod(eff));
    }

  TCanvas* canv = new TCanvas("canv","canv",800,800);
  canv->SetLeftMargin(0.15);
  //const Int_t Number = 3;
  //Double_t Red[Number]    = { 1.00, 0.00, 0.00};
  //Double_t Green[Number]  = { 0.00, 1.00, 0.00};
  //Double_t Blue[Number]   = { 1.00, 0.00, 1.00};
  //Double_t Length[Number] = { 0.00, 0.50, 1.00 };
  //TColor::CreateGradientColorTable(Number,Length,Red,Green,Blue,50);
  h->Draw("COLZ");
  h->Write();
  h->GetYaxis()->SetTitleOffset(1.8);
  canv->Print("Efficiency1.pdf");
  
  mass.close();
  lifetime2.close();
  efficiency.close();

  return 0;
}
