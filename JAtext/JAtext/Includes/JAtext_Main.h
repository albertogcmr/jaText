#ifndef _APPMAIN_H_
#define _APPMAIN_H_

// Displays the UOCCar App application main menu
void appMain_displayMenu();

// Displays the Cars Management sub-menu1
void appMain_displaysubMenu_metadatos(FILE * fp);

// Displays the Cars Management sub-menu2
void appMain_displaysubMenu_edicion(FILE * fp);

// Displays the Cars Management sub-menu3
void appMain_displaysubMenu_archivos(FILE * fp);

#endif