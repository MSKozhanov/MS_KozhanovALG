#pragma once
#include <cstdlib>
#include <time.h>
#include "Header.h"

using namespace System;
using namespace System::Windows::Forms;

namespace ClassLibrary3 {
	public ref class Class2
	{
	public:

		static void Class2::enter_mas(double* mas, int n)
		{
			srand(time(0));
			for (int i = 0; i < n; i++)
				mas[i] = (int)(rand() % 900 / 20 - 20);
		}
		static void Class2::output_mas(double* mas, int n, DataGridView^ grid) {
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
		static void  Class2::set_mas(double* mas, double* rezmas, int n, double& maximum) {

			int j = 0;
			for (int i = 0; i < n; i++)
				if (mas[i] < maximum)
				{
					rezmas[j] = mas[i];
					j++;
				}
		}
		static int Class2::max_mas(double& maximum, int n, double* mas)
		{
			maximum = -99999.0;
			int max_index = 0;
			for (int i = 0; i < n; i++)
			{
				if (mas[i] > maximum)
				{
					maximum = mas[i];
					max_index = i;
				}
			}
			return max_index;
		}
		static int Class2::count(int n, double& maximum, int& k, double* mas)
		{
			k = 0;
			for (int i = 0; i < n; i++)
			{
				if (mas[i] < maximum)
					k++;
			}
			return k;
		}
	};
}
