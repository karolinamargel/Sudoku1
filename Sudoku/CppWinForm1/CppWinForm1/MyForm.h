#pragma once
#include "info.h"
#include "o_grze.h"
#include "sudoku1.h"
#include "sudoku2.h"
#include "sudoku3.h"
#include "wyniki.h"

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  wybor_sudoku;
	private: System::Windows::Forms::Button^  info;
	private: System::Windows::Forms::Button^  zamknij;
	private: System::Windows::Forms::Button^  wyniki;
	private: System::Windows::Forms::Button^  poziom_latwy;
	private: System::Windows::Forms::Button^  poziom_sredni;
	private: System::Windows::Forms::Button^  poziom_trudny;
	private: System::Windows::Forms::Button^  wroc;
	private: System::Windows::Forms::Button^  info_o_grze;



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->wybor_sudoku = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Button());
			this->zamknij = (gcnew System::Windows::Forms::Button());
			this->wyniki = (gcnew System::Windows::Forms::Button());
			this->poziom_latwy = (gcnew System::Windows::Forms::Button());
			this->poziom_sredni = (gcnew System::Windows::Forms::Button());
			this->poziom_trudny = (gcnew System::Windows::Forms::Button());
			this->wroc = (gcnew System::Windows::Forms::Button());
			this->info_o_grze = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// wybor_sudoku
			// 
			this->wybor_sudoku->Location = System::Drawing::Point(310, 186);
			this->wybor_sudoku->Name = L"wybor_sudoku";
			this->wybor_sudoku->Size = System::Drawing::Size(160, 40);
			this->wybor_sudoku->TabIndex = 1;
			this->wybor_sudoku->Text = L"Wybierz sudoku";
			this->wybor_sudoku->UseVisualStyleBackColor = true;
			this->wybor_sudoku->Click += gcnew System::EventHandler(this, &MyForm::wybor_sudoku_Click);
			// 
			// info
			// 
			this->info->Location = System::Drawing::Point(310, 367);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(160, 40);
			this->info->TabIndex = 2;
			this->info->Text = L"Informacje o autorze";
			this->info->UseVisualStyleBackColor = true;
			this->info->Click += gcnew System::EventHandler(this, &MyForm::info_Click);
			// 
			// zamknij
			// 
			this->zamknij->Location = System::Drawing::Point(310, 427);
			this->zamknij->Name = L"zamknij";
			this->zamknij->Size = System::Drawing::Size(160, 40);
			this->zamknij->TabIndex = 3;
			this->zamknij->Text = L"Zamknij";
			this->zamknij->UseVisualStyleBackColor = true;
			this->zamknij->Click += gcnew System::EventHandler(this, &MyForm::zamknij_Click);
			// 
			// wyniki
			// 
			this->wyniki->Location = System::Drawing::Point(310, 245);
			this->wyniki->Name = L"wyniki";
			this->wyniki->Size = System::Drawing::Size(160, 40);
			this->wyniki->TabIndex = 4;
			this->wyniki->Text = L"Wyniki";
			this->wyniki->UseVisualStyleBackColor = true;
			this->wyniki->Click += gcnew System::EventHandler(this, &MyForm::wyniki_Click);
			// 
			// poziom_latwy
			// 
			this->poziom_latwy->Location = System::Drawing::Point(310, 186);
			this->poziom_latwy->Name = L"poziom_latwy";
			this->poziom_latwy->Size = System::Drawing::Size(160, 40);
			this->poziom_latwy->TabIndex = 5;
			this->poziom_latwy->Text = L"Poziom ³atwy";
			this->poziom_latwy->UseVisualStyleBackColor = true;
			this->poziom_latwy->Click += gcnew System::EventHandler(this, &MyForm::poziom_latwy_Click);
			// 
			// poziom_sredni
			// 
			this->poziom_sredni->Location = System::Drawing::Point(310, 245);
			this->poziom_sredni->Name = L"poziom_sredni";
			this->poziom_sredni->Size = System::Drawing::Size(160, 40);
			this->poziom_sredni->TabIndex = 6;
			this->poziom_sredni->Text = L"Poziom œredni";
			this->poziom_sredni->UseVisualStyleBackColor = true;
			this->poziom_sredni->Click += gcnew System::EventHandler(this, &MyForm::poziom_sredni_Click);
			// 
			// poziom_trudny
			// 
			this->poziom_trudny->Location = System::Drawing::Point(310, 305);
			this->poziom_trudny->Name = L"poziom_trudny";
			this->poziom_trudny->Size = System::Drawing::Size(160, 40);
			this->poziom_trudny->TabIndex = 7;
			this->poziom_trudny->Text = L"Poziom trudny";
			this->poziom_trudny->UseVisualStyleBackColor = true;
			this->poziom_trudny->Click += gcnew System::EventHandler(this, &MyForm::poziom_trudny_Click);
			// 
			// wroc
			// 
			this->wroc->Location = System::Drawing::Point(310, 367);
			this->wroc->Name = L"wroc";
			this->wroc->Size = System::Drawing::Size(160, 40);
			this->wroc->TabIndex = 8;
			this->wroc->Text = L"Wroc";
			this->wroc->UseVisualStyleBackColor = true;
			this->wroc->Click += gcnew System::EventHandler(this, &MyForm::wroc_Click);
			// 
			// info_o_grze
			// 
			this->info_o_grze->Location = System::Drawing::Point(310, 305);
			this->info_o_grze->Name = L"info_o_grze";
			this->info_o_grze->Size = System::Drawing::Size(160, 40);
			this->info_o_grze->TabIndex = 9;
			this->info_o_grze->Text = L"O grze";
			this->info_o_grze->UseVisualStyleBackColor = true;
			this->info_o_grze->Click += gcnew System::EventHandler(this, &MyForm::info_o_grze_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->info_o_grze);
			this->Controls->Add(this->wroc);
			this->Controls->Add(this->poziom_trudny);
			this->Controls->Add(this->poziom_sredni);
			this->Controls->Add(this->poziom_latwy);
			this->Controls->Add(this->wyniki);
			this->Controls->Add(this->zamknij);
			this->Controls->Add(this->info);
			this->Controls->Add(this->wybor_sudoku);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		poziom_latwy->Hide();
		poziom_sredni->Hide();
		poziom_trudny->Hide();
		wroc->Hide();
	}

	private: System::Void info_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::info^ infoForm = gcnew CppWinForm1::info();
		infoForm->Show();
	}

	private: System::Void zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	private: System::Void wybor_sudoku_Click(System::Object^  sender, System::EventArgs^  e) {
		//menu - ukryj
		wyniki->Hide();
		wybor_sudoku->Hide();
		info->Hide();
		zamknij->Hide();
		info_o_grze->Hide();
		//wybor poziomow - pokaz
		poziom_latwy->Show();
		poziom_sredni->Show();
		poziom_trudny->Show();
		wroc->Show();
	}

	private: System::Void wroc_Click(System::Object^  sender, System::EventArgs^  e) {
		//menu - pokaz
		wyniki->Show();
		wybor_sudoku->Show();
		info->Show();
		zamknij->Show();
		info_o_grze->Show();
		//wybor poziomow - ukryj
		poziom_latwy->Hide();
		poziom_sredni->Hide();
		poziom_trudny->Hide();
		wroc->Hide();
	}

	private: System::Void info_o_grze_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::o_grze^ o_grzeForm = gcnew o_grze(); 
		o_grzeForm->Show();
	}

	private: System::Void poziom_latwy_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::sudoku1^ sudoku1Form = gcnew sudoku1();
		sudoku1Form->Show();
	}

	private: System::Void poziom_sredni_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::sudoku2^ sudoku2Form = gcnew sudoku2();
		sudoku2Form->Show();
	}

	private: System::Void poziom_trudny_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::sudoku3^ sudoku3Form = gcnew sudoku3();
		sudoku3Form->Show();
	}

	private: System::Void wyniki_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::wyniki^ wynikiForm = gcnew CppWinForm1::wyniki();
		wynikiForm->Show();
	}
};
}
