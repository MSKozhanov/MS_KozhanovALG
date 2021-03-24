#include "Header.h"
#include <stdlib.h>
#include "MyForm2.h"

using namespace System::Windows::Forms;
using namespace System;
using namespace KozhanovMSBFI2002Al;



	void enter_mas(double* mas, int n)
	{
		for (int i = 0; i < n; i++)
			mas[i] = (int)(rand() % 900 / 20 - 20);
	}

	void output_mas(double* mas, int n, DataGridView^ grid) {
		grid->ColumnCount = n;
		grid->RowCount = 2;
		for (int i = 0; i < n; i++)
		{
			grid->Rows[0]->Cells[i]->Value = "[" + i + "]";
			grid->Rows[1]->Cells[i]->Value = mas[i];
		}
		int width = 0;
		for (int s = 0; s < grid->ColumnCount; s++)
			width += grid->Columns[s]->Width;
		if (width > 440)
			grid->Width = 440;
		else
			grid->Width = width;
	}

	void  set_mas(double* mas, double* rezmas, int n, double& maximum) {

		int j = 0;
		for (int i = 0; i < n; i++)
			if (mas[i] < maximum)
			{
				rezmas[j] = mas[i];
				j++;
			}
	}

	int max_mas(double& maximum, int n, double* mas)
	{
		maximum = -99999.0;
		int max_index = 0;
		for (int i = 0; i < n; i++)
		{
			if (mas[i] > maximum)
			{
				maximum = mas[i];
				max_index = i + 1;
			}
		}
		return max_index - 1;
	}

	int count(int n, double& maximum, int& k, double* mas)
	{
		k = 0;
		for (int i = 0; i < n; i++)
		{
			if (mas[i] < maximum)
				k++;
		}
		return k;
	}