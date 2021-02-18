
#pragma once
#include <math.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;



namespace ClassLibrary2 {


	public class Class11 
	{
		// TODO: Добавьте сюда свои методы для этого класса.
	public:

	    static double Class11::vvodText(TextBox^ t) {
			return Convert::ToDouble(t->Text);
		}
		

		static void Class11::vivod(double x, TextBox^ t) {
			t->Text = Convert::ToString(x);
		}
		static void Class11::vivodList(ListBox^ L, int n1, double s1) {


			L->Items->Add("При k = " + n1.ToString() + " | " + s1.ToString());
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



		



		
			
			
				
		
	};
}
