
#pragma once
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
//добавить инклюд на заголовочный файл

using namespace System;
using namespace System::Windows::Forms;

namespace ClassLibrary2 {

	
	public class Class11 
	{
		// TODO: Добавьте сюда свои методы для этого класса.
		
	public:

	    static void Class11::vvodText(double& x,TextBox^ t) {
			
			String^ s = t->Text;
			x = Convert::ToDouble(s);
		}
		

		static void Class11::vivod(double x) {

			MessageBox::Show(Convert::ToString(x), "Ответ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		static void Class11::vivodList(ListBox^ L, int n1, double s1) {


			L->Items->Add("При k = " + n1.ToString() + " | " + s1.ToString());
		}
		static void Class11::vivod_text(double x, TextBox^ t)
		{
			String^ s = Convert::ToString(x);
			t->Text = s;
		}

		static double Class11::Fun2(double x2, double n, ListBox^ listBox1) {


			double v = 1.0;
			double c;
			for (int k = 1; k <= n; k++) {
				v = v * ((cos(sqrt(k * x2)) + log(x2)) / (pow(x2 * x2, 1.0 / 3.0) + 1.0 / 3.0));
				vivodList(listBox1, k, v);
				c = v + (n * exp(x2) + 1.5);

			}
			return c;

		}
		static double Class11::Fun1(double x1) {

			const double c = (1.0 / 3.0);
			const double p1 = sqrt(fabs(sin(x1)));
			const double p2 = pow(exp(0.12 * x1), c);

			double y = c * p1 * p2;
			return y;
		}

		static void Class11::enter_mas(double* mas, int n)
		{
			//srand(time(0));
			for (int i = 0; i < n; i++)
				mas[i] = (int)(rand() % 900 / 20 - 20);
		}
		static void output_mas(double* mas, int n, DataGridView^ grid) {
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
		static void  Class11::set_mas(double* mas, double* rezmas, int n, double &maximum) {
			
			int j = 0;
			for (int i = 0; i < n; i++)
				if (mas[i] < maximum) 
				{
					rezmas[j] = mas[i];
					j++;
				}
		}
		static int Class11::max_mas(double &maximum, int n, double* mas)
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
		static int Class11::count(int n, double &maximum, int &k, double* mas)
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
