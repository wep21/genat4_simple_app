#include "FTFP_BERT.hh"
#include "G4RunManager.hh"
#include "G4UIExecutive.hh"
#include "G4UImanager.hh"
#include "G4VisExecutive.hh"

int main(int argc, char** argv) {
  G4RunManager* runManager = new G4RunManager();

  auto physicsList = new FTFP_BERT;
  runManager->SetUserInitialization(physicsList);

  G4UIExecutive* ui = new G4UIExecutive(argc, argv);
  G4VisExecutive* visManager = new G4VisExecutive();
  visManager->Initialise();
  G4UImanager* UIManager = G4UImanager::GetUIpointer();
  ui->SessionStart();

  delete runManager;
  delete ui;
  delete visManager;
  return 0;
}
