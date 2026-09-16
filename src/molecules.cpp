#include "molecules.h"

void print_molecular_formula(Adafruit_SSD1306 *display, const struct molecule *Molecule){
  display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println(Molecule->molecular_formula);
  display->display();
}

void print_trivialname(Adafruit_SSD1306 *display, const struct molecule *Molecule){
  display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println(Molecule->trivialname);
  display->display();
}

void print_init(Adafruit_SSD1306 *display){

    display->clearDisplay();
  display->setTextColor(SSD1306_WHITE);
  display->setTextSize(2);
  display->setCursor(0, 0);
  display->println("Marhaban");
  display->display();
}

const molecule Molecules[] PROGMEM = {
    {"HNO3",      "Salpetersaeure"},
    {"HNO2",      "Salpetrige Saeure"},
    {"NO3-",      "Nitrat-Ion"},
    {"NO2-",      "Nitrit-Ion"},
    {"N3-",       "Nitrid-Ion"},
    {"Cu(NO3)2",  "Kupfer(II)-nitrat"},
    {"NaNO3",     "Natriumnitrat"},
    {"Sn(NO3)4",  "Zinn(IV)Nitrat"},
    {"H3PO4",     "Phosphorsaeure"},
    {"H3PO3",     "Phosphorige Saeure"},
    {"PH4+",      "Phosphonium"},
    {"PO4^3-",    "Phosphat-Ion"},
    {"HPO4^2-",   "Hydrogenphosphat"},
    {"H2PO4-",    "Dihydrogenphosphat"},
    {"P3-",       "Phosphid-Ion"},
    {"Ca3(PO4)2", "Calciumphosphat"},
    {"H2SO3",     "Schwefelige Saeure"},
    {"H2SO4",     "Schwefelsaeure"},
    {"H2SO5",     "Perschwefelsaeure"},
    {"H2S",       "Schwefelwasserstoffsaeure"},
    {"SO3^2-",    "Sulfit-Ion"},
    {"SO4^2-",    "Sulfat-Ion"},
    {"SO5^2-",    "Persulfat-Ion"},
    {"HS-",       "Hydrogensulfid-Ion"},
    {"HSO4-",     "Hydrogensulfat-Ion"},
    {"S2-",       "Sulfid-Ion"},
    {"Cu2S",      "Kupfer(I)sulfid"},
    {"CuS",       "Kupfer(II)sulfid"},
    {"CaSO4",     "Calciumsulfat"},
    {"(NH4)2SO4", "Ammoniumsulfat"},
    {"HClO",      "Unterchlorige Saeure"},
    {"HClO2",     "Chlorige Saeure"},
    {"HClO3",     "Chlorsaeure"},
    {"HClO4",     "Perchlorsaeure"},
    {"HCL",       "Chlorwasserstoffsaeure/Salzsaeure"},
    {"ClO-",      "Hypochlorit-Ion"},
    {"ClO2-",     "Chlorit-Ion"},
    {"ClO3-",     "Chlorat-Ion"},
    {"ClO4-",     "Perchlorat-Ion"},
    {"Cl-",       "Chlorid-Ion"},
    {"NaCl",      "Natriumchlorid"},
    {"BrCl",      "Bromchlorid"},
    {"FeCl2",     "Eisen(II)-chlorid"},
    {"FeCl3",     "Eisen(III)-chlorid"},
    {"CH3COOH",   "Essigsaeure"},
    {"CH3OO-",    "Acetat-Ion"},
    {"H2CO3",     "Kohlensaeure"},
    {"HCO3-",     "Hydrogencarbonat-Ion"},
    {"HCO3-",     "Hydrogencarbonat"},
    {"CO3^2-",    "Carbonat-Ion"},
    {"H2CrO4",    "Chromsaeure"},
    {"CrO4^2-",   "Chromat-Ion"},
    {"Cr2O7^2-",  "Dichromat-Ion"},
    {"Ag2CrO4",   "Silber(I)Chromat"},
    {"Na2CrO4",   "Natriumchromat"},
    {"HBrO3",     "Bromsaeure"},
    {"HBr",       "Bromwasserstoffsaeure"},
    {"BrO3-",     "Bromat-Ion"},
    {"Br-",       "Bromid-Ion"},
    {"HIO3",      "Iodsaeure"},
    {"HI",        "Iodwasserstoffsaeure"},
    {"IO3-",      "Iodat"},
    {"I-",        "Iodid-Ion"},
    {"H2C2O4",    "Oxalsaeure"},
    {"C2O4^2-",   "Oxalat"},
    {"HF",        "Flusssaeure"},
    {"F-",        "Flourid-Ion"},
    {"H3O+",      "Hydronium-Ion"},
    {"H2O",       "Wasser/Dihydrogenoxid"},
    {"OH-",       "Hydroxid-Ion"},
    {"OH3+",      "Oxonium-Ion"},
    {"H2O2",      "Wasserstoffperoxid"},
    {"H2O",       "Wasser"},
    {"O^2-",      "Oxid-Ion"},
    {"O2^2-",     "Peroxid-Ion"},
    {"NaOH",      "Natriumhydroxid"},
    {"MnO2",      "Mangandioxid/Braunstein"},
    {"SO2",       "Schwefeldioxid"},
    {"NO",        "Stickstoff(mon)oxid"},
    {"NO2",       "Stickstoffdioxid"},
    {"N2O4",      "Distickstofftetroxid"},
    {"N2O",       "Distickstoffoxid"},
    {"CuO",       "Kupfer(I)oxid"},
    {"Fe2O3",     "Eisen(III)oxid"},
    {"Al2O3",     "Aluminiumoxid"},
    {"NH4+",      "Ammonium-Ion"},
    {"NH3",       "Ammoniak"},
    {"NH2",       "Amid-Ion"},
    {"NaNH2",     "Natriumamid"},
    {"Si(OH)4",   "Ortho-Kieselsaeure"},
    {"SiO4-",     "Silikat-Ion"},
    {"H2SeO4",    "Selensaeure"},
    {"SeO4^2-",   "Selenat-Ion"},
    {"H2MnO4",    "Mangansaeure"},
    {"MnO4^2-",   "Manganat"},
    {"MnO4-",     "Permanganat"},
    {"HN3",       "Stickstoffwasserstoffsaeure"},
    {"N3-",       "Azid"},
    {"H6TeO6",    "Tellursaeure"},
    {"TeO6^6-",   "Tellurate"},
    {"CH3NH3+",   "Methylammonium-Ion"},
    {"CH3NH2",    "Methylamin"},
    {"C3H6O2",    "Propionsaeure"},
    {"C3H5O2-",   "Propionat"},
    {"C3H5KO2",   "Kaliumpropionat"},
    {"CH4",       "Methan"},
    {"CH3-",      "Methid-Ion"},
    {"Zn2+",      "Zink-Kation"},
    {"SiC",       "Siliciumcarbid"},
    {"HSCN",      "Rhodanwasserstoffsaeure"},
    {"SCN-",      "Rhodanid/Thiocyanat"},
    {"HCN",       "Cyanwasserstoff/Blausaeure"},
    {"CN-",       "Cyanid"},
};

constexpr size_t MOLECULE_COUNT = sizeof(Molecules) / sizeof(Molecules[0]);

void getRandomMolecule(molecule *Current){
  size_t index = random(MOLECULE_COUNT);
  memcpy_P(Current, &Molecules[index], sizeof(molecule));
}
