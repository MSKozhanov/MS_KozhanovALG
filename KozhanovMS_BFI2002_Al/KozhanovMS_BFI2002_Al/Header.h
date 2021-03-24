#pragma once

using namespace System::Windows::Forms;

static void enter_mas(double* mas, int n);
static void output_mas(double* mas, int n, DataGridView^ grid);
static void  set_mas(double* mas, double* rezmas, int n, double& maximum);
static int max_mas(double& maximum, int n, double* mas);
static int count(int n, double& maximum, int& k, double* mas);