#ifndef CORE_H_INCLUDED
#define CORE_H_INCLUDED

void fill_grid(int grid[9][9], int grid_fixes[9][9]); //Remplissage de la grille
void get_grid(int grid[9][9]); //R�cup�ration de la grille
void get_fixed_grid(int grid_fixes[9][9]); //R�cup�ration de la grille des elts fix�s

int is_grid_valid(int grid[9][9]); //V�rifit si une grille est valide
int equal_grid(int grid1[9][9], int grid2[9][9]); //V�rifit si deux grille sont �gales

#endif // CORE_H_INCLUDED
