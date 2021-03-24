#pragma once

#include "MyForm2.h"
#include <ClassLibrary3.h>
#include "Header.h"


namespace KozhanovMSBFI2002Al {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ClassLibrary3;
	using namespace Microsoft::VisualBasic;


	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:

		MyForm2(System::Windows::Forms::Form^ _MyForm)
		{
			MyForm = _MyForm;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		

	
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ grid;
	private: System::Windows::Forms::DataGridView^ grid2;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->grid = (gcnew System::Windows::Forms::DataGridView());
			this->grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(109, 570);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(273, 569);
			this->button3->Margin = System::Windows::Forms::Padding(5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 34);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(58, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1373, 54);
			this->label1->TabIndex = 21;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(63, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 27);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Исходный массив:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(66, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(271, 27);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Результирующий массив:";
			// 
			// grid
			// 
			this->grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->grid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid->ColumnHeadersVisible = false;
			this->grid->Location = System::Drawing::Point(71, 236);
			this->grid->Name = L"grid";
			this->grid->RowHeadersVisible = false;
			this->grid->RowHeadersWidth = 51;
			this->grid->RowTemplate->Height = 24;
			this->grid->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->grid->Size = System::Drawing::Size(320, 50);
			this->grid->TabIndex = 24;
			// 
			// grid2
			// 
			this->grid2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->grid2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grid2->ColumnHeadersVisible = false;
			this->grid2->Location = System::Drawing::Point(71, 330);
			this->grid2->Name = L"grid2";
			this->grid2->RowHeadersVisible = false;
			this->grid2->RowHeadersWidth = 51;
			this->grid2->RowTemplate->Height = 24;
			this->grid2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->grid2->Size = System::Drawing::Size(320, 50);
			this->grid2->TabIndex = 25;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(188, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 26;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->grid2);
			this->Controls->Add(this->grid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public: System::Windows::Forms::Form^ MyForm;
#pragma endregion
	
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MyForm != nullptr)
			this->MyForm->Show();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult k = MessageBox::Show("Вы уверены, что хотите выйти из программы?", "Выход", MessageBoxButtons::YesNo);
		if (k == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int  j = 0;
		String^ g = Interaction::InputBox("Введите количество элементов в массиве", "Ввод", "", -1, -1);
		int n = Convert::ToInt16(g);
		double* mas = new double[n];
		double maximum = -999999;
		int max_i, k;
		Class2::enter_mas(mas, n);
		Class2::output_mas(mas, n, grid);
		max_i = Class2::max_mas(maximum, n, mas);
		MessageBox::Show(Convert::ToString(max_i), "Индекс максимального элемента", MessageBoxButtons::OK, MessageBoxIcon::Information);
		k = Class2::count(n, maximum, k,  mas);
		double* rezmas = new double[k];
		Class2::set_mas(mas, rezmas, n, maximum);
		Class2::output_mas(rezmas, k, grid2);
	}
};
}
