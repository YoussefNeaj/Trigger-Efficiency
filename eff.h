//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Aug  2 14:32:51 2019 by ROOT version 6.18/00
// from TTree ntupOutput/ntupOutput
// found on file: mc16_13TeV.448390.MGPy8EG_A14N23LO_mAMSB_C1N1_5000_31400_LL0p2_MET60.deriv.DAOD_SUSY6.e7157_e5984_s3353_r9364_r9315_p3877.root
//////////////////////////////////////////////////////////

#ifndef eff_h
#define eff_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class eff {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   ULong64_t       EventNumber;
   Double_t        FinalWeight;
   Bool_t          HLT_noalg_L1J400;
   Bool_t          HLT_xe100_mht_L1XE50;
   Bool_t          HLT_xe100_pufit_L1XE50;
   Bool_t          HLT_xe100_pufit_L1XE55;
   Bool_t          HLT_xe110_mht_L1XE50;
   Bool_t          HLT_xe110_pufit_L1XE50;
   Bool_t          HLT_xe110_pufit_L1XE55;
   Bool_t          HLT_xe110_pufit_xe65_L1XE50;
   Bool_t          HLT_xe110_pufit_xe70_L1XE50;
   Bool_t          HLT_xe120_pufit_L1XE50;
   Bool_t          HLT_xe70;
   Bool_t          HLT_xe70_mht;
   Bool_t          HLT_xe90_mht_L1XE50;
   Bool_t          HLT_xe90_pufit_L1XE50;
   UChar_t         L1_XE50;
   Double_t        PileUpWeight;
   UInt_t          RunNumber;
   Float_t         averageIntPerCrossing;
   Float_t         calomet;
   UChar_t         eventCleaning;
   UChar_t         hasBadLLPJet;
   UChar_t         hasValidRHadron;
   vector<double>  *jet_eta;
   vector<double>  *jet_phi;
   vector<double>  *jet_pt;
   Float_t         leadingJetMetDPhi;
   Float_t         leadingJetPt;
   UChar_t         lowestUP_met_trigger;
   vector<char>    *main_event_Bkg1Nominal;
   vector<char>    *main_event_Bkg1Nominal_EventCleaning;
   vector<char>    *main_event_Bkg1Nominal_NoBadJets;
   vector<char>    *main_event_Bkg1Nominal_NoBadMuons;
   vector<char>    *main_event_Bkg1Nominal_OfflineMET;
   vector<char>    *main_event_Bkg1Nominal_PV;
   vector<char>    *main_event_Bkg1Nominal_Trigger;
   vector<char>    *main_event_Bkg1Nominal_onetrack_TransMass;
   vector<char>    *main_event_Bkg1Nominal_onetrack_etaCentral;
   vector<char>    *main_event_Bkg1Nominal_onetrack_in_pv;
   vector<char>    *main_event_Bkg1Nominal_onetrack_isocone;
   vector<char>    *main_event_Bkg1Nominal_onetrack_nIBLandBL;
   vector<char>    *main_event_Bkg1Nominal_onetrack_nSharedSplit;
   vector<char>    *main_event_Bkg1Nominal_onetrack_ndedx_ge2;
   vector<char>    *main_event_Bkg1Nominal_onetrack_notelectron;
   vector<char>    *main_event_Bkg1Nominal_onetrack_nothadron;
   vector<char>    *main_event_Bkg1Nominal_onetrack_notmuon;
   vector<char>    *main_event_Bkg1Nominal_onetrack_p_g150;
   vector<char>    *main_event_Bkg1Nominal_onetrack_pt_g50;
   vector<char>    *main_event_Bkg1Nominal_passGRL;
   vector<char>    *main_event_Bkg1Nominal_preselected;
   vector<char>    *main_event_Bkg1Validation;
   vector<char>    *main_event_Bkg1Validation_EventCleaning;
   vector<char>    *main_event_Bkg1Validation_NoBadJets;
   vector<char>    *main_event_Bkg1Validation_NoBadMuons;
   vector<char>    *main_event_Bkg1Validation_OfflineMET;
   vector<char>    *main_event_Bkg1Validation_PV;
   vector<char>    *main_event_Bkg1Validation_Trigger;
   vector<char>    *main_event_Bkg1Validation_onetrack_TransMass;
   vector<char>    *main_event_Bkg1Validation_onetrack_etaCentral;
   vector<char>    *main_event_Bkg1Validation_onetrack_in_pv;
   vector<char>    *main_event_Bkg1Validation_onetrack_ionization;
   vector<char>    *main_event_Bkg1Validation_onetrack_isocone;
   vector<char>    *main_event_Bkg1Validation_onetrack_nIBLandBL;
   vector<char>    *main_event_Bkg1Validation_onetrack_nSharedSplit;
   vector<char>    *main_event_Bkg1Validation_onetrack_ndedx_ge2;
   vector<char>    *main_event_Bkg1Validation_onetrack_notelectron;
   vector<char>    *main_event_Bkg1Validation_onetrack_nothadron;
   vector<char>    *main_event_Bkg1Validation_onetrack_notmuon;
   vector<char>    *main_event_Bkg1Validation_onetrack_p_g50l150;
   vector<char>    *main_event_Bkg1Validation_onetrack_pt_g50;
   vector<char>    *main_event_Bkg1Validation_passGRL;
   vector<char>    *main_event_Bkg1Validation_preselected;
   vector<char>    *main_event_Bkg2Nominal;
   vector<char>    *main_event_Bkg2Nominal_EventCleaning;
   vector<char>    *main_event_Bkg2Nominal_NoBadJets;
   vector<char>    *main_event_Bkg2Nominal_NoBadMuons;
   vector<char>    *main_event_Bkg2Nominal_OfflineMET;
   vector<char>    *main_event_Bkg2Nominal_PV;
   vector<char>    *main_event_Bkg2Nominal_Trigger;
   vector<char>    *main_event_Bkg2Nominal_onetrack_TransMass;
   vector<char>    *main_event_Bkg2Nominal_onetrack_etaCentral;
   vector<char>    *main_event_Bkg2Nominal_onetrack_in_pv;
   vector<char>    *main_event_Bkg2Nominal_onetrack_isocone;
   vector<char>    *main_event_Bkg2Nominal_onetrack_nIBLandBL;
   vector<char>    *main_event_Bkg2Nominal_onetrack_nSharedSplit;
   vector<char>    *main_event_Bkg2Nominal_onetrack_ndedx_ge2;
   vector<char>    *main_event_Bkg2Nominal_onetrack_notelectron;
   vector<char>    *main_event_Bkg2Nominal_onetrack_nothadron;
   vector<char>    *main_event_Bkg2Nominal_onetrack_notmuon;
   vector<char>    *main_event_Bkg2Nominal_onetrack_p_g150;
   vector<char>    *main_event_Bkg2Nominal_onetrack_pt_g50;
   vector<char>    *main_event_Bkg2Nominal_passGRL;
   vector<char>    *main_event_Bkg2Nominal_preselected;
   vector<char>    *main_event_Bkg2Validation;
   vector<char>    *main_event_Bkg2Validation_EventCleaning;
   vector<char>    *main_event_Bkg2Validation_NoBadJets;
   vector<char>    *main_event_Bkg2Validation_NoBadMuons;
   vector<char>    *main_event_Bkg2Validation_OfflineMET;
   vector<char>    *main_event_Bkg2Validation_PV;
   vector<char>    *main_event_Bkg2Validation_Trigger;
   vector<char>    *main_event_Bkg2Validation_onetrack_TransMass;
   vector<char>    *main_event_Bkg2Validation_onetrack_etaCentral;
   vector<char>    *main_event_Bkg2Validation_onetrack_in_pv;
   vector<char>    *main_event_Bkg2Validation_onetrack_isocone;
   vector<char>    *main_event_Bkg2Validation_onetrack_nIBLandBL;
   vector<char>    *main_event_Bkg2Validation_onetrack_nSharedSplit;
   vector<char>    *main_event_Bkg2Validation_onetrack_ndedx_ge2;
   vector<char>    *main_event_Bkg2Validation_onetrack_notelectron;
   vector<char>    *main_event_Bkg2Validation_onetrack_nothadron;
   vector<char>    *main_event_Bkg2Validation_onetrack_notmuon;
   vector<char>    *main_event_Bkg2Validation_onetrack_p_g50l150;
   vector<char>    *main_event_Bkg2Validation_onetrack_pt_g50;
   vector<char>    *main_event_Bkg2Validation_passGRL;
   vector<char>    *main_event_Bkg2Validation_preselected;
   vector<char>    *main_event_SRNominal;
   vector<char>    *main_event_SRNominal_EventCleaning;
   vector<char>    *main_event_SRNominal_NoBadJets;
   vector<char>    *main_event_SRNominal_NoBadMuons;
   vector<char>    *main_event_SRNominal_OfflineMET;
   vector<char>    *main_event_SRNominal_PV;
   vector<char>    *main_event_SRNominal_Trigger;
   vector<char>    *main_event_SRNominal_matchToRHadron;
   vector<char>    *main_event_SRNominal_matchToRHadron_EventCleaning;
   vector<char>    *main_event_SRNominal_matchToRHadron_NoBadJets;
   vector<char>    *main_event_SRNominal_matchToRHadron_NoBadMuons;
   vector<char>    *main_event_SRNominal_matchToRHadron_OfflineMET;
   vector<char>    *main_event_SRNominal_matchToRHadron_PV;
   vector<char>    *main_event_SRNominal_matchToRHadron_Trigger;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_TransMass;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_etaCentral;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_in_pv;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_ionization;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_is_RHadron;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_isocone;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_notelectron;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_nothadron;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_notmuon;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_p_g150;
   vector<char>    *main_event_SRNominal_matchToRHadron_onetrack_pt_g50;
   vector<char>    *main_event_SRNominal_matchToRHadron_passGRL;
   vector<char>    *main_event_SRNominal_matchToRHadron_preselected;
   vector<char>    *main_event_SRNominal_onetrack_TransMass;
   vector<char>    *main_event_SRNominal_onetrack_etaCentral;
   vector<char>    *main_event_SRNominal_onetrack_in_pv;
   vector<char>    *main_event_SRNominal_onetrack_ionization;
   vector<char>    *main_event_SRNominal_onetrack_isocone;
   vector<char>    *main_event_SRNominal_onetrack_nIBLandBL;
   vector<char>    *main_event_SRNominal_onetrack_nSharedSplit;
   vector<char>    *main_event_SRNominal_onetrack_ndedx_ge2;
   vector<char>    *main_event_SRNominal_onetrack_notelectron;
   vector<char>    *main_event_SRNominal_onetrack_nothadron;
   vector<char>    *main_event_SRNominal_onetrack_notmuon;
   vector<char>    *main_event_SRNominal_onetrack_p_g150;
   vector<char>    *main_event_SRNominal_onetrack_pt_g50;
   vector<char>    *main_event_SRNominal_passGRL;
   vector<char>    *main_event_SRNominal_preselected;
   vector<char>    *main_event_SRValidation;
   vector<char>    *main_event_SRValidation_EventCleaning;
   vector<char>    *main_event_SRValidation_NoBadJets;
   vector<char>    *main_event_SRValidation_NoBadMuons;
   vector<char>    *main_event_SRValidation_OfflineMET;
   vector<char>    *main_event_SRValidation_PV;
   vector<char>    *main_event_SRValidation_Trigger;
   vector<char>    *main_event_SRValidation_onetrack_TransMass;
   vector<char>    *main_event_SRValidation_onetrack_etaCentral;
   vector<char>    *main_event_SRValidation_onetrack_in_pv;
   vector<char>    *main_event_SRValidation_onetrack_isocone;
   vector<char>    *main_event_SRValidation_onetrack_nIBLandBL;
   vector<char>    *main_event_SRValidation_onetrack_nSharedSplit;
   vector<char>    *main_event_SRValidation_onetrack_ndedx_ge2;
   vector<char>    *main_event_SRValidation_onetrack_notelectron;
   vector<char>    *main_event_SRValidation_onetrack_nothadron;
   vector<char>    *main_event_SRValidation_onetrack_notmuon;
   vector<char>    *main_event_SRValidation_onetrack_p_g50l150;
   vector<char>    *main_event_SRValidation_onetrack_pt_g50;
   vector<char>    *main_event_SRValidation_passGRL;
   vector<char>    *main_event_SRValidation_preselected;
   vector<char>    *main_track_nominal;
   vector<char>    *main_track_nominal_TransMass;
   vector<char>    *main_track_nominal_etaCentral;
   vector<char>    *main_track_nominal_ionization;
   vector<char>    *main_track_nominal_isocone;
   vector<char>    *main_track_nominal_matchToRHadron;
   vector<char>    *main_track_nominal_matchToRHadron_TransMass;
   vector<char>    *main_track_nominal_matchToRHadron_etaCentral;
   vector<char>    *main_track_nominal_matchToRHadron_ionization;
   vector<char>    *main_track_nominal_matchToRHadron_is_RHadron;
   vector<char>    *main_track_nominal_matchToRHadron_isocone;
   vector<char>    *main_track_nominal_matchToRHadron_nIBLandBL;
   vector<char>    *main_track_nominal_matchToRHadron_nSharedSplit;
   vector<char>    *main_track_nominal_matchToRHadron_ndedx_ge2;
   vector<char>    *main_track_nominal_matchToRHadron_notelectron;
   vector<char>    *main_track_nominal_matchToRHadron_nothadron;
   vector<char>    *main_track_nominal_matchToRHadron_notmuon;
   vector<char>    *main_track_nominal_matchToRHadron_p_g150;
   vector<char>    *main_track_nominal_matchToRHadron_preselected;
   vector<char>    *main_track_nominal_matchToRHadron_pt_g50;
   vector<char>    *main_track_nominal_matchToRHadron_trk_inPV;
   vector<char>    *main_track_nominal_nIBLandBL;
   vector<char>    *main_track_nominal_nSharedSplit;
   vector<char>    *main_track_nominal_ndedx_ge2;
   vector<char>    *main_track_nominal_notelectron;
   vector<char>    *main_track_nominal_nothadron;
   vector<char>    *main_track_nominal_notmuon;
   vector<char>    *main_track_nominal_p_g150;
   vector<char>    *main_track_nominal_preselected;
   vector<char>    *main_track_nominal_pt_g50;
   vector<char>    *main_track_nominal_trk_inPV;
   vector<char>    *main_track_validation;
   vector<char>    *main_track_validation_TransMass;
   vector<char>    *main_track_validation_etaCentral;
   vector<char>    *main_track_validation_ionization;
   vector<char>    *main_track_validation_isocone;
   vector<char>    *main_track_validation_nIBLandBL;
   vector<char>    *main_track_validation_nSharedSplit;
   vector<char>    *main_track_validation_ndedx_ge2;
   vector<char>    *main_track_validation_notelectron;
   vector<char>    *main_track_validation_nothadron;
   vector<char>    *main_track_validation_notmuon;
   vector<char>    *main_track_validation_p_g50l150;
   vector<char>    *main_track_validation_preselected;
   vector<char>    *main_track_validation_pt_g50;
   vector<char>    *main_track_validation_trk_inPV;
   Double_t        mcEventWeight;
   Float_t         met;
   Float_t         met_mpx;
   Float_t         met_mpy;
   Float_t         met_muons;
   Float_t         met_noMuons;
   Double_t        met_phi;
   Float_t         met_refjet;
   Float_t         met_soft;
   Int_t           nBaselineElectrons;
   Int_t           nBaselineMuons;
   Int_t           nChargedRHadron;
   Int_t           nJets;
   Int_t           nNeutralRHadron;
   Int_t           nSignalElectrons;
   Int_t           nSignalMuons;
   ULong64_t       nVertex;
   vector<char>    *stable_event_Bkg1Nominal;
   vector<char>    *stable_event_Bkg1Nominal_EventCleaning;
   vector<char>    *stable_event_Bkg1Nominal_NoBadJets;
   vector<char>    *stable_event_Bkg1Nominal_OfflineMET;
   vector<char>    *stable_event_Bkg1Nominal_PV;
   vector<char>    *stable_event_Bkg1Nominal_Trigger;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_TransMass;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_etaCentral;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_in_pv;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_ionization;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_isocone;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_nIBLandBL;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_nSharedSplit;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_ndedx_ge2;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_notelectron;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_nothadron;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_p_g150;
   vector<char>    *stable_event_Bkg1Nominal_onetrack_pt_g50;
   vector<char>    *stable_event_Bkg1Nominal_passGRL;
   vector<char>    *stable_event_Bkg1Nominal_preselected;
   vector<char>    *stable_event_Bkg1Validation;
   vector<char>    *stable_event_Bkg1Validation_EventCleaning;
   vector<char>    *stable_event_Bkg1Validation_NoBadJets;
   vector<char>    *stable_event_Bkg1Validation_OfflineMET;
   vector<char>    *stable_event_Bkg1Validation_PV;
   vector<char>    *stable_event_Bkg1Validation_Trigger;
   vector<char>    *stable_event_Bkg1Validation_onetrack_TransMass;
   vector<char>    *stable_event_Bkg1Validation_onetrack_etaCentral;
   vector<char>    *stable_event_Bkg1Validation_onetrack_in_pv;
   vector<char>    *stable_event_Bkg1Validation_onetrack_ionization;
   vector<char>    *stable_event_Bkg1Validation_onetrack_isocone;
   vector<char>    *stable_event_Bkg1Validation_onetrack_nIBLandBL;
   vector<char>    *stable_event_Bkg1Validation_onetrack_nSharedSplit;
   vector<char>    *stable_event_Bkg1Validation_onetrack_ndedx_ge2;
   vector<char>    *stable_event_Bkg1Validation_onetrack_notelectron;
   vector<char>    *stable_event_Bkg1Validation_onetrack_nothadron;
   vector<char>    *stable_event_Bkg1Validation_onetrack_p_g50l150;
   vector<char>    *stable_event_Bkg1Validation_onetrack_pt_g50;
   vector<char>    *stable_event_Bkg1Validation_passGRL;
   vector<char>    *stable_event_Bkg1Validation_preselected;
   vector<char>    *stable_event_Bkg2Nominal;
   vector<char>    *stable_event_Bkg2Nominal_EventCleaning;
   vector<char>    *stable_event_Bkg2Nominal_NoBadJets;
   vector<char>    *stable_event_Bkg2Nominal_OfflineMET;
   vector<char>    *stable_event_Bkg2Nominal_PV;
   vector<char>    *stable_event_Bkg2Nominal_Trigger;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_TransMass;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_etaCentral;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_in_pv;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_isocone;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_nIBLandBL;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_nSharedSplit;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_ndedx_ge2;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_notelectron;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_nothadron;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_p_g150;
   vector<char>    *stable_event_Bkg2Nominal_onetrack_pt_g50;
   vector<char>    *stable_event_Bkg2Nominal_passGRL;
   vector<char>    *stable_event_Bkg2Nominal_preselected;
   vector<char>    *stable_event_Bkg2Validation;
   vector<char>    *stable_event_Bkg2Validation_EventCleaning;
   vector<char>    *stable_event_Bkg2Validation_NoBadJets;
   vector<char>    *stable_event_Bkg2Validation_OfflineMET;
   vector<char>    *stable_event_Bkg2Validation_PV;
   vector<char>    *stable_event_Bkg2Validation_Trigger;
   vector<char>    *stable_event_Bkg2Validation_onetrack_TransMass;
   vector<char>    *stable_event_Bkg2Validation_onetrack_etaCentral;
   vector<char>    *stable_event_Bkg2Validation_onetrack_in_pv;
   vector<char>    *stable_event_Bkg2Validation_onetrack_isocone;
   vector<char>    *stable_event_Bkg2Validation_onetrack_nIBLandBL;
   vector<char>    *stable_event_Bkg2Validation_onetrack_nSharedSplit;
   vector<char>    *stable_event_Bkg2Validation_onetrack_ndedx_ge2;
   vector<char>    *stable_event_Bkg2Validation_onetrack_notelectron;
   vector<char>    *stable_event_Bkg2Validation_onetrack_nothadron;
   vector<char>    *stable_event_Bkg2Validation_onetrack_p_g50l150;
   vector<char>    *stable_event_Bkg2Validation_onetrack_pt_g50;
   vector<char>    *stable_event_Bkg2Validation_passGRL;
   vector<char>    *stable_event_Bkg2Validation_preselected;
   vector<char>    *stable_event_SRNominal;
   vector<char>    *stable_event_SRNominal_EventCleaning;
   vector<char>    *stable_event_SRNominal_NoBadJets;
   vector<char>    *stable_event_SRNominal_OfflineMET;
   vector<char>    *stable_event_SRNominal_PV;
   vector<char>    *stable_event_SRNominal_Trigger;
   vector<char>    *stable_event_SRNominal_matchToRHadron;
   vector<char>    *stable_event_SRNominal_matchToRHadron_EventCleaning;
   vector<char>    *stable_event_SRNominal_matchToRHadron_NoBadJets;
   vector<char>    *stable_event_SRNominal_matchToRHadron_OfflineMET;
   vector<char>    *stable_event_SRNominal_matchToRHadron_PV;
   vector<char>    *stable_event_SRNominal_matchToRHadron_Trigger;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_TransMass;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_etaCentral;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_in_pv;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_ionization;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_isocone;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_notelectron;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_nothadron;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_p_g150;
   vector<char>    *stable_event_SRNominal_matchToRHadron_onetrack_pt_g50;
   vector<char>    *stable_event_SRNominal_matchToRHadron_passGRL;
   vector<char>    *stable_event_SRNominal_matchToRHadron_preselected;
   vector<char>    *stable_event_SRNominal_onetrack_TransMass;
   vector<char>    *stable_event_SRNominal_onetrack_etaCentral;
   vector<char>    *stable_event_SRNominal_onetrack_in_pv;
   vector<char>    *stable_event_SRNominal_onetrack_ionization;
   vector<char>    *stable_event_SRNominal_onetrack_isocone;
   vector<char>    *stable_event_SRNominal_onetrack_nIBLandBL;
   vector<char>    *stable_event_SRNominal_onetrack_nSharedSplit;
   vector<char>    *stable_event_SRNominal_onetrack_ndedx_ge2;
   vector<char>    *stable_event_SRNominal_onetrack_notelectron;
   vector<char>    *stable_event_SRNominal_onetrack_nothadron;
   vector<char>    *stable_event_SRNominal_onetrack_p_g150;
   vector<char>    *stable_event_SRNominal_onetrack_pt_g50;
   vector<char>    *stable_event_SRNominal_passGRL;
   vector<char>    *stable_event_SRNominal_preselected;
   vector<char>    *stable_event_SRValidation;
   vector<char>    *stable_event_SRValidation_EventCleaning;
   vector<char>    *stable_event_SRValidation_NoBadJets;
   vector<char>    *stable_event_SRValidation_OfflineMET;
   vector<char>    *stable_event_SRValidation_PV;
   vector<char>    *stable_event_SRValidation_Trigger;
   vector<char>    *stable_event_SRValidation_onetrack_TransMass;
   vector<char>    *stable_event_SRValidation_onetrack_etaCentral;
   vector<char>    *stable_event_SRValidation_onetrack_in_pv;
   vector<char>    *stable_event_SRValidation_onetrack_isocone;
   vector<char>    *stable_event_SRValidation_onetrack_nIBLandBL;
   vector<char>    *stable_event_SRValidation_onetrack_nSharedSplit;
   vector<char>    *stable_event_SRValidation_onetrack_ndedx_ge2;
   vector<char>    *stable_event_SRValidation_onetrack_notelectron;
   vector<char>    *stable_event_SRValidation_onetrack_nothadron;
   vector<char>    *stable_event_SRValidation_onetrack_p_g50l150;
   vector<char>    *stable_event_SRValidation_onetrack_pt_g50;
   vector<char>    *stable_event_SRValidation_passGRL;
   vector<char>    *stable_event_SRValidation_preselected;
   vector<char>    *stable_track_nominal;
   vector<char>    *stable_track_nominal_TransMass;
   vector<char>    *stable_track_nominal_etaCentral;
   vector<char>    *stable_track_nominal_ionization;
   vector<char>    *stable_track_nominal_isocone;
   vector<char>    *stable_track_nominal_matchToRHadron;
   vector<char>    *stable_track_nominal_matchToRHadron_TransMass;
   vector<char>    *stable_track_nominal_matchToRHadron_etaCentral;
   vector<char>    *stable_track_nominal_matchToRHadron_ionization;
   vector<char>    *stable_track_nominal_matchToRHadron_is_RHadron;
   vector<char>    *stable_track_nominal_matchToRHadron_isocone;
   vector<char>    *stable_track_nominal_matchToRHadron_nIBLandBL;
   vector<char>    *stable_track_nominal_matchToRHadron_nSharedSplit;
   vector<char>    *stable_track_nominal_matchToRHadron_ndedx_ge2;
   vector<char>    *stable_track_nominal_matchToRHadron_notelectron;
   vector<char>    *stable_track_nominal_matchToRHadron_nothadron;
   vector<char>    *stable_track_nominal_matchToRHadron_p_g150;
   vector<char>    *stable_track_nominal_matchToRHadron_preselected;
   vector<char>    *stable_track_nominal_matchToRHadron_pt_g50;
   vector<char>    *stable_track_nominal_matchToRHadron_trk_inPV;
   vector<char>    *stable_track_nominal_nIBLandBL;
   vector<char>    *stable_track_nominal_nSharedSplit;
   vector<char>    *stable_track_nominal_ndedx_ge2;
   vector<char>    *stable_track_nominal_notelectron;
   vector<char>    *stable_track_nominal_nothadron;
   vector<char>    *stable_track_nominal_p_g150;
   vector<char>    *stable_track_nominal_preselected;
   vector<char>    *stable_track_nominal_pt_g50;
   vector<char>    *stable_track_nominal_trk_inPV;
   vector<char>    *stable_track_validation;
   vector<char>    *stable_track_validation_TransMass;
   vector<char>    *stable_track_validation_etaCentral;
   vector<char>    *stable_track_validation_ionization;
   vector<char>    *stable_track_validation_isocone;
   vector<char>    *stable_track_validation_nIBLandBL;
   vector<char>    *stable_track_validation_nSharedSplit;
   vector<char>    *stable_track_validation_ndedx_ge2;
   vector<char>    *stable_track_validation_notelectron;
   vector<char>    *stable_track_validation_nothadron;
   vector<char>    *stable_track_validation_p_g50l150;
   vector<char>    *stable_track_validation_preselected;
   vector<char>    *stable_track_validation_pt_g50;
   vector<char>    *stable_track_validation_trk_inPV;
   vector<float>   *track_BSz;
   vector<float>   *track_TransverseMass;
   vector<float>   *track_chi2;
   vector<float>   *track_corrected_pixeldEdx;
   vector<float>   *track_corrected_pixeldEdx_sigma;
   vector<float>   *track_d0;
   vector<double>  *track_d0sig;
   vector<float>   *track_dEdxBeta;
   vector<float>   *track_dEdxBetaGamma;
   vector<float>   *track_dEdxMass;
   vector<float>   *track_decayDistance;
   vector<float>   *track_emfrac;
   vector<float>   *track_eoverp;
   vector<double>  *track_eta;
   vector<unsigned char> *track_expectBLayerHits;
   vector<unsigned char> *track_expectIBLHits;
   vector<char>    *track_highEta;
   vector<char>    *track_highEta_TransMass;
   vector<char>    *track_highEta_etaHigh;
   vector<char>    *track_highEta_ionization;
   vector<char>    *track_highEta_isocone;
   vector<char>    *track_highEta_nIBLandBL;
   vector<char>    *track_highEta_nSharedSplit;
   vector<char>    *track_highEta_ndedx_ge2;
   vector<char>    *track_highEta_notelectron;
   vector<char>    *track_highEta_nothadron;
   vector<char>    *track_highEta_notmuon;
   vector<char>    *track_highEta_p_g150;
   vector<char>    *track_highEta_preselected;
   vector<char>    *track_highEta_pt_g50;
   vector<char>    *track_highEta_trk_inPV;
   vector<unsigned int> *track_hitPattern;
   vector<unsigned char> *track_isElectronBaseline;
   vector<unsigned char> *track_isElectronJet;
   vector<unsigned char> *track_isElectronSignal;
   vector<unsigned char> *track_isHadronJet;
   vector<unsigned char> *track_isMuonBaseline;
   vector<unsigned char> *track_isMuonIsolated;
   vector<unsigned char> *track_isMuonSignal;
   vector<unsigned char> *track_isRHadron;
   vector<float>   *track_isoPt;
   vector<float>   *track_jetDR;
   vector<double>  *track_jetE;
   vector<float>   *track_jetEMFrac;
   vector<double>  *track_jetSumP;
   Int_t           track_leading;
   vector<double>  *track_m;
   vector<float>   *track_muonEta;
   vector<float>   *track_muonPhi;
   vector<float>   *track_muonPt;
   vector<unsigned char> *track_nBLHits;
   vector<unsigned char> *track_nIBLHits;
   vector<unsigned char> *track_nIBLOverflowsdEdx;
   vector<unsigned char> *track_nOutliers;
   vector<unsigned char> *track_nPixelHits;
   vector<unsigned char> *track_nPixelHoles;
   vector<unsigned char> *track_nSCTHits;
   vector<unsigned char> *track_nSCTHoles;
   vector<unsigned char> *track_nSharedHits;
   vector<unsigned char> *track_nSplitHits;
   vector<unsigned char> *track_nTRTHighThresholdHits;
   vector<unsigned char> *track_nTRTHits;
   vector<unsigned char> *track_nTRTSharedHits;
   vector<unsigned char> *track_nUsedHitsdEdx;
   vector<float>   *track_ndof;
   vector<double>  *track_p;
   vector<double>  *track_phi;
   vector<float>   *track_pixeldEdx;
   vector<double>  *track_pt;
   vector<float>   *track_qoverp;
   vector<float>   *track_qoverpErr;
   vector<double>  *track_relIsoPt;
   vector<float>   *track_truthMatchProb;
   vector<int>     *track_truthParticleIndex;
   vector<double>  *track_truth_beta;
   vector<double>  *track_truth_e;
   vector<double>  *track_truth_m;
   vector<double>  *track_truth_p;
   vector<int>     *track_truth_pdgid;
   vector<double>  *track_truth_pt;
   vector<unsigned char> *track_vertextype;
   vector<float>   *track_z0;
   Int_t           trk_n;
   Double_t        truthMET;
   Double_t        truthMET_Phi;
   Double_t        truthMET_RH_OutEMCalo;
   Double_t        truthMET_RH_OutEMCalo_Phi;
   Double_t        truthMET_RH_OutEMCalo_noCRH;
   Double_t        truthMET_RH_OutEMCalo_noCRH_Phi;
   Float_t         vertex_nTrack;
   Float_t         vertex_z;

   // List of branches
   TBranch        *b_EventNumber;   //!
   TBranch        *b_FinalWeight;   //!
   TBranch        *b_HLT_noalg_L1J400;   //!
   TBranch        *b_HLT_xe100_mht_L1XE50;   //!
   TBranch        *b_HLT_xe100_pufit_L1XE50;   //!
   TBranch        *b_HLT_xe100_pufit_L1XE55;   //!
   TBranch        *b_HLT_xe110_mht_L1XE50;   //!
   TBranch        *b_HLT_xe110_pufit_L1XE50;   //!
   TBranch        *b_HLT_xe110_pufit_L1XE55;   //!
   TBranch        *b_HLT_xe110_pufit_xe65_L1XE50;   //!
   TBranch        *b_HLT_xe110_pufit_xe70_L1XE50;   //!
   TBranch        *b_HLT_xe120_pufit_L1XE50;   //!
   TBranch        *b_HLT_xe70;   //!
   TBranch        *b_HLT_xe70_mht;   //!
   TBranch        *b_HLT_xe90_mht_L1XE50;   //!
   TBranch        *b_HLT_xe90_pufit_L1XE50;   //!
   TBranch        *b_L1_XE50;   //!
   TBranch        *b_PileUpWeight;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_averageIntPerCrossing;   //!
   TBranch        *b_calomet;   //!
   TBranch        *b_eventCleaning;   //!
   TBranch        *b_hasBadLLPJet;   //!
   TBranch        *b_hasValidRHadron;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_leadingJetMetDPhi;   //!
   TBranch        *b_leadingJetPt;   //!
   TBranch        *b_lowestUP_met_trigger;   //!
   TBranch        *b_main_event_Bkg1Nominal;   //!
   TBranch        *b_main_event_Bkg1Nominal_EventCleaning;   //!
   TBranch        *b_main_event_Bkg1Nominal_NoBadJets;   //!
   TBranch        *b_main_event_Bkg1Nominal_NoBadMuons;   //!
   TBranch        *b_main_event_Bkg1Nominal_OfflineMET;   //!
   TBranch        *b_main_event_Bkg1Nominal_PV;   //!
   TBranch        *b_main_event_Bkg1Nominal_Trigger;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_TransMass;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_etaCentral;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_in_pv;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_isocone;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_notelectron;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_nothadron;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_notmuon;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_p_g150;   //!
   TBranch        *b_main_event_Bkg1Nominal_onetrack_pt_g50;   //!
   TBranch        *b_main_event_Bkg1Nominal_passGRL;   //!
   TBranch        *b_main_event_Bkg1Nominal_preselected;   //!
   TBranch        *b_main_event_Bkg1Validation;   //!
   TBranch        *b_main_event_Bkg1Validation_EventCleaning;   //!
   TBranch        *b_main_event_Bkg1Validation_NoBadJets;   //!
   TBranch        *b_main_event_Bkg1Validation_NoBadMuons;   //!
   TBranch        *b_main_event_Bkg1Validation_OfflineMET;   //!
   TBranch        *b_main_event_Bkg1Validation_PV;   //!
   TBranch        *b_main_event_Bkg1Validation_Trigger;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_TransMass;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_etaCentral;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_in_pv;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_ionization;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_isocone;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_notelectron;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_nothadron;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_notmuon;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_p_g50l150;   //!
   TBranch        *b_main_event_Bkg1Validation_onetrack_pt_g50;   //!
   TBranch        *b_main_event_Bkg1Validation_passGRL;   //!
   TBranch        *b_main_event_Bkg1Validation_preselected;   //!
   TBranch        *b_main_event_Bkg2Nominal;   //!
   TBranch        *b_main_event_Bkg2Nominal_EventCleaning;   //!
   TBranch        *b_main_event_Bkg2Nominal_NoBadJets;   //!
   TBranch        *b_main_event_Bkg2Nominal_NoBadMuons;   //!
   TBranch        *b_main_event_Bkg2Nominal_OfflineMET;   //!
   TBranch        *b_main_event_Bkg2Nominal_PV;   //!
   TBranch        *b_main_event_Bkg2Nominal_Trigger;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_TransMass;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_etaCentral;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_in_pv;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_isocone;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_notelectron;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_nothadron;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_notmuon;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_p_g150;   //!
   TBranch        *b_main_event_Bkg2Nominal_onetrack_pt_g50;   //!
   TBranch        *b_main_event_Bkg2Nominal_passGRL;   //!
   TBranch        *b_main_event_Bkg2Nominal_preselected;   //!
   TBranch        *b_main_event_Bkg2Validation;   //!
   TBranch        *b_main_event_Bkg2Validation_EventCleaning;   //!
   TBranch        *b_main_event_Bkg2Validation_NoBadJets;   //!
   TBranch        *b_main_event_Bkg2Validation_NoBadMuons;   //!
   TBranch        *b_main_event_Bkg2Validation_OfflineMET;   //!
   TBranch        *b_main_event_Bkg2Validation_PV;   //!
   TBranch        *b_main_event_Bkg2Validation_Trigger;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_TransMass;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_etaCentral;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_in_pv;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_isocone;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_notelectron;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_nothadron;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_notmuon;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_p_g50l150;   //!
   TBranch        *b_main_event_Bkg2Validation_onetrack_pt_g50;   //!
   TBranch        *b_main_event_Bkg2Validation_passGRL;   //!
   TBranch        *b_main_event_Bkg2Validation_preselected;   //!
   TBranch        *b_main_event_SRNominal;   //!
   TBranch        *b_main_event_SRNominal_EventCleaning;   //!
   TBranch        *b_main_event_SRNominal_NoBadJets;   //!
   TBranch        *b_main_event_SRNominal_NoBadMuons;   //!
   TBranch        *b_main_event_SRNominal_OfflineMET;   //!
   TBranch        *b_main_event_SRNominal_PV;   //!
   TBranch        *b_main_event_SRNominal_Trigger;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_EventCleaning;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_NoBadJets;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_NoBadMuons;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_OfflineMET;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_PV;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_Trigger;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_TransMass;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_etaCentral;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_in_pv;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_ionization;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_is_RHadron;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_isocone;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_notelectron;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_nothadron;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_notmuon;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_p_g150;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_onetrack_pt_g50;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_passGRL;   //!
   TBranch        *b_main_event_SRNominal_matchToRHadron_preselected;   //!
   TBranch        *b_main_event_SRNominal_onetrack_TransMass;   //!
   TBranch        *b_main_event_SRNominal_onetrack_etaCentral;   //!
   TBranch        *b_main_event_SRNominal_onetrack_in_pv;   //!
   TBranch        *b_main_event_SRNominal_onetrack_ionization;   //!
   TBranch        *b_main_event_SRNominal_onetrack_isocone;   //!
   TBranch        *b_main_event_SRNominal_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_SRNominal_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_SRNominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_SRNominal_onetrack_notelectron;   //!
   TBranch        *b_main_event_SRNominal_onetrack_nothadron;   //!
   TBranch        *b_main_event_SRNominal_onetrack_notmuon;   //!
   TBranch        *b_main_event_SRNominal_onetrack_p_g150;   //!
   TBranch        *b_main_event_SRNominal_onetrack_pt_g50;   //!
   TBranch        *b_main_event_SRNominal_passGRL;   //!
   TBranch        *b_main_event_SRNominal_preselected;   //!
   TBranch        *b_main_event_SRValidation;   //!
   TBranch        *b_main_event_SRValidation_EventCleaning;   //!
   TBranch        *b_main_event_SRValidation_NoBadJets;   //!
   TBranch        *b_main_event_SRValidation_NoBadMuons;   //!
   TBranch        *b_main_event_SRValidation_OfflineMET;   //!
   TBranch        *b_main_event_SRValidation_PV;   //!
   TBranch        *b_main_event_SRValidation_Trigger;   //!
   TBranch        *b_main_event_SRValidation_onetrack_TransMass;   //!
   TBranch        *b_main_event_SRValidation_onetrack_etaCentral;   //!
   TBranch        *b_main_event_SRValidation_onetrack_in_pv;   //!
   TBranch        *b_main_event_SRValidation_onetrack_isocone;   //!
   TBranch        *b_main_event_SRValidation_onetrack_nIBLandBL;   //!
   TBranch        *b_main_event_SRValidation_onetrack_nSharedSplit;   //!
   TBranch        *b_main_event_SRValidation_onetrack_ndedx_ge2;   //!
   TBranch        *b_main_event_SRValidation_onetrack_notelectron;   //!
   TBranch        *b_main_event_SRValidation_onetrack_nothadron;   //!
   TBranch        *b_main_event_SRValidation_onetrack_notmuon;   //!
   TBranch        *b_main_event_SRValidation_onetrack_p_g50l150;   //!
   TBranch        *b_main_event_SRValidation_onetrack_pt_g50;   //!
   TBranch        *b_main_event_SRValidation_passGRL;   //!
   TBranch        *b_main_event_SRValidation_preselected;   //!
   TBranch        *b_main_track_nominal;   //!
   TBranch        *b_main_track_nominal_TransMass;   //!
   TBranch        *b_main_track_nominal_etaCentral;   //!
   TBranch        *b_main_track_nominal_ionization;   //!
   TBranch        *b_main_track_nominal_isocone;   //!
   TBranch        *b_main_track_nominal_matchToRHadron;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_TransMass;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_etaCentral;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_ionization;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_is_RHadron;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_isocone;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_nIBLandBL;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_nSharedSplit;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_ndedx_ge2;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_notelectron;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_nothadron;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_notmuon;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_p_g150;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_preselected;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_pt_g50;   //!
   TBranch        *b_main_track_nominal_matchToRHadron_trk_inPV;   //!
   TBranch        *b_main_track_nominal_nIBLandBL;   //!
   TBranch        *b_main_track_nominal_nSharedSplit;   //!
   TBranch        *b_main_track_nominal_ndedx_ge2;   //!
   TBranch        *b_main_track_nominal_notelectron;   //!
   TBranch        *b_main_track_nominal_nothadron;   //!
   TBranch        *b_main_track_nominal_notmuon;   //!
   TBranch        *b_main_track_nominal_p_g150;   //!
   TBranch        *b_main_track_nominal_preselected;   //!
   TBranch        *b_main_track_nominal_pt_g50;   //!
   TBranch        *b_main_track_nominal_trk_inPV;   //!
   TBranch        *b_main_track_validation;   //!
   TBranch        *b_main_track_validation_TransMass;   //!
   TBranch        *b_main_track_validation_etaCentral;   //!
   TBranch        *b_main_track_validation_ionization;   //!
   TBranch        *b_main_track_validation_isocone;   //!
   TBranch        *b_main_track_validation_nIBLandBL;   //!
   TBranch        *b_main_track_validation_nSharedSplit;   //!
   TBranch        *b_main_track_validation_ndedx_ge2;   //!
   TBranch        *b_main_track_validation_notelectron;   //!
   TBranch        *b_main_track_validation_nothadron;   //!
   TBranch        *b_main_track_validation_notmuon;   //!
   TBranch        *b_main_track_validation_p_g50l150;   //!
   TBranch        *b_main_track_validation_preselected;   //!
   TBranch        *b_main_track_validation_pt_g50;   //!
   TBranch        *b_main_track_validation_trk_inPV;   //!
   TBranch        *b_mcEventWeight;   //!
   TBranch        *b_met;   //!
   TBranch        *b_met_mpx;   //!
   TBranch        *b_met_mpy;   //!
   TBranch        *b_met_muons;   //!
   TBranch        *b_met_noMuons;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_refjet;   //!
   TBranch        *b_met_soft;   //!
   TBranch        *b_nBaselineElectrons;   //!
   TBranch        *b_nBaselineMuons;   //!
   TBranch        *b_nChargedRHadron;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_nNeutralRHadron;   //!
   TBranch        *b_nSignalElectrons;   //!
   TBranch        *b_nSignalMuons;   //!
   TBranch        *b_nVertex;   //!
   TBranch        *b_stable_event_Bkg1Nominal;   //!
   TBranch        *b_stable_event_Bkg1Nominal_EventCleaning;   //!
   TBranch        *b_stable_event_Bkg1Nominal_NoBadJets;   //!
   TBranch        *b_stable_event_Bkg1Nominal_OfflineMET;   //!
   TBranch        *b_stable_event_Bkg1Nominal_PV;   //!
   TBranch        *b_stable_event_Bkg1Nominal_Trigger;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_TransMass;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_in_pv;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_ionization;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_isocone;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_notelectron;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_nothadron;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_p_g150;   //!
   TBranch        *b_stable_event_Bkg1Nominal_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_Bkg1Nominal_passGRL;   //!
   TBranch        *b_stable_event_Bkg1Nominal_preselected;   //!
   TBranch        *b_stable_event_Bkg1Validation;   //!
   TBranch        *b_stable_event_Bkg1Validation_EventCleaning;   //!
   TBranch        *b_stable_event_Bkg1Validation_NoBadJets;   //!
   TBranch        *b_stable_event_Bkg1Validation_OfflineMET;   //!
   TBranch        *b_stable_event_Bkg1Validation_PV;   //!
   TBranch        *b_stable_event_Bkg1Validation_Trigger;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_TransMass;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_in_pv;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_ionization;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_isocone;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_notelectron;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_nothadron;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_p_g50l150;   //!
   TBranch        *b_stable_event_Bkg1Validation_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_Bkg1Validation_passGRL;   //!
   TBranch        *b_stable_event_Bkg1Validation_preselected;   //!
   TBranch        *b_stable_event_Bkg2Nominal;   //!
   TBranch        *b_stable_event_Bkg2Nominal_EventCleaning;   //!
   TBranch        *b_stable_event_Bkg2Nominal_NoBadJets;   //!
   TBranch        *b_stable_event_Bkg2Nominal_OfflineMET;   //!
   TBranch        *b_stable_event_Bkg2Nominal_PV;   //!
   TBranch        *b_stable_event_Bkg2Nominal_Trigger;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_TransMass;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_in_pv;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_isocone;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_notelectron;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_nothadron;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_p_g150;   //!
   TBranch        *b_stable_event_Bkg2Nominal_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_Bkg2Nominal_passGRL;   //!
   TBranch        *b_stable_event_Bkg2Nominal_preselected;   //!
   TBranch        *b_stable_event_Bkg2Validation;   //!
   TBranch        *b_stable_event_Bkg2Validation_EventCleaning;   //!
   TBranch        *b_stable_event_Bkg2Validation_NoBadJets;   //!
   TBranch        *b_stable_event_Bkg2Validation_OfflineMET;   //!
   TBranch        *b_stable_event_Bkg2Validation_PV;   //!
   TBranch        *b_stable_event_Bkg2Validation_Trigger;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_TransMass;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_in_pv;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_isocone;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_notelectron;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_nothadron;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_p_g50l150;   //!
   TBranch        *b_stable_event_Bkg2Validation_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_Bkg2Validation_passGRL;   //!
   TBranch        *b_stable_event_Bkg2Validation_preselected;   //!
   TBranch        *b_stable_event_SRNominal;   //!
   TBranch        *b_stable_event_SRNominal_EventCleaning;   //!
   TBranch        *b_stable_event_SRNominal_NoBadJets;   //!
   TBranch        *b_stable_event_SRNominal_OfflineMET;   //!
   TBranch        *b_stable_event_SRNominal_PV;   //!
   TBranch        *b_stable_event_SRNominal_Trigger;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_EventCleaning;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_NoBadJets;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_OfflineMET;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_PV;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_Trigger;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_TransMass;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_in_pv;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_ionization;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_isocone;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_notelectron;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_nothadron;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_p_g150;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_passGRL;   //!
   TBranch        *b_stable_event_SRNominal_matchToRHadron_preselected;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_TransMass;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_in_pv;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_ionization;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_isocone;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_notelectron;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_nothadron;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_p_g150;   //!
   TBranch        *b_stable_event_SRNominal_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_SRNominal_passGRL;   //!
   TBranch        *b_stable_event_SRNominal_preselected;   //!
   TBranch        *b_stable_event_SRValidation;   //!
   TBranch        *b_stable_event_SRValidation_EventCleaning;   //!
   TBranch        *b_stable_event_SRValidation_NoBadJets;   //!
   TBranch        *b_stable_event_SRValidation_OfflineMET;   //!
   TBranch        *b_stable_event_SRValidation_PV;   //!
   TBranch        *b_stable_event_SRValidation_Trigger;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_TransMass;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_etaCentral;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_in_pv;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_isocone;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_nIBLandBL;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_nSharedSplit;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_ndedx_ge2;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_notelectron;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_nothadron;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_p_g50l150;   //!
   TBranch        *b_stable_event_SRValidation_onetrack_pt_g50;   //!
   TBranch        *b_stable_event_SRValidation_passGRL;   //!
   TBranch        *b_stable_event_SRValidation_preselected;   //!
   TBranch        *b_stable_track_nominal;   //!
   TBranch        *b_stable_track_nominal_TransMass;   //!
   TBranch        *b_stable_track_nominal_etaCentral;   //!
   TBranch        *b_stable_track_nominal_ionization;   //!
   TBranch        *b_stable_track_nominal_isocone;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_TransMass;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_etaCentral;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_ionization;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_is_RHadron;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_isocone;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_nIBLandBL;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_nSharedSplit;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_ndedx_ge2;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_notelectron;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_nothadron;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_p_g150;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_preselected;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_pt_g50;   //!
   TBranch        *b_stable_track_nominal_matchToRHadron_trk_inPV;   //!
   TBranch        *b_stable_track_nominal_nIBLandBL;   //!
   TBranch        *b_stable_track_nominal_nSharedSplit;   //!
   TBranch        *b_stable_track_nominal_ndedx_ge2;   //!
   TBranch        *b_stable_track_nominal_notelectron;   //!
   TBranch        *b_stable_track_nominal_nothadron;   //!
   TBranch        *b_stable_track_nominal_p_g150;   //!
   TBranch        *b_stable_track_nominal_preselected;   //!
   TBranch        *b_stable_track_nominal_pt_g50;   //!
   TBranch        *b_stable_track_nominal_trk_inPV;   //!
   TBranch        *b_stable_track_validation;   //!
   TBranch        *b_stable_track_validation_TransMass;   //!
   TBranch        *b_stable_track_validation_etaCentral;   //!
   TBranch        *b_stable_track_validation_ionization;   //!
   TBranch        *b_stable_track_validation_isocone;   //!
   TBranch        *b_stable_track_validation_nIBLandBL;   //!
   TBranch        *b_stable_track_validation_nSharedSplit;   //!
   TBranch        *b_stable_track_validation_ndedx_ge2;   //!
   TBranch        *b_stable_track_validation_notelectron;   //!
   TBranch        *b_stable_track_validation_nothadron;   //!
   TBranch        *b_stable_track_validation_p_g50l150;   //!
   TBranch        *b_stable_track_validation_preselected;   //!
   TBranch        *b_stable_track_validation_pt_g50;   //!
   TBranch        *b_stable_track_validation_trk_inPV;   //!
   TBranch        *b_track_BSz;   //!
   TBranch        *b_track_TransverseMass;   //!
   TBranch        *b_track_chi2;   //!
   TBranch        *b_track_corrected_pixeldEdx;   //!
   TBranch        *b_track_corrected_pixeldEdx_sigma;   //!
   TBranch        *b_track_d0;   //!
   TBranch        *b_track_d0sig;   //!
   TBranch        *b_track_dEdxBeta;   //!
   TBranch        *b_track_dEdxBetaGamma;   //!
   TBranch        *b_track_dEdxMass;   //!
   TBranch        *b_track_decayDistance;   //!
   TBranch        *b_track_emfrac;   //!
   TBranch        *b_track_eoverp;   //!
   TBranch        *b_track_eta;   //!
   TBranch        *b_track_expectBLayerHits;   //!
   TBranch        *b_track_expectIBLHits;   //!
   TBranch        *b_track_highEta;   //!
   TBranch        *b_track_highEta_TransMass;   //!
   TBranch        *b_track_highEta_etaHigh;   //!
   TBranch        *b_track_highEta_ionization;   //!
   TBranch        *b_track_highEta_isocone;   //!
   TBranch        *b_track_highEta_nIBLandBL;   //!
   TBranch        *b_track_highEta_nSharedSplit;   //!
   TBranch        *b_track_highEta_ndedx_ge2;   //!
   TBranch        *b_track_highEta_notelectron;   //!
   TBranch        *b_track_highEta_nothadron;   //!
   TBranch        *b_track_highEta_notmuon;   //!
   TBranch        *b_track_highEta_p_g150;   //!
   TBranch        *b_track_highEta_preselected;   //!
   TBranch        *b_track_highEta_pt_g50;   //!
   TBranch        *b_track_highEta_trk_inPV;   //!
   TBranch        *b_track_hitPattern;   //!
   TBranch        *b_track_isElectronBaseline;   //!
   TBranch        *b_track_isElectronJet;   //!
   TBranch        *b_track_isElectronSignal;   //!
   TBranch        *b_track_isHadronJet;   //!
   TBranch        *b_track_isMuonBaseline;   //!
   TBranch        *b_track_isMuonIsolated;   //!
   TBranch        *b_track_isMuonSignal;   //!
   TBranch        *b_track_isRHadron;   //!
   TBranch        *b_track_isoPt;   //!
   TBranch        *b_track_jetDR;   //!
   TBranch        *b_track_jetE;   //!
   TBranch        *b_track_jetEMFrac;   //!
   TBranch        *b_track_jetSumP;   //!
   TBranch        *b_track_leading;   //!
   TBranch        *b_track_m;   //!
   TBranch        *b_track_muonEta;   //!
   TBranch        *b_track_muonPhi;   //!
   TBranch        *b_track_muonPt;   //!
   TBranch        *b_track_nBLHits;   //!
   TBranch        *b_track_nIBLHits;   //!
   TBranch        *b_track_nIBLOverflowsdEdx;   //!
   TBranch        *b_track_nOutliers;   //!
   TBranch        *b_track_nPixelHits;   //!
   TBranch        *b_track_nPixelHoles;   //!
   TBranch        *b_track_nSCTHits;   //!
   TBranch        *b_track_nSCTHoles;   //!
   TBranch        *b_track_nSharedHits;   //!
   TBranch        *b_track_nSplitHits;   //!
   TBranch        *b_track_nTRTHighThresholdHits;   //!
   TBranch        *b_track_nTRTHits;   //!
   TBranch        *b_track_nTRTSharedHits;   //!
   TBranch        *b_track_nUsedHitsdEdx;   //!
   TBranch        *b_track_ndof;   //!
   TBranch        *b_track_p;   //!
   TBranch        *b_track_phi;   //!
   TBranch        *b_track_pixeldEdx;   //!
   TBranch        *b_track_pt;   //!
   TBranch        *b_track_qoverp;   //!
   TBranch        *b_track_qoverpErr;   //!
   TBranch        *b_track_relIsoPt;   //!
   TBranch        *b_track_truthMatchProb;   //!
   TBranch        *b_track_truthParticleIndex;   //!
   TBranch        *b_track_truth_beta;   //!
   TBranch        *b_track_truth_e;   //!
   TBranch        *b_track_truth_m;   //!
   TBranch        *b_track_truth_p;   //!
   TBranch        *b_track_truth_pdgid;   //!
   TBranch        *b_track_truth_pt;   //!
   TBranch        *b_track_vertextype;   //!
   TBranch        *b_track_z0;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_truthMET;   //!
   TBranch        *b_truthMET_Phi;   //!
   TBranch        *b_truthMET_RH_OutEMCalo;   //!
   TBranch        *b_truthMET_RH_OutEMCalo_Phi;   //!
   TBranch        *b_truthMET_RH_OutEMCalo_noCRH;   //!
   TBranch        *b_truthMET_RH_OutEMCalo_noCRH_Phi;   //!
   TBranch        *b_vertex_nTrack;   //!
   TBranch        *b_vertex_z;   //!

   eff(TTree *tree=0);
   virtual ~eff();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef eff_cxx
eff::eff(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("mc16_13TeV.448390.MGPy8EG_A14N23LO_mAMSB_C1N1_5000_31400_LL0p2_MET60.deriv.DAOD_SUSY6.e7157_e5984_s3353_r9364_r9315_p3877.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("mc16_13TeV.448390.MGPy8EG_A14N23LO_mAMSB_C1N1_5000_31400_LL0p2_MET60.deriv.DAOD_SUSY6.e7157_e5984_s3353_r9364_r9315_p3877.root");
      }
      f->GetObject("ntupOutput",tree);

   }
   Init(tree);
}

eff::~eff()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t eff::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t eff::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void eff::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jet_eta = 0;
   jet_phi = 0;
   jet_pt = 0;
   main_event_Bkg1Nominal = 0;
   main_event_Bkg1Nominal_EventCleaning = 0;
   main_event_Bkg1Nominal_NoBadJets = 0;
   main_event_Bkg1Nominal_NoBadMuons = 0;
   main_event_Bkg1Nominal_OfflineMET = 0;
   main_event_Bkg1Nominal_PV = 0;
   main_event_Bkg1Nominal_Trigger = 0;
   main_event_Bkg1Nominal_onetrack_TransMass = 0;
   main_event_Bkg1Nominal_onetrack_etaCentral = 0;
   main_event_Bkg1Nominal_onetrack_in_pv = 0;
   main_event_Bkg1Nominal_onetrack_isocone = 0;
   main_event_Bkg1Nominal_onetrack_nIBLandBL = 0;
   main_event_Bkg1Nominal_onetrack_nSharedSplit = 0;
   main_event_Bkg1Nominal_onetrack_ndedx_ge2 = 0;
   main_event_Bkg1Nominal_onetrack_notelectron = 0;
   main_event_Bkg1Nominal_onetrack_nothadron = 0;
   main_event_Bkg1Nominal_onetrack_notmuon = 0;
   main_event_Bkg1Nominal_onetrack_p_g150 = 0;
   main_event_Bkg1Nominal_onetrack_pt_g50 = 0;
   main_event_Bkg1Nominal_passGRL = 0;
   main_event_Bkg1Nominal_preselected = 0;
   main_event_Bkg1Validation = 0;
   main_event_Bkg1Validation_EventCleaning = 0;
   main_event_Bkg1Validation_NoBadJets = 0;
   main_event_Bkg1Validation_NoBadMuons = 0;
   main_event_Bkg1Validation_OfflineMET = 0;
   main_event_Bkg1Validation_PV = 0;
   main_event_Bkg1Validation_Trigger = 0;
   main_event_Bkg1Validation_onetrack_TransMass = 0;
   main_event_Bkg1Validation_onetrack_etaCentral = 0;
   main_event_Bkg1Validation_onetrack_in_pv = 0;
   main_event_Bkg1Validation_onetrack_ionization = 0;
   main_event_Bkg1Validation_onetrack_isocone = 0;
   main_event_Bkg1Validation_onetrack_nIBLandBL = 0;
   main_event_Bkg1Validation_onetrack_nSharedSplit = 0;
   main_event_Bkg1Validation_onetrack_ndedx_ge2 = 0;
   main_event_Bkg1Validation_onetrack_notelectron = 0;
   main_event_Bkg1Validation_onetrack_nothadron = 0;
   main_event_Bkg1Validation_onetrack_notmuon = 0;
   main_event_Bkg1Validation_onetrack_p_g50l150 = 0;
   main_event_Bkg1Validation_onetrack_pt_g50 = 0;
   main_event_Bkg1Validation_passGRL = 0;
   main_event_Bkg1Validation_preselected = 0;
   main_event_Bkg2Nominal = 0;
   main_event_Bkg2Nominal_EventCleaning = 0;
   main_event_Bkg2Nominal_NoBadJets = 0;
   main_event_Bkg2Nominal_NoBadMuons = 0;
   main_event_Bkg2Nominal_OfflineMET = 0;
   main_event_Bkg2Nominal_PV = 0;
   main_event_Bkg2Nominal_Trigger = 0;
   main_event_Bkg2Nominal_onetrack_TransMass = 0;
   main_event_Bkg2Nominal_onetrack_etaCentral = 0;
   main_event_Bkg2Nominal_onetrack_in_pv = 0;
   main_event_Bkg2Nominal_onetrack_isocone = 0;
   main_event_Bkg2Nominal_onetrack_nIBLandBL = 0;
   main_event_Bkg2Nominal_onetrack_nSharedSplit = 0;
   main_event_Bkg2Nominal_onetrack_ndedx_ge2 = 0;
   main_event_Bkg2Nominal_onetrack_notelectron = 0;
   main_event_Bkg2Nominal_onetrack_nothadron = 0;
   main_event_Bkg2Nominal_onetrack_notmuon = 0;
   main_event_Bkg2Nominal_onetrack_p_g150 = 0;
   main_event_Bkg2Nominal_onetrack_pt_g50 = 0;
   main_event_Bkg2Nominal_passGRL = 0;
   main_event_Bkg2Nominal_preselected = 0;
   main_event_Bkg2Validation = 0;
   main_event_Bkg2Validation_EventCleaning = 0;
   main_event_Bkg2Validation_NoBadJets = 0;
   main_event_Bkg2Validation_NoBadMuons = 0;
   main_event_Bkg2Validation_OfflineMET = 0;
   main_event_Bkg2Validation_PV = 0;
   main_event_Bkg2Validation_Trigger = 0;
   main_event_Bkg2Validation_onetrack_TransMass = 0;
   main_event_Bkg2Validation_onetrack_etaCentral = 0;
   main_event_Bkg2Validation_onetrack_in_pv = 0;
   main_event_Bkg2Validation_onetrack_isocone = 0;
   main_event_Bkg2Validation_onetrack_nIBLandBL = 0;
   main_event_Bkg2Validation_onetrack_nSharedSplit = 0;
   main_event_Bkg2Validation_onetrack_ndedx_ge2 = 0;
   main_event_Bkg2Validation_onetrack_notelectron = 0;
   main_event_Bkg2Validation_onetrack_nothadron = 0;
   main_event_Bkg2Validation_onetrack_notmuon = 0;
   main_event_Bkg2Validation_onetrack_p_g50l150 = 0;
   main_event_Bkg2Validation_onetrack_pt_g50 = 0;
   main_event_Bkg2Validation_passGRL = 0;
   main_event_Bkg2Validation_preselected = 0;
   main_event_SRNominal = 0;
   main_event_SRNominal_EventCleaning = 0;
   main_event_SRNominal_NoBadJets = 0;
   main_event_SRNominal_NoBadMuons = 0;
   main_event_SRNominal_OfflineMET = 0;
   main_event_SRNominal_PV = 0;
   main_event_SRNominal_Trigger = 0;
   main_event_SRNominal_matchToRHadron = 0;
   main_event_SRNominal_matchToRHadron_EventCleaning = 0;
   main_event_SRNominal_matchToRHadron_NoBadJets = 0;
   main_event_SRNominal_matchToRHadron_NoBadMuons = 0;
   main_event_SRNominal_matchToRHadron_OfflineMET = 0;
   main_event_SRNominal_matchToRHadron_PV = 0;
   main_event_SRNominal_matchToRHadron_Trigger = 0;
   main_event_SRNominal_matchToRHadron_onetrack_TransMass = 0;
   main_event_SRNominal_matchToRHadron_onetrack_etaCentral = 0;
   main_event_SRNominal_matchToRHadron_onetrack_in_pv = 0;
   main_event_SRNominal_matchToRHadron_onetrack_ionization = 0;
   main_event_SRNominal_matchToRHadron_onetrack_is_RHadron = 0;
   main_event_SRNominal_matchToRHadron_onetrack_isocone = 0;
   main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL = 0;
   main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit = 0;
   main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2 = 0;
   main_event_SRNominal_matchToRHadron_onetrack_notelectron = 0;
   main_event_SRNominal_matchToRHadron_onetrack_nothadron = 0;
   main_event_SRNominal_matchToRHadron_onetrack_notmuon = 0;
   main_event_SRNominal_matchToRHadron_onetrack_p_g150 = 0;
   main_event_SRNominal_matchToRHadron_onetrack_pt_g50 = 0;
   main_event_SRNominal_matchToRHadron_passGRL = 0;
   main_event_SRNominal_matchToRHadron_preselected = 0;
   main_event_SRNominal_onetrack_TransMass = 0;
   main_event_SRNominal_onetrack_etaCentral = 0;
   main_event_SRNominal_onetrack_in_pv = 0;
   main_event_SRNominal_onetrack_ionization = 0;
   main_event_SRNominal_onetrack_isocone = 0;
   main_event_SRNominal_onetrack_nIBLandBL = 0;
   main_event_SRNominal_onetrack_nSharedSplit = 0;
   main_event_SRNominal_onetrack_ndedx_ge2 = 0;
   main_event_SRNominal_onetrack_notelectron = 0;
   main_event_SRNominal_onetrack_nothadron = 0;
   main_event_SRNominal_onetrack_notmuon = 0;
   main_event_SRNominal_onetrack_p_g150 = 0;
   main_event_SRNominal_onetrack_pt_g50 = 0;
   main_event_SRNominal_passGRL = 0;
   main_event_SRNominal_preselected = 0;
   main_event_SRValidation = 0;
   main_event_SRValidation_EventCleaning = 0;
   main_event_SRValidation_NoBadJets = 0;
   main_event_SRValidation_NoBadMuons = 0;
   main_event_SRValidation_OfflineMET = 0;
   main_event_SRValidation_PV = 0;
   main_event_SRValidation_Trigger = 0;
   main_event_SRValidation_onetrack_TransMass = 0;
   main_event_SRValidation_onetrack_etaCentral = 0;
   main_event_SRValidation_onetrack_in_pv = 0;
   main_event_SRValidation_onetrack_isocone = 0;
   main_event_SRValidation_onetrack_nIBLandBL = 0;
   main_event_SRValidation_onetrack_nSharedSplit = 0;
   main_event_SRValidation_onetrack_ndedx_ge2 = 0;
   main_event_SRValidation_onetrack_notelectron = 0;
   main_event_SRValidation_onetrack_nothadron = 0;
   main_event_SRValidation_onetrack_notmuon = 0;
   main_event_SRValidation_onetrack_p_g50l150 = 0;
   main_event_SRValidation_onetrack_pt_g50 = 0;
   main_event_SRValidation_passGRL = 0;
   main_event_SRValidation_preselected = 0;
   main_track_nominal = 0;
   main_track_nominal_TransMass = 0;
   main_track_nominal_etaCentral = 0;
   main_track_nominal_ionization = 0;
   main_track_nominal_isocone = 0;
   main_track_nominal_matchToRHadron = 0;
   main_track_nominal_matchToRHadron_TransMass = 0;
   main_track_nominal_matchToRHadron_etaCentral = 0;
   main_track_nominal_matchToRHadron_ionization = 0;
   main_track_nominal_matchToRHadron_is_RHadron = 0;
   main_track_nominal_matchToRHadron_isocone = 0;
   main_track_nominal_matchToRHadron_nIBLandBL = 0;
   main_track_nominal_matchToRHadron_nSharedSplit = 0;
   main_track_nominal_matchToRHadron_ndedx_ge2 = 0;
   main_track_nominal_matchToRHadron_notelectron = 0;
   main_track_nominal_matchToRHadron_nothadron = 0;
   main_track_nominal_matchToRHadron_notmuon = 0;
   main_track_nominal_matchToRHadron_p_g150 = 0;
   main_track_nominal_matchToRHadron_preselected = 0;
   main_track_nominal_matchToRHadron_pt_g50 = 0;
   main_track_nominal_matchToRHadron_trk_inPV = 0;
   main_track_nominal_nIBLandBL = 0;
   main_track_nominal_nSharedSplit = 0;
   main_track_nominal_ndedx_ge2 = 0;
   main_track_nominal_notelectron = 0;
   main_track_nominal_nothadron = 0;
   main_track_nominal_notmuon = 0;
   main_track_nominal_p_g150 = 0;
   main_track_nominal_preselected = 0;
   main_track_nominal_pt_g50 = 0;
   main_track_nominal_trk_inPV = 0;
   main_track_validation = 0;
   main_track_validation_TransMass = 0;
   main_track_validation_etaCentral = 0;
   main_track_validation_ionization = 0;
   main_track_validation_isocone = 0;
   main_track_validation_nIBLandBL = 0;
   main_track_validation_nSharedSplit = 0;
   main_track_validation_ndedx_ge2 = 0;
   main_track_validation_notelectron = 0;
   main_track_validation_nothadron = 0;
   main_track_validation_notmuon = 0;
   main_track_validation_p_g50l150 = 0;
   main_track_validation_preselected = 0;
   main_track_validation_pt_g50 = 0;
   main_track_validation_trk_inPV = 0;
   stable_event_Bkg1Nominal = 0;
   stable_event_Bkg1Nominal_EventCleaning = 0;
   stable_event_Bkg1Nominal_NoBadJets = 0;
   stable_event_Bkg1Nominal_OfflineMET = 0;
   stable_event_Bkg1Nominal_PV = 0;
   stable_event_Bkg1Nominal_Trigger = 0;
   stable_event_Bkg1Nominal_onetrack_TransMass = 0;
   stable_event_Bkg1Nominal_onetrack_etaCentral = 0;
   stable_event_Bkg1Nominal_onetrack_in_pv = 0;
   stable_event_Bkg1Nominal_onetrack_ionization = 0;
   stable_event_Bkg1Nominal_onetrack_isocone = 0;
   stable_event_Bkg1Nominal_onetrack_nIBLandBL = 0;
   stable_event_Bkg1Nominal_onetrack_nSharedSplit = 0;
   stable_event_Bkg1Nominal_onetrack_ndedx_ge2 = 0;
   stable_event_Bkg1Nominal_onetrack_notelectron = 0;
   stable_event_Bkg1Nominal_onetrack_nothadron = 0;
   stable_event_Bkg1Nominal_onetrack_p_g150 = 0;
   stable_event_Bkg1Nominal_onetrack_pt_g50 = 0;
   stable_event_Bkg1Nominal_passGRL = 0;
   stable_event_Bkg1Nominal_preselected = 0;
   stable_event_Bkg1Validation = 0;
   stable_event_Bkg1Validation_EventCleaning = 0;
   stable_event_Bkg1Validation_NoBadJets = 0;
   stable_event_Bkg1Validation_OfflineMET = 0;
   stable_event_Bkg1Validation_PV = 0;
   stable_event_Bkg1Validation_Trigger = 0;
   stable_event_Bkg1Validation_onetrack_TransMass = 0;
   stable_event_Bkg1Validation_onetrack_etaCentral = 0;
   stable_event_Bkg1Validation_onetrack_in_pv = 0;
   stable_event_Bkg1Validation_onetrack_ionization = 0;
   stable_event_Bkg1Validation_onetrack_isocone = 0;
   stable_event_Bkg1Validation_onetrack_nIBLandBL = 0;
   stable_event_Bkg1Validation_onetrack_nSharedSplit = 0;
   stable_event_Bkg1Validation_onetrack_ndedx_ge2 = 0;
   stable_event_Bkg1Validation_onetrack_notelectron = 0;
   stable_event_Bkg1Validation_onetrack_nothadron = 0;
   stable_event_Bkg1Validation_onetrack_p_g50l150 = 0;
   stable_event_Bkg1Validation_onetrack_pt_g50 = 0;
   stable_event_Bkg1Validation_passGRL = 0;
   stable_event_Bkg1Validation_preselected = 0;
   stable_event_Bkg2Nominal = 0;
   stable_event_Bkg2Nominal_EventCleaning = 0;
   stable_event_Bkg2Nominal_NoBadJets = 0;
   stable_event_Bkg2Nominal_OfflineMET = 0;
   stable_event_Bkg2Nominal_PV = 0;
   stable_event_Bkg2Nominal_Trigger = 0;
   stable_event_Bkg2Nominal_onetrack_TransMass = 0;
   stable_event_Bkg2Nominal_onetrack_etaCentral = 0;
   stable_event_Bkg2Nominal_onetrack_in_pv = 0;
   stable_event_Bkg2Nominal_onetrack_isocone = 0;
   stable_event_Bkg2Nominal_onetrack_nIBLandBL = 0;
   stable_event_Bkg2Nominal_onetrack_nSharedSplit = 0;
   stable_event_Bkg2Nominal_onetrack_ndedx_ge2 = 0;
   stable_event_Bkg2Nominal_onetrack_notelectron = 0;
   stable_event_Bkg2Nominal_onetrack_nothadron = 0;
   stable_event_Bkg2Nominal_onetrack_p_g150 = 0;
   stable_event_Bkg2Nominal_onetrack_pt_g50 = 0;
   stable_event_Bkg2Nominal_passGRL = 0;
   stable_event_Bkg2Nominal_preselected = 0;
   stable_event_Bkg2Validation = 0;
   stable_event_Bkg2Validation_EventCleaning = 0;
   stable_event_Bkg2Validation_NoBadJets = 0;
   stable_event_Bkg2Validation_OfflineMET = 0;
   stable_event_Bkg2Validation_PV = 0;
   stable_event_Bkg2Validation_Trigger = 0;
   stable_event_Bkg2Validation_onetrack_TransMass = 0;
   stable_event_Bkg2Validation_onetrack_etaCentral = 0;
   stable_event_Bkg2Validation_onetrack_in_pv = 0;
   stable_event_Bkg2Validation_onetrack_isocone = 0;
   stable_event_Bkg2Validation_onetrack_nIBLandBL = 0;
   stable_event_Bkg2Validation_onetrack_nSharedSplit = 0;
   stable_event_Bkg2Validation_onetrack_ndedx_ge2 = 0;
   stable_event_Bkg2Validation_onetrack_notelectron = 0;
   stable_event_Bkg2Validation_onetrack_nothadron = 0;
   stable_event_Bkg2Validation_onetrack_p_g50l150 = 0;
   stable_event_Bkg2Validation_onetrack_pt_g50 = 0;
   stable_event_Bkg2Validation_passGRL = 0;
   stable_event_Bkg2Validation_preselected = 0;
   stable_event_SRNominal = 0;
   stable_event_SRNominal_EventCleaning = 0;
   stable_event_SRNominal_NoBadJets = 0;
   stable_event_SRNominal_OfflineMET = 0;
   stable_event_SRNominal_PV = 0;
   stable_event_SRNominal_Trigger = 0;
   stable_event_SRNominal_matchToRHadron = 0;
   stable_event_SRNominal_matchToRHadron_EventCleaning = 0;
   stable_event_SRNominal_matchToRHadron_NoBadJets = 0;
   stable_event_SRNominal_matchToRHadron_OfflineMET = 0;
   stable_event_SRNominal_matchToRHadron_PV = 0;
   stable_event_SRNominal_matchToRHadron_Trigger = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_TransMass = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_etaCentral = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_in_pv = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_ionization = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_isocone = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2 = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_notelectron = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_nothadron = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_p_g150 = 0;
   stable_event_SRNominal_matchToRHadron_onetrack_pt_g50 = 0;
   stable_event_SRNominal_matchToRHadron_passGRL = 0;
   stable_event_SRNominal_matchToRHadron_preselected = 0;
   stable_event_SRNominal_onetrack_TransMass = 0;
   stable_event_SRNominal_onetrack_etaCentral = 0;
   stable_event_SRNominal_onetrack_in_pv = 0;
   stable_event_SRNominal_onetrack_ionization = 0;
   stable_event_SRNominal_onetrack_isocone = 0;
   stable_event_SRNominal_onetrack_nIBLandBL = 0;
   stable_event_SRNominal_onetrack_nSharedSplit = 0;
   stable_event_SRNominal_onetrack_ndedx_ge2 = 0;
   stable_event_SRNominal_onetrack_notelectron = 0;
   stable_event_SRNominal_onetrack_nothadron = 0;
   stable_event_SRNominal_onetrack_p_g150 = 0;
   stable_event_SRNominal_onetrack_pt_g50 = 0;
   stable_event_SRNominal_passGRL = 0;
   stable_event_SRNominal_preselected = 0;
   stable_event_SRValidation = 0;
   stable_event_SRValidation_EventCleaning = 0;
   stable_event_SRValidation_NoBadJets = 0;
   stable_event_SRValidation_OfflineMET = 0;
   stable_event_SRValidation_PV = 0;
   stable_event_SRValidation_Trigger = 0;
   stable_event_SRValidation_onetrack_TransMass = 0;
   stable_event_SRValidation_onetrack_etaCentral = 0;
   stable_event_SRValidation_onetrack_in_pv = 0;
   stable_event_SRValidation_onetrack_isocone = 0;
   stable_event_SRValidation_onetrack_nIBLandBL = 0;
   stable_event_SRValidation_onetrack_nSharedSplit = 0;
   stable_event_SRValidation_onetrack_ndedx_ge2 = 0;
   stable_event_SRValidation_onetrack_notelectron = 0;
   stable_event_SRValidation_onetrack_nothadron = 0;
   stable_event_SRValidation_onetrack_p_g50l150 = 0;
   stable_event_SRValidation_onetrack_pt_g50 = 0;
   stable_event_SRValidation_passGRL = 0;
   stable_event_SRValidation_preselected = 0;
   stable_track_nominal = 0;
   stable_track_nominal_TransMass = 0;
   stable_track_nominal_etaCentral = 0;
   stable_track_nominal_ionization = 0;
   stable_track_nominal_isocone = 0;
   stable_track_nominal_matchToRHadron = 0;
   stable_track_nominal_matchToRHadron_TransMass = 0;
   stable_track_nominal_matchToRHadron_etaCentral = 0;
   stable_track_nominal_matchToRHadron_ionization = 0;
   stable_track_nominal_matchToRHadron_is_RHadron = 0;
   stable_track_nominal_matchToRHadron_isocone = 0;
   stable_track_nominal_matchToRHadron_nIBLandBL = 0;
   stable_track_nominal_matchToRHadron_nSharedSplit = 0;
   stable_track_nominal_matchToRHadron_ndedx_ge2 = 0;
   stable_track_nominal_matchToRHadron_notelectron = 0;
   stable_track_nominal_matchToRHadron_nothadron = 0;
   stable_track_nominal_matchToRHadron_p_g150 = 0;
   stable_track_nominal_matchToRHadron_preselected = 0;
   stable_track_nominal_matchToRHadron_pt_g50 = 0;
   stable_track_nominal_matchToRHadron_trk_inPV = 0;
   stable_track_nominal_nIBLandBL = 0;
   stable_track_nominal_nSharedSplit = 0;
   stable_track_nominal_ndedx_ge2 = 0;
   stable_track_nominal_notelectron = 0;
   stable_track_nominal_nothadron = 0;
   stable_track_nominal_p_g150 = 0;
   stable_track_nominal_preselected = 0;
   stable_track_nominal_pt_g50 = 0;
   stable_track_nominal_trk_inPV = 0;
   stable_track_validation = 0;
   stable_track_validation_TransMass = 0;
   stable_track_validation_etaCentral = 0;
   stable_track_validation_ionization = 0;
   stable_track_validation_isocone = 0;
   stable_track_validation_nIBLandBL = 0;
   stable_track_validation_nSharedSplit = 0;
   stable_track_validation_ndedx_ge2 = 0;
   stable_track_validation_notelectron = 0;
   stable_track_validation_nothadron = 0;
   stable_track_validation_p_g50l150 = 0;
   stable_track_validation_preselected = 0;
   stable_track_validation_pt_g50 = 0;
   stable_track_validation_trk_inPV = 0;
   track_BSz = 0;
   track_TransverseMass = 0;
   track_chi2 = 0;
   track_corrected_pixeldEdx = 0;
   track_corrected_pixeldEdx_sigma = 0;
   track_d0 = 0;
   track_d0sig = 0;
   track_dEdxBeta = 0;
   track_dEdxBetaGamma = 0;
   track_dEdxMass = 0;
   track_decayDistance = 0;
   track_emfrac = 0;
   track_eoverp = 0;
   track_eta = 0;
   track_expectBLayerHits = 0;
   track_expectIBLHits = 0;
   track_highEta = 0;
   track_highEta_TransMass = 0;
   track_highEta_etaHigh = 0;
   track_highEta_ionization = 0;
   track_highEta_isocone = 0;
   track_highEta_nIBLandBL = 0;
   track_highEta_nSharedSplit = 0;
   track_highEta_ndedx_ge2 = 0;
   track_highEta_notelectron = 0;
   track_highEta_nothadron = 0;
   track_highEta_notmuon = 0;
   track_highEta_p_g150 = 0;
   track_highEta_preselected = 0;
   track_highEta_pt_g50 = 0;
   track_highEta_trk_inPV = 0;
   track_hitPattern = 0;
   track_isElectronBaseline = 0;
   track_isElectronJet = 0;
   track_isElectronSignal = 0;
   track_isHadronJet = 0;
   track_isMuonBaseline = 0;
   track_isMuonIsolated = 0;
   track_isMuonSignal = 0;
   track_isRHadron = 0;
   track_isoPt = 0;
   track_jetDR = 0;
   track_jetE = 0;
   track_jetEMFrac = 0;
   track_jetSumP = 0;
   track_m = 0;
   track_muonEta = 0;
   track_muonPhi = 0;
   track_muonPt = 0;
   track_nBLHits = 0;
   track_nIBLHits = 0;
   track_nIBLOverflowsdEdx = 0;
   track_nOutliers = 0;
   track_nPixelHits = 0;
   track_nPixelHoles = 0;
   track_nSCTHits = 0;
   track_nSCTHoles = 0;
   track_nSharedHits = 0;
   track_nSplitHits = 0;
   track_nTRTHighThresholdHits = 0;
   track_nTRTHits = 0;
   track_nTRTSharedHits = 0;
   track_nUsedHitsdEdx = 0;
   track_ndof = 0;
   track_p = 0;
   track_phi = 0;
   track_pixeldEdx = 0;
   track_pt = 0;
   track_qoverp = 0;
   track_qoverpErr = 0;
   track_relIsoPt = 0;
   track_truthMatchProb = 0;
   track_truthParticleIndex = 0;
   track_truth_beta = 0;
   track_truth_e = 0;
   track_truth_m = 0;
   track_truth_p = 0;
   track_truth_pdgid = 0;
   track_truth_pt = 0;
   track_vertextype = 0;
   track_z0 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("FinalWeight", &FinalWeight, &b_FinalWeight);
   fChain->SetBranchAddress("HLT_noalg_L1J400", &HLT_noalg_L1J400, &b_HLT_noalg_L1J400);
   fChain->SetBranchAddress("HLT_xe100_mht_L1XE50", &HLT_xe100_mht_L1XE50, &b_HLT_xe100_mht_L1XE50);
   fChain->SetBranchAddress("HLT_xe100_pufit_L1XE50", &HLT_xe100_pufit_L1XE50, &b_HLT_xe100_pufit_L1XE50);
   fChain->SetBranchAddress("HLT_xe100_pufit_L1XE55", &HLT_xe100_pufit_L1XE55, &b_HLT_xe100_pufit_L1XE55);
   fChain->SetBranchAddress("HLT_xe110_mht_L1XE50", &HLT_xe110_mht_L1XE50, &b_HLT_xe110_mht_L1XE50);
   fChain->SetBranchAddress("HLT_xe110_pufit_L1XE50", &HLT_xe110_pufit_L1XE50, &b_HLT_xe110_pufit_L1XE50);
   fChain->SetBranchAddress("HLT_xe110_pufit_L1XE55", &HLT_xe110_pufit_L1XE55, &b_HLT_xe110_pufit_L1XE55);
   fChain->SetBranchAddress("HLT_xe110_pufit_xe65_L1XE50", &HLT_xe110_pufit_xe65_L1XE50, &b_HLT_xe110_pufit_xe65_L1XE50);
   fChain->SetBranchAddress("HLT_xe110_pufit_xe70_L1XE50", &HLT_xe110_pufit_xe70_L1XE50, &b_HLT_xe110_pufit_xe70_L1XE50);
   fChain->SetBranchAddress("HLT_xe120_pufit_L1XE50", &HLT_xe120_pufit_L1XE50, &b_HLT_xe120_pufit_L1XE50);
   fChain->SetBranchAddress("HLT_xe70", &HLT_xe70, &b_HLT_xe70);
   fChain->SetBranchAddress("HLT_xe70_mht", &HLT_xe70_mht, &b_HLT_xe70_mht);
   fChain->SetBranchAddress("HLT_xe90_mht_L1XE50", &HLT_xe90_mht_L1XE50, &b_HLT_xe90_mht_L1XE50);
   fChain->SetBranchAddress("HLT_xe90_pufit_L1XE50", &HLT_xe90_pufit_L1XE50, &b_HLT_xe90_pufit_L1XE50);
   fChain->SetBranchAddress("L1_XE50", &L1_XE50, &b_L1_XE50);
   fChain->SetBranchAddress("PileUpWeight", &PileUpWeight, &b_PileUpWeight);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("averageIntPerCrossing", &averageIntPerCrossing, &b_averageIntPerCrossing);
   fChain->SetBranchAddress("calomet", &calomet, &b_calomet);
   fChain->SetBranchAddress("eventCleaning", &eventCleaning, &b_eventCleaning);
   fChain->SetBranchAddress("hasBadLLPJet", &hasBadLLPJet, &b_hasBadLLPJet);
   fChain->SetBranchAddress("hasValidRHadron", &hasValidRHadron, &b_hasValidRHadron);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("leadingJetMetDPhi", &leadingJetMetDPhi, &b_leadingJetMetDPhi);
   fChain->SetBranchAddress("leadingJetPt", &leadingJetPt, &b_leadingJetPt);
   fChain->SetBranchAddress("lowestUP_met_trigger", &lowestUP_met_trigger, &b_lowestUP_met_trigger);
   fChain->SetBranchAddress("main_event_Bkg1Nominal", &main_event_Bkg1Nominal, &b_main_event_Bkg1Nominal);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_EventCleaning", &main_event_Bkg1Nominal_EventCleaning, &b_main_event_Bkg1Nominal_EventCleaning);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_NoBadJets", &main_event_Bkg1Nominal_NoBadJets, &b_main_event_Bkg1Nominal_NoBadJets);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_NoBadMuons", &main_event_Bkg1Nominal_NoBadMuons, &b_main_event_Bkg1Nominal_NoBadMuons);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_OfflineMET", &main_event_Bkg1Nominal_OfflineMET, &b_main_event_Bkg1Nominal_OfflineMET);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_PV", &main_event_Bkg1Nominal_PV, &b_main_event_Bkg1Nominal_PV);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_Trigger", &main_event_Bkg1Nominal_Trigger, &b_main_event_Bkg1Nominal_Trigger);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_TransMass", &main_event_Bkg1Nominal_onetrack_TransMass, &b_main_event_Bkg1Nominal_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_etaCentral", &main_event_Bkg1Nominal_onetrack_etaCentral, &b_main_event_Bkg1Nominal_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_in_pv", &main_event_Bkg1Nominal_onetrack_in_pv, &b_main_event_Bkg1Nominal_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_isocone", &main_event_Bkg1Nominal_onetrack_isocone, &b_main_event_Bkg1Nominal_onetrack_isocone);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_nIBLandBL", &main_event_Bkg1Nominal_onetrack_nIBLandBL, &b_main_event_Bkg1Nominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_nSharedSplit", &main_event_Bkg1Nominal_onetrack_nSharedSplit, &b_main_event_Bkg1Nominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_ndedx_ge2", &main_event_Bkg1Nominal_onetrack_ndedx_ge2, &b_main_event_Bkg1Nominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_notelectron", &main_event_Bkg1Nominal_onetrack_notelectron, &b_main_event_Bkg1Nominal_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_nothadron", &main_event_Bkg1Nominal_onetrack_nothadron, &b_main_event_Bkg1Nominal_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_notmuon", &main_event_Bkg1Nominal_onetrack_notmuon, &b_main_event_Bkg1Nominal_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_p_g150", &main_event_Bkg1Nominal_onetrack_p_g150, &b_main_event_Bkg1Nominal_onetrack_p_g150);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_onetrack_pt_g50", &main_event_Bkg1Nominal_onetrack_pt_g50, &b_main_event_Bkg1Nominal_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_passGRL", &main_event_Bkg1Nominal_passGRL, &b_main_event_Bkg1Nominal_passGRL);
   fChain->SetBranchAddress("main_event_Bkg1Nominal_preselected", &main_event_Bkg1Nominal_preselected, &b_main_event_Bkg1Nominal_preselected);
   fChain->SetBranchAddress("main_event_Bkg1Validation", &main_event_Bkg1Validation, &b_main_event_Bkg1Validation);
   fChain->SetBranchAddress("main_event_Bkg1Validation_EventCleaning", &main_event_Bkg1Validation_EventCleaning, &b_main_event_Bkg1Validation_EventCleaning);
   fChain->SetBranchAddress("main_event_Bkg1Validation_NoBadJets", &main_event_Bkg1Validation_NoBadJets, &b_main_event_Bkg1Validation_NoBadJets);
   fChain->SetBranchAddress("main_event_Bkg1Validation_NoBadMuons", &main_event_Bkg1Validation_NoBadMuons, &b_main_event_Bkg1Validation_NoBadMuons);
   fChain->SetBranchAddress("main_event_Bkg1Validation_OfflineMET", &main_event_Bkg1Validation_OfflineMET, &b_main_event_Bkg1Validation_OfflineMET);
   fChain->SetBranchAddress("main_event_Bkg1Validation_PV", &main_event_Bkg1Validation_PV, &b_main_event_Bkg1Validation_PV);
   fChain->SetBranchAddress("main_event_Bkg1Validation_Trigger", &main_event_Bkg1Validation_Trigger, &b_main_event_Bkg1Validation_Trigger);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_TransMass", &main_event_Bkg1Validation_onetrack_TransMass, &b_main_event_Bkg1Validation_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_etaCentral", &main_event_Bkg1Validation_onetrack_etaCentral, &b_main_event_Bkg1Validation_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_in_pv", &main_event_Bkg1Validation_onetrack_in_pv, &b_main_event_Bkg1Validation_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_ionization", &main_event_Bkg1Validation_onetrack_ionization, &b_main_event_Bkg1Validation_onetrack_ionization);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_isocone", &main_event_Bkg1Validation_onetrack_isocone, &b_main_event_Bkg1Validation_onetrack_isocone);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_nIBLandBL", &main_event_Bkg1Validation_onetrack_nIBLandBL, &b_main_event_Bkg1Validation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_nSharedSplit", &main_event_Bkg1Validation_onetrack_nSharedSplit, &b_main_event_Bkg1Validation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_ndedx_ge2", &main_event_Bkg1Validation_onetrack_ndedx_ge2, &b_main_event_Bkg1Validation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_notelectron", &main_event_Bkg1Validation_onetrack_notelectron, &b_main_event_Bkg1Validation_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_nothadron", &main_event_Bkg1Validation_onetrack_nothadron, &b_main_event_Bkg1Validation_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_notmuon", &main_event_Bkg1Validation_onetrack_notmuon, &b_main_event_Bkg1Validation_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_p_g50l150", &main_event_Bkg1Validation_onetrack_p_g50l150, &b_main_event_Bkg1Validation_onetrack_p_g50l150);
   fChain->SetBranchAddress("main_event_Bkg1Validation_onetrack_pt_g50", &main_event_Bkg1Validation_onetrack_pt_g50, &b_main_event_Bkg1Validation_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_Bkg1Validation_passGRL", &main_event_Bkg1Validation_passGRL, &b_main_event_Bkg1Validation_passGRL);
   fChain->SetBranchAddress("main_event_Bkg1Validation_preselected", &main_event_Bkg1Validation_preselected, &b_main_event_Bkg1Validation_preselected);
   fChain->SetBranchAddress("main_event_Bkg2Nominal", &main_event_Bkg2Nominal, &b_main_event_Bkg2Nominal);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_EventCleaning", &main_event_Bkg2Nominal_EventCleaning, &b_main_event_Bkg2Nominal_EventCleaning);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_NoBadJets", &main_event_Bkg2Nominal_NoBadJets, &b_main_event_Bkg2Nominal_NoBadJets);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_NoBadMuons", &main_event_Bkg2Nominal_NoBadMuons, &b_main_event_Bkg2Nominal_NoBadMuons);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_OfflineMET", &main_event_Bkg2Nominal_OfflineMET, &b_main_event_Bkg2Nominal_OfflineMET);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_PV", &main_event_Bkg2Nominal_PV, &b_main_event_Bkg2Nominal_PV);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_Trigger", &main_event_Bkg2Nominal_Trigger, &b_main_event_Bkg2Nominal_Trigger);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_TransMass", &main_event_Bkg2Nominal_onetrack_TransMass, &b_main_event_Bkg2Nominal_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_etaCentral", &main_event_Bkg2Nominal_onetrack_etaCentral, &b_main_event_Bkg2Nominal_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_in_pv", &main_event_Bkg2Nominal_onetrack_in_pv, &b_main_event_Bkg2Nominal_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_isocone", &main_event_Bkg2Nominal_onetrack_isocone, &b_main_event_Bkg2Nominal_onetrack_isocone);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_nIBLandBL", &main_event_Bkg2Nominal_onetrack_nIBLandBL, &b_main_event_Bkg2Nominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_nSharedSplit", &main_event_Bkg2Nominal_onetrack_nSharedSplit, &b_main_event_Bkg2Nominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_ndedx_ge2", &main_event_Bkg2Nominal_onetrack_ndedx_ge2, &b_main_event_Bkg2Nominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_notelectron", &main_event_Bkg2Nominal_onetrack_notelectron, &b_main_event_Bkg2Nominal_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_nothadron", &main_event_Bkg2Nominal_onetrack_nothadron, &b_main_event_Bkg2Nominal_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_notmuon", &main_event_Bkg2Nominal_onetrack_notmuon, &b_main_event_Bkg2Nominal_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_p_g150", &main_event_Bkg2Nominal_onetrack_p_g150, &b_main_event_Bkg2Nominal_onetrack_p_g150);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_onetrack_pt_g50", &main_event_Bkg2Nominal_onetrack_pt_g50, &b_main_event_Bkg2Nominal_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_passGRL", &main_event_Bkg2Nominal_passGRL, &b_main_event_Bkg2Nominal_passGRL);
   fChain->SetBranchAddress("main_event_Bkg2Nominal_preselected", &main_event_Bkg2Nominal_preselected, &b_main_event_Bkg2Nominal_preselected);
   fChain->SetBranchAddress("main_event_Bkg2Validation", &main_event_Bkg2Validation, &b_main_event_Bkg2Validation);
   fChain->SetBranchAddress("main_event_Bkg2Validation_EventCleaning", &main_event_Bkg2Validation_EventCleaning, &b_main_event_Bkg2Validation_EventCleaning);
   fChain->SetBranchAddress("main_event_Bkg2Validation_NoBadJets", &main_event_Bkg2Validation_NoBadJets, &b_main_event_Bkg2Validation_NoBadJets);
   fChain->SetBranchAddress("main_event_Bkg2Validation_NoBadMuons", &main_event_Bkg2Validation_NoBadMuons, &b_main_event_Bkg2Validation_NoBadMuons);
   fChain->SetBranchAddress("main_event_Bkg2Validation_OfflineMET", &main_event_Bkg2Validation_OfflineMET, &b_main_event_Bkg2Validation_OfflineMET);
   fChain->SetBranchAddress("main_event_Bkg2Validation_PV", &main_event_Bkg2Validation_PV, &b_main_event_Bkg2Validation_PV);
   fChain->SetBranchAddress("main_event_Bkg2Validation_Trigger", &main_event_Bkg2Validation_Trigger, &b_main_event_Bkg2Validation_Trigger);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_TransMass", &main_event_Bkg2Validation_onetrack_TransMass, &b_main_event_Bkg2Validation_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_etaCentral", &main_event_Bkg2Validation_onetrack_etaCentral, &b_main_event_Bkg2Validation_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_in_pv", &main_event_Bkg2Validation_onetrack_in_pv, &b_main_event_Bkg2Validation_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_isocone", &main_event_Bkg2Validation_onetrack_isocone, &b_main_event_Bkg2Validation_onetrack_isocone);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_nIBLandBL", &main_event_Bkg2Validation_onetrack_nIBLandBL, &b_main_event_Bkg2Validation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_nSharedSplit", &main_event_Bkg2Validation_onetrack_nSharedSplit, &b_main_event_Bkg2Validation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_ndedx_ge2", &main_event_Bkg2Validation_onetrack_ndedx_ge2, &b_main_event_Bkg2Validation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_notelectron", &main_event_Bkg2Validation_onetrack_notelectron, &b_main_event_Bkg2Validation_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_nothadron", &main_event_Bkg2Validation_onetrack_nothadron, &b_main_event_Bkg2Validation_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_notmuon", &main_event_Bkg2Validation_onetrack_notmuon, &b_main_event_Bkg2Validation_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_p_g50l150", &main_event_Bkg2Validation_onetrack_p_g50l150, &b_main_event_Bkg2Validation_onetrack_p_g50l150);
   fChain->SetBranchAddress("main_event_Bkg2Validation_onetrack_pt_g50", &main_event_Bkg2Validation_onetrack_pt_g50, &b_main_event_Bkg2Validation_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_Bkg2Validation_passGRL", &main_event_Bkg2Validation_passGRL, &b_main_event_Bkg2Validation_passGRL);
   fChain->SetBranchAddress("main_event_Bkg2Validation_preselected", &main_event_Bkg2Validation_preselected, &b_main_event_Bkg2Validation_preselected);
   fChain->SetBranchAddress("main_event_SRNominal", &main_event_SRNominal, &b_main_event_SRNominal);
   fChain->SetBranchAddress("main_event_SRNominal_EventCleaning", &main_event_SRNominal_EventCleaning, &b_main_event_SRNominal_EventCleaning);
   fChain->SetBranchAddress("main_event_SRNominal_NoBadJets", &main_event_SRNominal_NoBadJets, &b_main_event_SRNominal_NoBadJets);
   fChain->SetBranchAddress("main_event_SRNominal_NoBadMuons", &main_event_SRNominal_NoBadMuons, &b_main_event_SRNominal_NoBadMuons);
   fChain->SetBranchAddress("main_event_SRNominal_OfflineMET", &main_event_SRNominal_OfflineMET, &b_main_event_SRNominal_OfflineMET);
   fChain->SetBranchAddress("main_event_SRNominal_PV", &main_event_SRNominal_PV, &b_main_event_SRNominal_PV);
   fChain->SetBranchAddress("main_event_SRNominal_Trigger", &main_event_SRNominal_Trigger, &b_main_event_SRNominal_Trigger);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron", &main_event_SRNominal_matchToRHadron, &b_main_event_SRNominal_matchToRHadron);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_EventCleaning", &main_event_SRNominal_matchToRHadron_EventCleaning, &b_main_event_SRNominal_matchToRHadron_EventCleaning);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_NoBadJets", &main_event_SRNominal_matchToRHadron_NoBadJets, &b_main_event_SRNominal_matchToRHadron_NoBadJets);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_NoBadMuons", &main_event_SRNominal_matchToRHadron_NoBadMuons, &b_main_event_SRNominal_matchToRHadron_NoBadMuons);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_OfflineMET", &main_event_SRNominal_matchToRHadron_OfflineMET, &b_main_event_SRNominal_matchToRHadron_OfflineMET);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_PV", &main_event_SRNominal_matchToRHadron_PV, &b_main_event_SRNominal_matchToRHadron_PV);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_Trigger", &main_event_SRNominal_matchToRHadron_Trigger, &b_main_event_SRNominal_matchToRHadron_Trigger);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_TransMass", &main_event_SRNominal_matchToRHadron_onetrack_TransMass, &b_main_event_SRNominal_matchToRHadron_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_etaCentral", &main_event_SRNominal_matchToRHadron_onetrack_etaCentral, &b_main_event_SRNominal_matchToRHadron_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_in_pv", &main_event_SRNominal_matchToRHadron_onetrack_in_pv, &b_main_event_SRNominal_matchToRHadron_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_ionization", &main_event_SRNominal_matchToRHadron_onetrack_ionization, &b_main_event_SRNominal_matchToRHadron_onetrack_ionization);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_is_RHadron", &main_event_SRNominal_matchToRHadron_onetrack_is_RHadron, &b_main_event_SRNominal_matchToRHadron_onetrack_is_RHadron);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_isocone", &main_event_SRNominal_matchToRHadron_onetrack_isocone, &b_main_event_SRNominal_matchToRHadron_onetrack_isocone);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL", &main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL, &b_main_event_SRNominal_matchToRHadron_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit", &main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit, &b_main_event_SRNominal_matchToRHadron_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2", &main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2, &b_main_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_notelectron", &main_event_SRNominal_matchToRHadron_onetrack_notelectron, &b_main_event_SRNominal_matchToRHadron_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_nothadron", &main_event_SRNominal_matchToRHadron_onetrack_nothadron, &b_main_event_SRNominal_matchToRHadron_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_notmuon", &main_event_SRNominal_matchToRHadron_onetrack_notmuon, &b_main_event_SRNominal_matchToRHadron_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_p_g150", &main_event_SRNominal_matchToRHadron_onetrack_p_g150, &b_main_event_SRNominal_matchToRHadron_onetrack_p_g150);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_onetrack_pt_g50", &main_event_SRNominal_matchToRHadron_onetrack_pt_g50, &b_main_event_SRNominal_matchToRHadron_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_passGRL", &main_event_SRNominal_matchToRHadron_passGRL, &b_main_event_SRNominal_matchToRHadron_passGRL);
   fChain->SetBranchAddress("main_event_SRNominal_matchToRHadron_preselected", &main_event_SRNominal_matchToRHadron_preselected, &b_main_event_SRNominal_matchToRHadron_preselected);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_TransMass", &main_event_SRNominal_onetrack_TransMass, &b_main_event_SRNominal_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_etaCentral", &main_event_SRNominal_onetrack_etaCentral, &b_main_event_SRNominal_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_in_pv", &main_event_SRNominal_onetrack_in_pv, &b_main_event_SRNominal_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_ionization", &main_event_SRNominal_onetrack_ionization, &b_main_event_SRNominal_onetrack_ionization);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_isocone", &main_event_SRNominal_onetrack_isocone, &b_main_event_SRNominal_onetrack_isocone);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_nIBLandBL", &main_event_SRNominal_onetrack_nIBLandBL, &b_main_event_SRNominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_nSharedSplit", &main_event_SRNominal_onetrack_nSharedSplit, &b_main_event_SRNominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_ndedx_ge2", &main_event_SRNominal_onetrack_ndedx_ge2, &b_main_event_SRNominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_notelectron", &main_event_SRNominal_onetrack_notelectron, &b_main_event_SRNominal_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_nothadron", &main_event_SRNominal_onetrack_nothadron, &b_main_event_SRNominal_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_notmuon", &main_event_SRNominal_onetrack_notmuon, &b_main_event_SRNominal_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_p_g150", &main_event_SRNominal_onetrack_p_g150, &b_main_event_SRNominal_onetrack_p_g150);
   fChain->SetBranchAddress("main_event_SRNominal_onetrack_pt_g50", &main_event_SRNominal_onetrack_pt_g50, &b_main_event_SRNominal_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_SRNominal_passGRL", &main_event_SRNominal_passGRL, &b_main_event_SRNominal_passGRL);
   fChain->SetBranchAddress("main_event_SRNominal_preselected", &main_event_SRNominal_preselected, &b_main_event_SRNominal_preselected);
   fChain->SetBranchAddress("main_event_SRValidation", &main_event_SRValidation, &b_main_event_SRValidation);
   fChain->SetBranchAddress("main_event_SRValidation_EventCleaning", &main_event_SRValidation_EventCleaning, &b_main_event_SRValidation_EventCleaning);
   fChain->SetBranchAddress("main_event_SRValidation_NoBadJets", &main_event_SRValidation_NoBadJets, &b_main_event_SRValidation_NoBadJets);
   fChain->SetBranchAddress("main_event_SRValidation_NoBadMuons", &main_event_SRValidation_NoBadMuons, &b_main_event_SRValidation_NoBadMuons);
   fChain->SetBranchAddress("main_event_SRValidation_OfflineMET", &main_event_SRValidation_OfflineMET, &b_main_event_SRValidation_OfflineMET);
   fChain->SetBranchAddress("main_event_SRValidation_PV", &main_event_SRValidation_PV, &b_main_event_SRValidation_PV);
   fChain->SetBranchAddress("main_event_SRValidation_Trigger", &main_event_SRValidation_Trigger, &b_main_event_SRValidation_Trigger);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_TransMass", &main_event_SRValidation_onetrack_TransMass, &b_main_event_SRValidation_onetrack_TransMass);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_etaCentral", &main_event_SRValidation_onetrack_etaCentral, &b_main_event_SRValidation_onetrack_etaCentral);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_in_pv", &main_event_SRValidation_onetrack_in_pv, &b_main_event_SRValidation_onetrack_in_pv);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_isocone", &main_event_SRValidation_onetrack_isocone, &b_main_event_SRValidation_onetrack_isocone);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_nIBLandBL", &main_event_SRValidation_onetrack_nIBLandBL, &b_main_event_SRValidation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_nSharedSplit", &main_event_SRValidation_onetrack_nSharedSplit, &b_main_event_SRValidation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_ndedx_ge2", &main_event_SRValidation_onetrack_ndedx_ge2, &b_main_event_SRValidation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_notelectron", &main_event_SRValidation_onetrack_notelectron, &b_main_event_SRValidation_onetrack_notelectron);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_nothadron", &main_event_SRValidation_onetrack_nothadron, &b_main_event_SRValidation_onetrack_nothadron);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_notmuon", &main_event_SRValidation_onetrack_notmuon, &b_main_event_SRValidation_onetrack_notmuon);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_p_g50l150", &main_event_SRValidation_onetrack_p_g50l150, &b_main_event_SRValidation_onetrack_p_g50l150);
   fChain->SetBranchAddress("main_event_SRValidation_onetrack_pt_g50", &main_event_SRValidation_onetrack_pt_g50, &b_main_event_SRValidation_onetrack_pt_g50);
   fChain->SetBranchAddress("main_event_SRValidation_passGRL", &main_event_SRValidation_passGRL, &b_main_event_SRValidation_passGRL);
   fChain->SetBranchAddress("main_event_SRValidation_preselected", &main_event_SRValidation_preselected, &b_main_event_SRValidation_preselected);
   fChain->SetBranchAddress("main_track_nominal", &main_track_nominal, &b_main_track_nominal);
   fChain->SetBranchAddress("main_track_nominal_TransMass", &main_track_nominal_TransMass, &b_main_track_nominal_TransMass);
   fChain->SetBranchAddress("main_track_nominal_etaCentral", &main_track_nominal_etaCentral, &b_main_track_nominal_etaCentral);
   fChain->SetBranchAddress("main_track_nominal_ionization", &main_track_nominal_ionization, &b_main_track_nominal_ionization);
   fChain->SetBranchAddress("main_track_nominal_isocone", &main_track_nominal_isocone, &b_main_track_nominal_isocone);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron", &main_track_nominal_matchToRHadron, &b_main_track_nominal_matchToRHadron);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_TransMass", &main_track_nominal_matchToRHadron_TransMass, &b_main_track_nominal_matchToRHadron_TransMass);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_etaCentral", &main_track_nominal_matchToRHadron_etaCentral, &b_main_track_nominal_matchToRHadron_etaCentral);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_ionization", &main_track_nominal_matchToRHadron_ionization, &b_main_track_nominal_matchToRHadron_ionization);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_is_RHadron", &main_track_nominal_matchToRHadron_is_RHadron, &b_main_track_nominal_matchToRHadron_is_RHadron);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_isocone", &main_track_nominal_matchToRHadron_isocone, &b_main_track_nominal_matchToRHadron_isocone);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_nIBLandBL", &main_track_nominal_matchToRHadron_nIBLandBL, &b_main_track_nominal_matchToRHadron_nIBLandBL);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_nSharedSplit", &main_track_nominal_matchToRHadron_nSharedSplit, &b_main_track_nominal_matchToRHadron_nSharedSplit);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_ndedx_ge2", &main_track_nominal_matchToRHadron_ndedx_ge2, &b_main_track_nominal_matchToRHadron_ndedx_ge2);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_notelectron", &main_track_nominal_matchToRHadron_notelectron, &b_main_track_nominal_matchToRHadron_notelectron);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_nothadron", &main_track_nominal_matchToRHadron_nothadron, &b_main_track_nominal_matchToRHadron_nothadron);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_notmuon", &main_track_nominal_matchToRHadron_notmuon, &b_main_track_nominal_matchToRHadron_notmuon);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_p_g150", &main_track_nominal_matchToRHadron_p_g150, &b_main_track_nominal_matchToRHadron_p_g150);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_preselected", &main_track_nominal_matchToRHadron_preselected, &b_main_track_nominal_matchToRHadron_preselected);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_pt_g50", &main_track_nominal_matchToRHadron_pt_g50, &b_main_track_nominal_matchToRHadron_pt_g50);
   fChain->SetBranchAddress("main_track_nominal_matchToRHadron_trk_inPV", &main_track_nominal_matchToRHadron_trk_inPV, &b_main_track_nominal_matchToRHadron_trk_inPV);
   fChain->SetBranchAddress("main_track_nominal_nIBLandBL", &main_track_nominal_nIBLandBL, &b_main_track_nominal_nIBLandBL);
   fChain->SetBranchAddress("main_track_nominal_nSharedSplit", &main_track_nominal_nSharedSplit, &b_main_track_nominal_nSharedSplit);
   fChain->SetBranchAddress("main_track_nominal_ndedx_ge2", &main_track_nominal_ndedx_ge2, &b_main_track_nominal_ndedx_ge2);
   fChain->SetBranchAddress("main_track_nominal_notelectron", &main_track_nominal_notelectron, &b_main_track_nominal_notelectron);
   fChain->SetBranchAddress("main_track_nominal_nothadron", &main_track_nominal_nothadron, &b_main_track_nominal_nothadron);
   fChain->SetBranchAddress("main_track_nominal_notmuon", &main_track_nominal_notmuon, &b_main_track_nominal_notmuon);
   fChain->SetBranchAddress("main_track_nominal_p_g150", &main_track_nominal_p_g150, &b_main_track_nominal_p_g150);
   fChain->SetBranchAddress("main_track_nominal_preselected", &main_track_nominal_preselected, &b_main_track_nominal_preselected);
   fChain->SetBranchAddress("main_track_nominal_pt_g50", &main_track_nominal_pt_g50, &b_main_track_nominal_pt_g50);
   fChain->SetBranchAddress("main_track_nominal_trk_inPV", &main_track_nominal_trk_inPV, &b_main_track_nominal_trk_inPV);
   fChain->SetBranchAddress("main_track_validation", &main_track_validation, &b_main_track_validation);
   fChain->SetBranchAddress("main_track_validation_TransMass", &main_track_validation_TransMass, &b_main_track_validation_TransMass);
   fChain->SetBranchAddress("main_track_validation_etaCentral", &main_track_validation_etaCentral, &b_main_track_validation_etaCentral);
   fChain->SetBranchAddress("main_track_validation_ionization", &main_track_validation_ionization, &b_main_track_validation_ionization);
   fChain->SetBranchAddress("main_track_validation_isocone", &main_track_validation_isocone, &b_main_track_validation_isocone);
   fChain->SetBranchAddress("main_track_validation_nIBLandBL", &main_track_validation_nIBLandBL, &b_main_track_validation_nIBLandBL);
   fChain->SetBranchAddress("main_track_validation_nSharedSplit", &main_track_validation_nSharedSplit, &b_main_track_validation_nSharedSplit);
   fChain->SetBranchAddress("main_track_validation_ndedx_ge2", &main_track_validation_ndedx_ge2, &b_main_track_validation_ndedx_ge2);
   fChain->SetBranchAddress("main_track_validation_notelectron", &main_track_validation_notelectron, &b_main_track_validation_notelectron);
   fChain->SetBranchAddress("main_track_validation_nothadron", &main_track_validation_nothadron, &b_main_track_validation_nothadron);
   fChain->SetBranchAddress("main_track_validation_notmuon", &main_track_validation_notmuon, &b_main_track_validation_notmuon);
   fChain->SetBranchAddress("main_track_validation_p_g50l150", &main_track_validation_p_g50l150, &b_main_track_validation_p_g50l150);
   fChain->SetBranchAddress("main_track_validation_preselected", &main_track_validation_preselected, &b_main_track_validation_preselected);
   fChain->SetBranchAddress("main_track_validation_pt_g50", &main_track_validation_pt_g50, &b_main_track_validation_pt_g50);
   fChain->SetBranchAddress("main_track_validation_trk_inPV", &main_track_validation_trk_inPV, &b_main_track_validation_trk_inPV);
   fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("met_mpx", &met_mpx, &b_met_mpx);
   fChain->SetBranchAddress("met_mpy", &met_mpy, &b_met_mpy);
   fChain->SetBranchAddress("met_muons", &met_muons, &b_met_muons);
   fChain->SetBranchAddress("met_noMuons", &met_noMuons, &b_met_noMuons);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("met_refjet", &met_refjet, &b_met_refjet);
   fChain->SetBranchAddress("met_soft", &met_soft, &b_met_soft);
   fChain->SetBranchAddress("nBaselineElectrons", &nBaselineElectrons, &b_nBaselineElectrons);
   fChain->SetBranchAddress("nBaselineMuons", &nBaselineMuons, &b_nBaselineMuons);
   fChain->SetBranchAddress("nChargedRHadron", &nChargedRHadron, &b_nChargedRHadron);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("nNeutralRHadron", &nNeutralRHadron, &b_nNeutralRHadron);
   fChain->SetBranchAddress("nSignalElectrons", &nSignalElectrons, &b_nSignalElectrons);
   fChain->SetBranchAddress("nSignalMuons", &nSignalMuons, &b_nSignalMuons);
   fChain->SetBranchAddress("nVertex", &nVertex, &b_nVertex);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal", &stable_event_Bkg1Nominal, &b_stable_event_Bkg1Nominal);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_EventCleaning", &stable_event_Bkg1Nominal_EventCleaning, &b_stable_event_Bkg1Nominal_EventCleaning);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_NoBadJets", &stable_event_Bkg1Nominal_NoBadJets, &b_stable_event_Bkg1Nominal_NoBadJets);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_OfflineMET", &stable_event_Bkg1Nominal_OfflineMET, &b_stable_event_Bkg1Nominal_OfflineMET);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_PV", &stable_event_Bkg1Nominal_PV, &b_stable_event_Bkg1Nominal_PV);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_Trigger", &stable_event_Bkg1Nominal_Trigger, &b_stable_event_Bkg1Nominal_Trigger);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_TransMass", &stable_event_Bkg1Nominal_onetrack_TransMass, &b_stable_event_Bkg1Nominal_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_etaCentral", &stable_event_Bkg1Nominal_onetrack_etaCentral, &b_stable_event_Bkg1Nominal_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_in_pv", &stable_event_Bkg1Nominal_onetrack_in_pv, &b_stable_event_Bkg1Nominal_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_ionization", &stable_event_Bkg1Nominal_onetrack_ionization, &b_stable_event_Bkg1Nominal_onetrack_ionization);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_isocone", &stable_event_Bkg1Nominal_onetrack_isocone, &b_stable_event_Bkg1Nominal_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_nIBLandBL", &stable_event_Bkg1Nominal_onetrack_nIBLandBL, &b_stable_event_Bkg1Nominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_nSharedSplit", &stable_event_Bkg1Nominal_onetrack_nSharedSplit, &b_stable_event_Bkg1Nominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_ndedx_ge2", &stable_event_Bkg1Nominal_onetrack_ndedx_ge2, &b_stable_event_Bkg1Nominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_notelectron", &stable_event_Bkg1Nominal_onetrack_notelectron, &b_stable_event_Bkg1Nominal_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_nothadron", &stable_event_Bkg1Nominal_onetrack_nothadron, &b_stable_event_Bkg1Nominal_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_p_g150", &stable_event_Bkg1Nominal_onetrack_p_g150, &b_stable_event_Bkg1Nominal_onetrack_p_g150);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_onetrack_pt_g50", &stable_event_Bkg1Nominal_onetrack_pt_g50, &b_stable_event_Bkg1Nominal_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_passGRL", &stable_event_Bkg1Nominal_passGRL, &b_stable_event_Bkg1Nominal_passGRL);
   fChain->SetBranchAddress("stable_event_Bkg1Nominal_preselected", &stable_event_Bkg1Nominal_preselected, &b_stable_event_Bkg1Nominal_preselected);
   fChain->SetBranchAddress("stable_event_Bkg1Validation", &stable_event_Bkg1Validation, &b_stable_event_Bkg1Validation);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_EventCleaning", &stable_event_Bkg1Validation_EventCleaning, &b_stable_event_Bkg1Validation_EventCleaning);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_NoBadJets", &stable_event_Bkg1Validation_NoBadJets, &b_stable_event_Bkg1Validation_NoBadJets);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_OfflineMET", &stable_event_Bkg1Validation_OfflineMET, &b_stable_event_Bkg1Validation_OfflineMET);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_PV", &stable_event_Bkg1Validation_PV, &b_stable_event_Bkg1Validation_PV);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_Trigger", &stable_event_Bkg1Validation_Trigger, &b_stable_event_Bkg1Validation_Trigger);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_TransMass", &stable_event_Bkg1Validation_onetrack_TransMass, &b_stable_event_Bkg1Validation_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_etaCentral", &stable_event_Bkg1Validation_onetrack_etaCentral, &b_stable_event_Bkg1Validation_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_in_pv", &stable_event_Bkg1Validation_onetrack_in_pv, &b_stable_event_Bkg1Validation_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_ionization", &stable_event_Bkg1Validation_onetrack_ionization, &b_stable_event_Bkg1Validation_onetrack_ionization);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_isocone", &stable_event_Bkg1Validation_onetrack_isocone, &b_stable_event_Bkg1Validation_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_nIBLandBL", &stable_event_Bkg1Validation_onetrack_nIBLandBL, &b_stable_event_Bkg1Validation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_nSharedSplit", &stable_event_Bkg1Validation_onetrack_nSharedSplit, &b_stable_event_Bkg1Validation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_ndedx_ge2", &stable_event_Bkg1Validation_onetrack_ndedx_ge2, &b_stable_event_Bkg1Validation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_notelectron", &stable_event_Bkg1Validation_onetrack_notelectron, &b_stable_event_Bkg1Validation_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_nothadron", &stable_event_Bkg1Validation_onetrack_nothadron, &b_stable_event_Bkg1Validation_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_p_g50l150", &stable_event_Bkg1Validation_onetrack_p_g50l150, &b_stable_event_Bkg1Validation_onetrack_p_g50l150);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_onetrack_pt_g50", &stable_event_Bkg1Validation_onetrack_pt_g50, &b_stable_event_Bkg1Validation_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_passGRL", &stable_event_Bkg1Validation_passGRL, &b_stable_event_Bkg1Validation_passGRL);
   fChain->SetBranchAddress("stable_event_Bkg1Validation_preselected", &stable_event_Bkg1Validation_preselected, &b_stable_event_Bkg1Validation_preselected);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal", &stable_event_Bkg2Nominal, &b_stable_event_Bkg2Nominal);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_EventCleaning", &stable_event_Bkg2Nominal_EventCleaning, &b_stable_event_Bkg2Nominal_EventCleaning);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_NoBadJets", &stable_event_Bkg2Nominal_NoBadJets, &b_stable_event_Bkg2Nominal_NoBadJets);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_OfflineMET", &stable_event_Bkg2Nominal_OfflineMET, &b_stable_event_Bkg2Nominal_OfflineMET);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_PV", &stable_event_Bkg2Nominal_PV, &b_stable_event_Bkg2Nominal_PV);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_Trigger", &stable_event_Bkg2Nominal_Trigger, &b_stable_event_Bkg2Nominal_Trigger);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_TransMass", &stable_event_Bkg2Nominal_onetrack_TransMass, &b_stable_event_Bkg2Nominal_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_etaCentral", &stable_event_Bkg2Nominal_onetrack_etaCentral, &b_stable_event_Bkg2Nominal_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_in_pv", &stable_event_Bkg2Nominal_onetrack_in_pv, &b_stable_event_Bkg2Nominal_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_isocone", &stable_event_Bkg2Nominal_onetrack_isocone, &b_stable_event_Bkg2Nominal_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_nIBLandBL", &stable_event_Bkg2Nominal_onetrack_nIBLandBL, &b_stable_event_Bkg2Nominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_nSharedSplit", &stable_event_Bkg2Nominal_onetrack_nSharedSplit, &b_stable_event_Bkg2Nominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_ndedx_ge2", &stable_event_Bkg2Nominal_onetrack_ndedx_ge2, &b_stable_event_Bkg2Nominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_notelectron", &stable_event_Bkg2Nominal_onetrack_notelectron, &b_stable_event_Bkg2Nominal_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_nothadron", &stable_event_Bkg2Nominal_onetrack_nothadron, &b_stable_event_Bkg2Nominal_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_p_g150", &stable_event_Bkg2Nominal_onetrack_p_g150, &b_stable_event_Bkg2Nominal_onetrack_p_g150);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_onetrack_pt_g50", &stable_event_Bkg2Nominal_onetrack_pt_g50, &b_stable_event_Bkg2Nominal_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_passGRL", &stable_event_Bkg2Nominal_passGRL, &b_stable_event_Bkg2Nominal_passGRL);
   fChain->SetBranchAddress("stable_event_Bkg2Nominal_preselected", &stable_event_Bkg2Nominal_preselected, &b_stable_event_Bkg2Nominal_preselected);
   fChain->SetBranchAddress("stable_event_Bkg2Validation", &stable_event_Bkg2Validation, &b_stable_event_Bkg2Validation);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_EventCleaning", &stable_event_Bkg2Validation_EventCleaning, &b_stable_event_Bkg2Validation_EventCleaning);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_NoBadJets", &stable_event_Bkg2Validation_NoBadJets, &b_stable_event_Bkg2Validation_NoBadJets);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_OfflineMET", &stable_event_Bkg2Validation_OfflineMET, &b_stable_event_Bkg2Validation_OfflineMET);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_PV", &stable_event_Bkg2Validation_PV, &b_stable_event_Bkg2Validation_PV);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_Trigger", &stable_event_Bkg2Validation_Trigger, &b_stable_event_Bkg2Validation_Trigger);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_TransMass", &stable_event_Bkg2Validation_onetrack_TransMass, &b_stable_event_Bkg2Validation_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_etaCentral", &stable_event_Bkg2Validation_onetrack_etaCentral, &b_stable_event_Bkg2Validation_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_in_pv", &stable_event_Bkg2Validation_onetrack_in_pv, &b_stable_event_Bkg2Validation_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_isocone", &stable_event_Bkg2Validation_onetrack_isocone, &b_stable_event_Bkg2Validation_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_nIBLandBL", &stable_event_Bkg2Validation_onetrack_nIBLandBL, &b_stable_event_Bkg2Validation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_nSharedSplit", &stable_event_Bkg2Validation_onetrack_nSharedSplit, &b_stable_event_Bkg2Validation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_ndedx_ge2", &stable_event_Bkg2Validation_onetrack_ndedx_ge2, &b_stable_event_Bkg2Validation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_notelectron", &stable_event_Bkg2Validation_onetrack_notelectron, &b_stable_event_Bkg2Validation_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_nothadron", &stable_event_Bkg2Validation_onetrack_nothadron, &b_stable_event_Bkg2Validation_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_p_g50l150", &stable_event_Bkg2Validation_onetrack_p_g50l150, &b_stable_event_Bkg2Validation_onetrack_p_g50l150);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_onetrack_pt_g50", &stable_event_Bkg2Validation_onetrack_pt_g50, &b_stable_event_Bkg2Validation_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_passGRL", &stable_event_Bkg2Validation_passGRL, &b_stable_event_Bkg2Validation_passGRL);
   fChain->SetBranchAddress("stable_event_Bkg2Validation_preselected", &stable_event_Bkg2Validation_preselected, &b_stable_event_Bkg2Validation_preselected);
   fChain->SetBranchAddress("stable_event_SRNominal", &stable_event_SRNominal, &b_stable_event_SRNominal);
   fChain->SetBranchAddress("stable_event_SRNominal_EventCleaning", &stable_event_SRNominal_EventCleaning, &b_stable_event_SRNominal_EventCleaning);
   fChain->SetBranchAddress("stable_event_SRNominal_NoBadJets", &stable_event_SRNominal_NoBadJets, &b_stable_event_SRNominal_NoBadJets);
   fChain->SetBranchAddress("stable_event_SRNominal_OfflineMET", &stable_event_SRNominal_OfflineMET, &b_stable_event_SRNominal_OfflineMET);
   fChain->SetBranchAddress("stable_event_SRNominal_PV", &stable_event_SRNominal_PV, &b_stable_event_SRNominal_PV);
   fChain->SetBranchAddress("stable_event_SRNominal_Trigger", &stable_event_SRNominal_Trigger, &b_stable_event_SRNominal_Trigger);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron", &stable_event_SRNominal_matchToRHadron, &b_stable_event_SRNominal_matchToRHadron);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_EventCleaning", &stable_event_SRNominal_matchToRHadron_EventCleaning, &b_stable_event_SRNominal_matchToRHadron_EventCleaning);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_NoBadJets", &stable_event_SRNominal_matchToRHadron_NoBadJets, &b_stable_event_SRNominal_matchToRHadron_NoBadJets);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_OfflineMET", &stable_event_SRNominal_matchToRHadron_OfflineMET, &b_stable_event_SRNominal_matchToRHadron_OfflineMET);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_PV", &stable_event_SRNominal_matchToRHadron_PV, &b_stable_event_SRNominal_matchToRHadron_PV);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_Trigger", &stable_event_SRNominal_matchToRHadron_Trigger, &b_stable_event_SRNominal_matchToRHadron_Trigger);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_TransMass", &stable_event_SRNominal_matchToRHadron_onetrack_TransMass, &b_stable_event_SRNominal_matchToRHadron_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_etaCentral", &stable_event_SRNominal_matchToRHadron_onetrack_etaCentral, &b_stable_event_SRNominal_matchToRHadron_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_in_pv", &stable_event_SRNominal_matchToRHadron_onetrack_in_pv, &b_stable_event_SRNominal_matchToRHadron_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_ionization", &stable_event_SRNominal_matchToRHadron_onetrack_ionization, &b_stable_event_SRNominal_matchToRHadron_onetrack_ionization);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron", &stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron, &b_stable_event_SRNominal_matchToRHadron_onetrack_is_RHadron);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_isocone", &stable_event_SRNominal_matchToRHadron_onetrack_isocone, &b_stable_event_SRNominal_matchToRHadron_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL", &stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL, &b_stable_event_SRNominal_matchToRHadron_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit", &stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit, &b_stable_event_SRNominal_matchToRHadron_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2", &stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2, &b_stable_event_SRNominal_matchToRHadron_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_notelectron", &stable_event_SRNominal_matchToRHadron_onetrack_notelectron, &b_stable_event_SRNominal_matchToRHadron_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_nothadron", &stable_event_SRNominal_matchToRHadron_onetrack_nothadron, &b_stable_event_SRNominal_matchToRHadron_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_p_g150", &stable_event_SRNominal_matchToRHadron_onetrack_p_g150, &b_stable_event_SRNominal_matchToRHadron_onetrack_p_g150);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_onetrack_pt_g50", &stable_event_SRNominal_matchToRHadron_onetrack_pt_g50, &b_stable_event_SRNominal_matchToRHadron_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_passGRL", &stable_event_SRNominal_matchToRHadron_passGRL, &b_stable_event_SRNominal_matchToRHadron_passGRL);
   fChain->SetBranchAddress("stable_event_SRNominal_matchToRHadron_preselected", &stable_event_SRNominal_matchToRHadron_preselected, &b_stable_event_SRNominal_matchToRHadron_preselected);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_TransMass", &stable_event_SRNominal_onetrack_TransMass, &b_stable_event_SRNominal_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_etaCentral", &stable_event_SRNominal_onetrack_etaCentral, &b_stable_event_SRNominal_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_in_pv", &stable_event_SRNominal_onetrack_in_pv, &b_stable_event_SRNominal_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_ionization", &stable_event_SRNominal_onetrack_ionization, &b_stable_event_SRNominal_onetrack_ionization);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_isocone", &stable_event_SRNominal_onetrack_isocone, &b_stable_event_SRNominal_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_nIBLandBL", &stable_event_SRNominal_onetrack_nIBLandBL, &b_stable_event_SRNominal_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_nSharedSplit", &stable_event_SRNominal_onetrack_nSharedSplit, &b_stable_event_SRNominal_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_ndedx_ge2", &stable_event_SRNominal_onetrack_ndedx_ge2, &b_stable_event_SRNominal_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_notelectron", &stable_event_SRNominal_onetrack_notelectron, &b_stable_event_SRNominal_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_nothadron", &stable_event_SRNominal_onetrack_nothadron, &b_stable_event_SRNominal_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_p_g150", &stable_event_SRNominal_onetrack_p_g150, &b_stable_event_SRNominal_onetrack_p_g150);
   fChain->SetBranchAddress("stable_event_SRNominal_onetrack_pt_g50", &stable_event_SRNominal_onetrack_pt_g50, &b_stable_event_SRNominal_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_SRNominal_passGRL", &stable_event_SRNominal_passGRL, &b_stable_event_SRNominal_passGRL);
   fChain->SetBranchAddress("stable_event_SRNominal_preselected", &stable_event_SRNominal_preselected, &b_stable_event_SRNominal_preselected);
   fChain->SetBranchAddress("stable_event_SRValidation", &stable_event_SRValidation, &b_stable_event_SRValidation);
   fChain->SetBranchAddress("stable_event_SRValidation_EventCleaning", &stable_event_SRValidation_EventCleaning, &b_stable_event_SRValidation_EventCleaning);
   fChain->SetBranchAddress("stable_event_SRValidation_NoBadJets", &stable_event_SRValidation_NoBadJets, &b_stable_event_SRValidation_NoBadJets);
   fChain->SetBranchAddress("stable_event_SRValidation_OfflineMET", &stable_event_SRValidation_OfflineMET, &b_stable_event_SRValidation_OfflineMET);
   fChain->SetBranchAddress("stable_event_SRValidation_PV", &stable_event_SRValidation_PV, &b_stable_event_SRValidation_PV);
   fChain->SetBranchAddress("stable_event_SRValidation_Trigger", &stable_event_SRValidation_Trigger, &b_stable_event_SRValidation_Trigger);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_TransMass", &stable_event_SRValidation_onetrack_TransMass, &b_stable_event_SRValidation_onetrack_TransMass);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_etaCentral", &stable_event_SRValidation_onetrack_etaCentral, &b_stable_event_SRValidation_onetrack_etaCentral);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_in_pv", &stable_event_SRValidation_onetrack_in_pv, &b_stable_event_SRValidation_onetrack_in_pv);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_isocone", &stable_event_SRValidation_onetrack_isocone, &b_stable_event_SRValidation_onetrack_isocone);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_nIBLandBL", &stable_event_SRValidation_onetrack_nIBLandBL, &b_stable_event_SRValidation_onetrack_nIBLandBL);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_nSharedSplit", &stable_event_SRValidation_onetrack_nSharedSplit, &b_stable_event_SRValidation_onetrack_nSharedSplit);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_ndedx_ge2", &stable_event_SRValidation_onetrack_ndedx_ge2, &b_stable_event_SRValidation_onetrack_ndedx_ge2);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_notelectron", &stable_event_SRValidation_onetrack_notelectron, &b_stable_event_SRValidation_onetrack_notelectron);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_nothadron", &stable_event_SRValidation_onetrack_nothadron, &b_stable_event_SRValidation_onetrack_nothadron);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_p_g50l150", &stable_event_SRValidation_onetrack_p_g50l150, &b_stable_event_SRValidation_onetrack_p_g50l150);
   fChain->SetBranchAddress("stable_event_SRValidation_onetrack_pt_g50", &stable_event_SRValidation_onetrack_pt_g50, &b_stable_event_SRValidation_onetrack_pt_g50);
   fChain->SetBranchAddress("stable_event_SRValidation_passGRL", &stable_event_SRValidation_passGRL, &b_stable_event_SRValidation_passGRL);
   fChain->SetBranchAddress("stable_event_SRValidation_preselected", &stable_event_SRValidation_preselected, &b_stable_event_SRValidation_preselected);
   fChain->SetBranchAddress("stable_track_nominal", &stable_track_nominal, &b_stable_track_nominal);
   fChain->SetBranchAddress("stable_track_nominal_TransMass", &stable_track_nominal_TransMass, &b_stable_track_nominal_TransMass);
   fChain->SetBranchAddress("stable_track_nominal_etaCentral", &stable_track_nominal_etaCentral, &b_stable_track_nominal_etaCentral);
   fChain->SetBranchAddress("stable_track_nominal_ionization", &stable_track_nominal_ionization, &b_stable_track_nominal_ionization);
   fChain->SetBranchAddress("stable_track_nominal_isocone", &stable_track_nominal_isocone, &b_stable_track_nominal_isocone);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron", &stable_track_nominal_matchToRHadron, &b_stable_track_nominal_matchToRHadron);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_TransMass", &stable_track_nominal_matchToRHadron_TransMass, &b_stable_track_nominal_matchToRHadron_TransMass);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_etaCentral", &stable_track_nominal_matchToRHadron_etaCentral, &b_stable_track_nominal_matchToRHadron_etaCentral);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_ionization", &stable_track_nominal_matchToRHadron_ionization, &b_stable_track_nominal_matchToRHadron_ionization);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_is_RHadron", &stable_track_nominal_matchToRHadron_is_RHadron, &b_stable_track_nominal_matchToRHadron_is_RHadron);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_isocone", &stable_track_nominal_matchToRHadron_isocone, &b_stable_track_nominal_matchToRHadron_isocone);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_nIBLandBL", &stable_track_nominal_matchToRHadron_nIBLandBL, &b_stable_track_nominal_matchToRHadron_nIBLandBL);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_nSharedSplit", &stable_track_nominal_matchToRHadron_nSharedSplit, &b_stable_track_nominal_matchToRHadron_nSharedSplit);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_ndedx_ge2", &stable_track_nominal_matchToRHadron_ndedx_ge2, &b_stable_track_nominal_matchToRHadron_ndedx_ge2);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_notelectron", &stable_track_nominal_matchToRHadron_notelectron, &b_stable_track_nominal_matchToRHadron_notelectron);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_nothadron", &stable_track_nominal_matchToRHadron_nothadron, &b_stable_track_nominal_matchToRHadron_nothadron);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_p_g150", &stable_track_nominal_matchToRHadron_p_g150, &b_stable_track_nominal_matchToRHadron_p_g150);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_preselected", &stable_track_nominal_matchToRHadron_preselected, &b_stable_track_nominal_matchToRHadron_preselected);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_pt_g50", &stable_track_nominal_matchToRHadron_pt_g50, &b_stable_track_nominal_matchToRHadron_pt_g50);
   fChain->SetBranchAddress("stable_track_nominal_matchToRHadron_trk_inPV", &stable_track_nominal_matchToRHadron_trk_inPV, &b_stable_track_nominal_matchToRHadron_trk_inPV);
   fChain->SetBranchAddress("stable_track_nominal_nIBLandBL", &stable_track_nominal_nIBLandBL, &b_stable_track_nominal_nIBLandBL);
   fChain->SetBranchAddress("stable_track_nominal_nSharedSplit", &stable_track_nominal_nSharedSplit, &b_stable_track_nominal_nSharedSplit);
   fChain->SetBranchAddress("stable_track_nominal_ndedx_ge2", &stable_track_nominal_ndedx_ge2, &b_stable_track_nominal_ndedx_ge2);
   fChain->SetBranchAddress("stable_track_nominal_notelectron", &stable_track_nominal_notelectron, &b_stable_track_nominal_notelectron);
   fChain->SetBranchAddress("stable_track_nominal_nothadron", &stable_track_nominal_nothadron, &b_stable_track_nominal_nothadron);
   fChain->SetBranchAddress("stable_track_nominal_p_g150", &stable_track_nominal_p_g150, &b_stable_track_nominal_p_g150);
   fChain->SetBranchAddress("stable_track_nominal_preselected", &stable_track_nominal_preselected, &b_stable_track_nominal_preselected);
   fChain->SetBranchAddress("stable_track_nominal_pt_g50", &stable_track_nominal_pt_g50, &b_stable_track_nominal_pt_g50);
   fChain->SetBranchAddress("stable_track_nominal_trk_inPV", &stable_track_nominal_trk_inPV, &b_stable_track_nominal_trk_inPV);
   fChain->SetBranchAddress("stable_track_validation", &stable_track_validation, &b_stable_track_validation);
   fChain->SetBranchAddress("stable_track_validation_TransMass", &stable_track_validation_TransMass, &b_stable_track_validation_TransMass);
   fChain->SetBranchAddress("stable_track_validation_etaCentral", &stable_track_validation_etaCentral, &b_stable_track_validation_etaCentral);
   fChain->SetBranchAddress("stable_track_validation_ionization", &stable_track_validation_ionization, &b_stable_track_validation_ionization);
   fChain->SetBranchAddress("stable_track_validation_isocone", &stable_track_validation_isocone, &b_stable_track_validation_isocone);
   fChain->SetBranchAddress("stable_track_validation_nIBLandBL", &stable_track_validation_nIBLandBL, &b_stable_track_validation_nIBLandBL);
   fChain->SetBranchAddress("stable_track_validation_nSharedSplit", &stable_track_validation_nSharedSplit, &b_stable_track_validation_nSharedSplit);
   fChain->SetBranchAddress("stable_track_validation_ndedx_ge2", &stable_track_validation_ndedx_ge2, &b_stable_track_validation_ndedx_ge2);
   fChain->SetBranchAddress("stable_track_validation_notelectron", &stable_track_validation_notelectron, &b_stable_track_validation_notelectron);
   fChain->SetBranchAddress("stable_track_validation_nothadron", &stable_track_validation_nothadron, &b_stable_track_validation_nothadron);
   fChain->SetBranchAddress("stable_track_validation_p_g50l150", &stable_track_validation_p_g50l150, &b_stable_track_validation_p_g50l150);
   fChain->SetBranchAddress("stable_track_validation_preselected", &stable_track_validation_preselected, &b_stable_track_validation_preselected);
   fChain->SetBranchAddress("stable_track_validation_pt_g50", &stable_track_validation_pt_g50, &b_stable_track_validation_pt_g50);
   fChain->SetBranchAddress("stable_track_validation_trk_inPV", &stable_track_validation_trk_inPV, &b_stable_track_validation_trk_inPV);
   fChain->SetBranchAddress("track_BSz", &track_BSz, &b_track_BSz);
   fChain->SetBranchAddress("track_TransverseMass", &track_TransverseMass, &b_track_TransverseMass);
   fChain->SetBranchAddress("track_chi2", &track_chi2, &b_track_chi2);
   fChain->SetBranchAddress("track_corrected_pixeldEdx", &track_corrected_pixeldEdx, &b_track_corrected_pixeldEdx);
   fChain->SetBranchAddress("track_corrected_pixeldEdx_sigma", &track_corrected_pixeldEdx_sigma, &b_track_corrected_pixeldEdx_sigma);
   fChain->SetBranchAddress("track_d0", &track_d0, &b_track_d0);
   fChain->SetBranchAddress("track_d0sig", &track_d0sig, &b_track_d0sig);
   fChain->SetBranchAddress("track_dEdxBeta", &track_dEdxBeta, &b_track_dEdxBeta);
   fChain->SetBranchAddress("track_dEdxBetaGamma", &track_dEdxBetaGamma, &b_track_dEdxBetaGamma);
   fChain->SetBranchAddress("track_dEdxMass", &track_dEdxMass, &b_track_dEdxMass);
   fChain->SetBranchAddress("track_decayDistance", &track_decayDistance, &b_track_decayDistance);
   fChain->SetBranchAddress("track_emfrac", &track_emfrac, &b_track_emfrac);
   fChain->SetBranchAddress("track_eoverp", &track_eoverp, &b_track_eoverp);
   fChain->SetBranchAddress("track_eta", &track_eta, &b_track_eta);
   fChain->SetBranchAddress("track_expectBLayerHits", &track_expectBLayerHits, &b_track_expectBLayerHits);
   fChain->SetBranchAddress("track_expectIBLHits", &track_expectIBLHits, &b_track_expectIBLHits);
   fChain->SetBranchAddress("track_highEta", &track_highEta, &b_track_highEta);
   fChain->SetBranchAddress("track_highEta_TransMass", &track_highEta_TransMass, &b_track_highEta_TransMass);
   fChain->SetBranchAddress("track_highEta_etaHigh", &track_highEta_etaHigh, &b_track_highEta_etaHigh);
   fChain->SetBranchAddress("track_highEta_ionization", &track_highEta_ionization, &b_track_highEta_ionization);
   fChain->SetBranchAddress("track_highEta_isocone", &track_highEta_isocone, &b_track_highEta_isocone);
   fChain->SetBranchAddress("track_highEta_nIBLandBL", &track_highEta_nIBLandBL, &b_track_highEta_nIBLandBL);
   fChain->SetBranchAddress("track_highEta_nSharedSplit", &track_highEta_nSharedSplit, &b_track_highEta_nSharedSplit);
   fChain->SetBranchAddress("track_highEta_ndedx_ge2", &track_highEta_ndedx_ge2, &b_track_highEta_ndedx_ge2);
   fChain->SetBranchAddress("track_highEta_notelectron", &track_highEta_notelectron, &b_track_highEta_notelectron);
   fChain->SetBranchAddress("track_highEta_nothadron", &track_highEta_nothadron, &b_track_highEta_nothadron);
   fChain->SetBranchAddress("track_highEta_notmuon", &track_highEta_notmuon, &b_track_highEta_notmuon);
   fChain->SetBranchAddress("track_highEta_p_g150", &track_highEta_p_g150, &b_track_highEta_p_g150);
   fChain->SetBranchAddress("track_highEta_preselected", &track_highEta_preselected, &b_track_highEta_preselected);
   fChain->SetBranchAddress("track_highEta_pt_g50", &track_highEta_pt_g50, &b_track_highEta_pt_g50);
   fChain->SetBranchAddress("track_highEta_trk_inPV", &track_highEta_trk_inPV, &b_track_highEta_trk_inPV);
   fChain->SetBranchAddress("track_hitPattern", &track_hitPattern, &b_track_hitPattern);
   fChain->SetBranchAddress("track_isElectronBaseline", &track_isElectronBaseline, &b_track_isElectronBaseline);
   fChain->SetBranchAddress("track_isElectronJet", &track_isElectronJet, &b_track_isElectronJet);
   fChain->SetBranchAddress("track_isElectronSignal", &track_isElectronSignal, &b_track_isElectronSignal);
   fChain->SetBranchAddress("track_isHadronJet", &track_isHadronJet, &b_track_isHadronJet);
   fChain->SetBranchAddress("track_isMuonBaseline", &track_isMuonBaseline, &b_track_isMuonBaseline);
   fChain->SetBranchAddress("track_isMuonIsolated", &track_isMuonIsolated, &b_track_isMuonIsolated);
   fChain->SetBranchAddress("track_isMuonSignal", &track_isMuonSignal, &b_track_isMuonSignal);
   fChain->SetBranchAddress("track_isRHadron", &track_isRHadron, &b_track_isRHadron);
   fChain->SetBranchAddress("track_isoPt", &track_isoPt, &b_track_isoPt);
   fChain->SetBranchAddress("track_jetDR", &track_jetDR, &b_track_jetDR);
   fChain->SetBranchAddress("track_jetE", &track_jetE, &b_track_jetE);
   fChain->SetBranchAddress("track_jetEMFrac", &track_jetEMFrac, &b_track_jetEMFrac);
   fChain->SetBranchAddress("track_jetSumP", &track_jetSumP, &b_track_jetSumP);
   fChain->SetBranchAddress("track_leading", &track_leading, &b_track_leading);
   fChain->SetBranchAddress("track_m", &track_m, &b_track_m);
   fChain->SetBranchAddress("track_muonEta", &track_muonEta, &b_track_muonEta);
   fChain->SetBranchAddress("track_muonPhi", &track_muonPhi, &b_track_muonPhi);
   fChain->SetBranchAddress("track_muonPt", &track_muonPt, &b_track_muonPt);
   fChain->SetBranchAddress("track_nBLHits", &track_nBLHits, &b_track_nBLHits);
   fChain->SetBranchAddress("track_nIBLHits", &track_nIBLHits, &b_track_nIBLHits);
   fChain->SetBranchAddress("track_nIBLOverflowsdEdx", &track_nIBLOverflowsdEdx, &b_track_nIBLOverflowsdEdx);
   fChain->SetBranchAddress("track_nOutliers", &track_nOutliers, &b_track_nOutliers);
   fChain->SetBranchAddress("track_nPixelHits", &track_nPixelHits, &b_track_nPixelHits);
   fChain->SetBranchAddress("track_nPixelHoles", &track_nPixelHoles, &b_track_nPixelHoles);
   fChain->SetBranchAddress("track_nSCTHits", &track_nSCTHits, &b_track_nSCTHits);
   fChain->SetBranchAddress("track_nSCTHoles", &track_nSCTHoles, &b_track_nSCTHoles);
   fChain->SetBranchAddress("track_nSharedHits", &track_nSharedHits, &b_track_nSharedHits);
   fChain->SetBranchAddress("track_nSplitHits", &track_nSplitHits, &b_track_nSplitHits);
   fChain->SetBranchAddress("track_nTRTHighThresholdHits", &track_nTRTHighThresholdHits, &b_track_nTRTHighThresholdHits);
   fChain->SetBranchAddress("track_nTRTHits", &track_nTRTHits, &b_track_nTRTHits);
   fChain->SetBranchAddress("track_nTRTSharedHits", &track_nTRTSharedHits, &b_track_nTRTSharedHits);
   fChain->SetBranchAddress("track_nUsedHitsdEdx", &track_nUsedHitsdEdx, &b_track_nUsedHitsdEdx);
   fChain->SetBranchAddress("track_ndof", &track_ndof, &b_track_ndof);
   fChain->SetBranchAddress("track_p", &track_p, &b_track_p);
   fChain->SetBranchAddress("track_phi", &track_phi, &b_track_phi);
   fChain->SetBranchAddress("track_pixeldEdx", &track_pixeldEdx, &b_track_pixeldEdx);
   fChain->SetBranchAddress("track_pt", &track_pt, &b_track_pt);
   fChain->SetBranchAddress("track_qoverp", &track_qoverp, &b_track_qoverp);
   fChain->SetBranchAddress("track_qoverpErr", &track_qoverpErr, &b_track_qoverpErr);
   fChain->SetBranchAddress("track_relIsoPt", &track_relIsoPt, &b_track_relIsoPt);
   fChain->SetBranchAddress("track_truthMatchProb", &track_truthMatchProb, &b_track_truthMatchProb);
   fChain->SetBranchAddress("track_truthParticleIndex", &track_truthParticleIndex, &b_track_truthParticleIndex);
   fChain->SetBranchAddress("track_truth_beta", &track_truth_beta, &b_track_truth_beta);
   fChain->SetBranchAddress("track_truth_e", &track_truth_e, &b_track_truth_e);
   fChain->SetBranchAddress("track_truth_m", &track_truth_m, &b_track_truth_m);
   fChain->SetBranchAddress("track_truth_p", &track_truth_p, &b_track_truth_p);
   fChain->SetBranchAddress("track_truth_pdgid", &track_truth_pdgid, &b_track_truth_pdgid);
   fChain->SetBranchAddress("track_truth_pt", &track_truth_pt, &b_track_truth_pt);
   fChain->SetBranchAddress("track_vertextype", &track_vertextype, &b_track_vertextype);
   fChain->SetBranchAddress("track_z0", &track_z0, &b_track_z0);
   fChain->SetBranchAddress("trk_n", &trk_n, &b_trk_n);
   fChain->SetBranchAddress("truthMET", &truthMET, &b_truthMET);
   fChain->SetBranchAddress("truthMET_Phi", &truthMET_Phi, &b_truthMET_Phi);
   fChain->SetBranchAddress("truthMET_RH_OutEMCalo", &truthMET_RH_OutEMCalo, &b_truthMET_RH_OutEMCalo);
   fChain->SetBranchAddress("truthMET_RH_OutEMCalo_Phi", &truthMET_RH_OutEMCalo_Phi, &b_truthMET_RH_OutEMCalo_Phi);
   fChain->SetBranchAddress("truthMET_RH_OutEMCalo_noCRH", &truthMET_RH_OutEMCalo_noCRH, &b_truthMET_RH_OutEMCalo_noCRH);
   fChain->SetBranchAddress("truthMET_RH_OutEMCalo_noCRH_Phi", &truthMET_RH_OutEMCalo_noCRH_Phi, &b_truthMET_RH_OutEMCalo_noCRH_Phi);
   fChain->SetBranchAddress("vertex_nTrack", &vertex_nTrack, &b_vertex_nTrack);
   fChain->SetBranchAddress("vertex_z", &vertex_z, &b_vertex_z);
   Notify();
}

Bool_t eff::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void eff::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t eff::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef eff_cxx
