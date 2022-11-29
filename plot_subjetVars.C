#include "plot.h"

using namespace std;

void plot_subjetVars(){

  TH1::SetDefaultSumw2();
  gStyle->SetOptStat(0);

  TFile * fin = TFile::Open("hist.root");  
  TH1F * _h_R01_z_sj_15_20 = (TH1F*)fin->Get("R01_z_sj_15_20");
  TH1F * _h_R01_z_sj_20_25 = (TH1F*)fin->Get("R01_z_sj_20_25");
  TH1F * _h_R01_z_sj_25_30 = (TH1F*)fin->Get("R01_z_sj_25_30");
  TH1F * _h_R01_z_sj_30_40 = (TH1F*)fin->Get("R01_z_sj_30_40");
  TH1F * _h_R01_theta_sj_15_20 = (TH1F*)fin->Get("R01_theta_sj_15_20");
  TH1F * _h_R01_theta_sj_20_25 = (TH1F*)fin->Get("R01_theta_sj_20_25");
  TH1F * _h_R01_theta_sj_25_30 = (TH1F*)fin->Get("R01_theta_sj_25_30");
  TH1F * _h_R01_theta_sj_30_40 = (TH1F*)fin->Get("R01_theta_sj_30_40");
  TH1F * _hjetpT_R04 = (TH1F*)fin->Get("mult_R04");
  cout<< "passed here "<<endl;
  

  TCanvas * Spectra04 = new TCanvas("Spectra04", " ", 500, 500);

  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();

  Spectra04->SetLogy();

  _hjetpT_R04->SetTitle(" ");
  _hjetpT_R04->SetYTitle("(#frac{1}{N_{jet}}) #frac{dN}{dp_{T}}");
  _hjetpT_R04->GetYaxis()->SetTitleOffset(1.4);
  _hjetpT_R04->GetYaxis()->SetTitleSize(0.03);
  _hjetpT_R04->GetYaxis()->SetLabelSize(0.02);
  _hjetpT_R04->SetXTitle("Jet p_{T} [GeV/c]");
  _hjetpT_R04->GetXaxis()->SetLabelSize(0.02);
  _hjetpT_R04->GetYaxis()->CenterTitle(true);

  _hjetpT_R04->SetMarkerStyle(29);
  _hjetpT_R04->SetMarkerColor(3);
  
  
   _hjetpT_R04->SetAxisRange(10, 50, "X");

   _hjetpT_R04->Draw("hist C same");

   drawText("p+p #sqrt{s} = 200 GeV", 0.5, 0.85, 14);
   drawText("anti-k_{T} R=0.4 jet, |#eta_{jet}| < 0.6", 0.5, 0.8, 14);
   //  drawText("15 < p_{T} < 20 [GeV/c] ", 0.5, 0.75, 14);
  
   Spectra04->SaveAs("RHIC_pthat20_jet_pT_R04.pdf", "RECREATE");




  TCanvas * csubjetR01 = new TCanvas("csubjetR01", " ", 1500, 500);
  
  makeMultiPanelCanvasWithGap(csubjetR01, 4, 2, 0.2, 0.2, 0.2, 0.2, 0.08, 0.01);
 

  // TH1F * hdummy_jetpT = (TH1F*) _h_R01_z_sj_15_20->Clone("hdummy_jetpT");
  // hdummy_jetpT->Reset();
  // hdummy_jetpT->SetAxisRange(0, 5, "Y");
  
 
  csubjetR01->cd(1);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  _h_R01_z_sj_15_20 ->SetLineStyle(1);
  _h_R01_z_sj_15_20->SetLineWidth(1);
  _h_R01_z_sj_15_20->SetTitle(" ");
  _h_R01_z_sj_15_20->SetYTitle("(\frac{1}{N_{jet}}) \frac{dN}{dz_{sj}}");
  _h_R01_z_sj_15_20->GetYaxis()->SetTitleSize(0.1);
  
 
  _h_R01_z_sj_15_20->SetMarkerStyle(29);
  _h_R01_z_sj_15_20->SetMarkerColor(2);
  // _h_R01_z_sj_15_20->Draw("p E1 same");
  
  _h_R01_z_sj_15_20->SetAxisRange(0, 5.5, "Y");
  _h_R01_z_sj_15_20->SetAxisRange(0, 0.5, "X");
  
  _h_R01_z_sj_15_20->Draw("hist C same");
  

  csubjetR01->cd(2);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // cjetSpectra->cd(1)->SetLogy();
  // hdummy_jetpT->Draw();
  _h_R01_z_sj_20_25->SetMarkerStyle(29);
  _h_R01_z_sj_20_25->SetMarkerColor(2);
  _h_R01_z_sj_20_25->SetTitle(" ");

  _h_R01_z_sj_20_25->SetAxisRange(0, 5.5, "Y");
  _h_R01_z_sj_20_25->SetAxisRange(0, 0.5, "X");
  
  _h_R01_z_sj_20_25->Draw("hist C same");

  csubjetR01->cd(3);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // cjetSpectra->cd(1)->SetLogy();
  // hdummy_jetpT->Draw();
  _h_R01_z_sj_25_30->SetMarkerStyle(29);
  _h_R01_z_sj_25_30->SetMarkerColor(2);
  _h_R01_z_sj_25_30->SetTitle(" ");
  _h_R01_z_sj_25_30->SetAxisRange(0, 5.5, "Y");
  _h_R01_z_sj_25_30->SetAxisRange(0, 0.5, "X");
  
  _h_R01_z_sj_25_30->Draw("hist C same");

  csubjetR01->cd(4);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  _h_R01_z_sj_30_40->SetMarkerStyle(29);
  _h_R01_z_sj_30_40->SetMarkerColor(2);
  _h_R01_z_sj_30_40->SetTitle(" ");
  _h_R01_z_sj_30_40->SetXTitle("z_{sj}");
  
  _h_R01_z_sj_30_40->SetAxisRange(0, 5.5, "Y");
  _h_R01_z_sj_30_40->SetAxisRange(0, 0.5, "X");
  
  _h_R01_z_sj_30_40->Draw("hist C same");
  

  csubjetR01->cd(5);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  _h_R01_theta_sj_15_20->SetMarkerStyle(29);
  _h_R01_theta_sj_15_20->SetMarkerColor(2);
  _h_R01_theta_sj_15_20->SetTitle(" ");
  _h_R01_theta_sj_15_20->SetYTitle("(\frac{1}{N_{jet}}) \frac{dN}{d#theta_{sj}}");
  _h_R01_theta_sj_15_20->SetAxisRange(0, 9.0, "Y");
  _h_R01_theta_sj_15_20->SetAxisRange(0, 0.5, "X");
  
  _h_R01_theta_sj_15_20->Draw("hist C same");

  csubjetR01->cd(6);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // cjetSpectra->cd(5)->SetLogy();
  // hdummy_jetpT->Draw();
  _h_R01_theta_sj_20_25->SetMarkerStyle(29);
  _h_R01_theta_sj_20_25->SetMarkerColor(2);
  _h_R01_theta_sj_20_25->SetTitle(" ");
  _h_R01_theta_sj_20_25->SetAxisRange(0, 9.0, "Y");
  _h_R01_theta_sj_20_25->SetAxisRange(0, 0.5, "X");
  
  _h_R01_theta_sj_20_25->Draw("hist C same");

  csubjetR01->cd(7);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  // cjetSpectra->cd(5)->SetLogy();
  // hdummy_jetpT->Draw();
  _h_R01_theta_sj_25_30->SetMarkerStyle(29);
  _h_R01_theta_sj_25_30->SetMarkerColor(2);
  _h_R01_theta_sj_25_30->SetTitle(" ");
  _h_R01_theta_sj_25_30->SetAxisRange(0, 9.0, "Y");
  _h_R01_theta_sj_25_30->SetAxisRange(0, 0.5, "X");
  
  _h_R01_theta_sj_25_30->Draw("hist C same");

 

  csubjetR01->cd(8);
  gStyle->SetErrorX(0);
  gPad->SetTickx();
  gPad->SetTicky();
  _h_R01_theta_sj_30_40->SetMarkerStyle(29);
  _h_R01_theta_sj_30_40->SetMarkerColor(2);
  _h_R01_theta_sj_30_40->SetTitle(" ");
  _h_R01_theta_sj_30_40->SetXTitle("#theta_{sj}");
  _h_R01_theta_sj_30_40->SetAxisRange(0, 9.0, "Y");
  _h_R01_theta_sj_30_40->SetAxisRange(0, 0.5, "X");
  
  _h_R01_theta_sj_30_40->Draw("hist C same");


 
   drawText("p+p #sqrt{s} = 200 GeV", 0.5, 0.7, 14);
   drawText("anti-k_{T} R=0.4 jets, |#eta_{jet}| < 0.6", 0.5, 0.6, 14);
  
  
  csubjetR01->SaveAs("RHIC_subjetR01_z_theta.pdf", "RECREATE");


  
}
