#pragma once
#include "wyniki.h"

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sudoku1
	/// </summary>
	public ref class sudoku1 : public System::Windows::Forms::Form
	{
		static int sekunda;
		static int minuta;
		String^ sek;
	private: System::Windows::Forms::Button^  spr1;
	private: System::Windows::Forms::Button^  zapisz;
			 String^ min;

	public:
		sudoku1(void)
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
		~sudoku1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_2;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_3;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_4;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_5;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_6;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_7;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_8;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_9;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_10;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_11;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_13;

	private: System::Windows::Forms::MaskedTextBox^  sudoku1_12;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_14;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_15;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_16;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_17;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_18;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_19;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_20;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_21;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_22;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_23;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_24;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_25;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_26;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_27;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_28;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_29;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_30;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_31;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_32;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_36;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_37;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_38;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_39;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_40;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_34;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_35;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_41;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_42;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_43;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_44;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_45;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_46;
	private: System::Windows::Forms::MaskedTextBox^  sudoku1_47;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  nazwa_gracza1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  Czas1;


	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sudoku1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sudoku1_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_44 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_45 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_46 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku1_47 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nazwa_gracza1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Czas1 = (gcnew System::Windows::Forms::Label());
			this->spr1 = (gcnew System::Windows::Forms::Button());
			this->zapisz = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(230, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// sudoku1_1
			// 
			this->sudoku1_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_1->Location = System::Drawing::Point(250, 36);
			this->sudoku1_1->Mask = L"0";
			this->sudoku1_1->Name = L"sudoku1_1";
			this->sudoku1_1->Size = System::Drawing::Size(25, 28);
			this->sudoku1_1->TabIndex = 3;
			// 
			// sudoku1_2
			// 
			this->sudoku1_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_2->Location = System::Drawing::Point(298, 36);
			this->sudoku1_2->Mask = L"0";
			this->sudoku1_2->Name = L"sudoku1_2";
			this->sudoku1_2->Size = System::Drawing::Size(25, 28);
			this->sudoku1_2->TabIndex = 4;
			// 
			// sudoku1_3
			// 
			this->sudoku1_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_3->Location = System::Drawing::Point(407, 36);
			this->sudoku1_3->Mask = L"0";
			this->sudoku1_3->Name = L"sudoku1_3";
			this->sudoku1_3->Size = System::Drawing::Size(25, 28);
			this->sudoku1_3->TabIndex = 5;
			// 
			// sudoku1_4
			// 
			this->sudoku1_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_4->Location = System::Drawing::Point(456, 36);
			this->sudoku1_4->Mask = L"0";
			this->sudoku1_4->Name = L"sudoku1_4";
			this->sudoku1_4->Size = System::Drawing::Size(25, 28);
			this->sudoku1_4->TabIndex = 6;
			// 
			// sudoku1_5
			// 
			this->sudoku1_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_5->Location = System::Drawing::Point(514, 36);
			this->sudoku1_5->Mask = L"0";
			this->sudoku1_5->Name = L"sudoku1_5";
			this->sudoku1_5->Size = System::Drawing::Size(25, 28);
			this->sudoku1_5->TabIndex = 7;
			// 
			// sudoku1_6
			// 
			this->sudoku1_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_6->Location = System::Drawing::Point(572, 36);
			this->sudoku1_6->Mask = L"0";
			this->sudoku1_6->Name = L"sudoku1_6";
			this->sudoku1_6->Size = System::Drawing::Size(25, 28);
			this->sudoku1_6->TabIndex = 8;
			// 
			// sudoku1_7
			// 
			this->sudoku1_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_7->Location = System::Drawing::Point(673, 36);
			this->sudoku1_7->Mask = L"0";
			this->sudoku1_7->Name = L"sudoku1_7";
			this->sudoku1_7->Size = System::Drawing::Size(25, 28);
			this->sudoku1_7->TabIndex = 9;
			// 
			// sudoku1_8
			// 
			this->sudoku1_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_8->Location = System::Drawing::Point(298, 86);
			this->sudoku1_8->Mask = L"0";
			this->sudoku1_8->Name = L"sudoku1_8";
			this->sudoku1_8->Size = System::Drawing::Size(25, 28);
			this->sudoku1_8->TabIndex = 10;
			// 
			// sudoku1_9
			// 
			this->sudoku1_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_9->Location = System::Drawing::Point(351, 86);
			this->sudoku1_9->Mask = L"0";
			this->sudoku1_9->Name = L"sudoku1_9";
			this->sudoku1_9->Size = System::Drawing::Size(25, 28);
			this->sudoku1_9->TabIndex = 11;
			// 
			// sudoku1_10
			// 
			this->sudoku1_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_10->Location = System::Drawing::Point(630, 86);
			this->sudoku1_10->Mask = L"0";
			this->sudoku1_10->Name = L"sudoku1_10";
			this->sudoku1_10->Size = System::Drawing::Size(25, 28);
			this->sudoku1_10->TabIndex = 12;
			// 
			// sudoku1_11
			// 
			this->sudoku1_11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_11->Location = System::Drawing::Point(673, 86);
			this->sudoku1_11->Mask = L"0";
			this->sudoku1_11->Name = L"sudoku1_11";
			this->sudoku1_11->Size = System::Drawing::Size(25, 28);
			this->sudoku1_11->TabIndex = 13;
			// 
			// sudoku1_13
			// 
			this->sudoku1_13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_13->Location = System::Drawing::Point(351, 135);
			this->sudoku1_13->Mask = L"0";
			this->sudoku1_13->Name = L"sudoku1_13";
			this->sudoku1_13->Size = System::Drawing::Size(25, 28);
			this->sudoku1_13->TabIndex = 14;
			// 
			// sudoku1_12
			// 
			this->sudoku1_12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_12->Location = System::Drawing::Point(250, 135);
			this->sudoku1_12->Mask = L"0";
			this->sudoku1_12->Name = L"sudoku1_12";
			this->sudoku1_12->Size = System::Drawing::Size(25, 28);
			this->sudoku1_12->TabIndex = 15;
			// 
			// sudoku1_14
			// 
			this->sudoku1_14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_14->Location = System::Drawing::Point(407, 135);
			this->sudoku1_14->Mask = L"0";
			this->sudoku1_14->Name = L"sudoku1_14";
			this->sudoku1_14->Size = System::Drawing::Size(25, 28);
			this->sudoku1_14->TabIndex = 16;
			// 
			// sudoku1_15
			// 
			this->sudoku1_15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_15->Location = System::Drawing::Point(456, 135);
			this->sudoku1_15->Mask = L"0";
			this->sudoku1_15->Name = L"sudoku1_15";
			this->sudoku1_15->Size = System::Drawing::Size(25, 28);
			this->sudoku1_15->TabIndex = 17;
			// 
			// sudoku1_16
			// 
			this->sudoku1_16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_16->Location = System::Drawing::Point(572, 135);
			this->sudoku1_16->Mask = L"0";
			this->sudoku1_16->Name = L"sudoku1_16";
			this->sudoku1_16->Size = System::Drawing::Size(25, 28);
			this->sudoku1_16->TabIndex = 18;
			// 
			// sudoku1_17
			// 
			this->sudoku1_17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_17->Location = System::Drawing::Point(630, 135);
			this->sudoku1_17->Mask = L"0";
			this->sudoku1_17->Name = L"sudoku1_17";
			this->sudoku1_17->Size = System::Drawing::Size(25, 28);
			this->sudoku1_17->TabIndex = 19;
			// 
			// sudoku1_18
			// 
			this->sudoku1_18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_18->Location = System::Drawing::Point(250, 195);
			this->sudoku1_18->Mask = L"0";
			this->sudoku1_18->Name = L"sudoku1_18";
			this->sudoku1_18->Size = System::Drawing::Size(25, 28);
			this->sudoku1_18->TabIndex = 20;
			// 
			// sudoku1_19
			// 
			this->sudoku1_19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_19->Location = System::Drawing::Point(298, 195);
			this->sudoku1_19->Mask = L"0";
			this->sudoku1_19->Name = L"sudoku1_19";
			this->sudoku1_19->Size = System::Drawing::Size(25, 28);
			this->sudoku1_19->TabIndex = 21;
			// 
			// sudoku1_20
			// 
			this->sudoku1_20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_20->Location = System::Drawing::Point(572, 195);
			this->sudoku1_20->Mask = L"0";
			this->sudoku1_20->Name = L"sudoku1_20";
			this->sudoku1_20->Size = System::Drawing::Size(25, 28);
			this->sudoku1_20->TabIndex = 22;
			// 
			// sudoku1_21
			// 
			this->sudoku1_21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_21->Location = System::Drawing::Point(673, 195);
			this->sudoku1_21->Mask = L"0";
			this->sudoku1_21->Name = L"sudoku1_21";
			this->sudoku1_21->Size = System::Drawing::Size(25, 28);
			this->sudoku1_21->TabIndex = 23;
			// 
			// sudoku1_22
			// 
			this->sudoku1_22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_22->Location = System::Drawing::Point(250, 243);
			this->sudoku1_22->Mask = L"0";
			this->sudoku1_22->Name = L"sudoku1_22";
			this->sudoku1_22->Size = System::Drawing::Size(25, 28);
			this->sudoku1_22->TabIndex = 24;
			// 
			// sudoku1_23
			// 
			this->sudoku1_23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_23->Location = System::Drawing::Point(298, 243);
			this->sudoku1_23->Mask = L"0";
			this->sudoku1_23->Name = L"sudoku1_23";
			this->sudoku1_23->Size = System::Drawing::Size(25, 28);
			this->sudoku1_23->TabIndex = 25;
			// 
			// sudoku1_24
			// 
			this->sudoku1_24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_24->Location = System::Drawing::Point(572, 243);
			this->sudoku1_24->Mask = L"0";
			this->sudoku1_24->Name = L"sudoku1_24";
			this->sudoku1_24->Size = System::Drawing::Size(25, 28);
			this->sudoku1_24->TabIndex = 26;
			// 
			// sudoku1_25
			// 
			this->sudoku1_25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_25->Location = System::Drawing::Point(673, 243);
			this->sudoku1_25->Mask = L"0";
			this->sudoku1_25->Name = L"sudoku1_25";
			this->sudoku1_25->Size = System::Drawing::Size(25, 28);
			this->sudoku1_25->TabIndex = 27;
			// 
			// sudoku1_26
			// 
			this->sudoku1_26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_26->Location = System::Drawing::Point(298, 300);
			this->sudoku1_26->Mask = L"0";
			this->sudoku1_26->Name = L"sudoku1_26";
			this->sudoku1_26->Size = System::Drawing::Size(25, 28);
			this->sudoku1_26->TabIndex = 28;
			// 
			// sudoku1_27
			// 
			this->sudoku1_27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_27->Location = System::Drawing::Point(351, 300);
			this->sudoku1_27->Mask = L"0";
			this->sudoku1_27->Name = L"sudoku1_27";
			this->sudoku1_27->Size = System::Drawing::Size(25, 28);
			this->sudoku1_27->TabIndex = 29;
			// 
			// sudoku1_28
			// 
			this->sudoku1_28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_28->Location = System::Drawing::Point(407, 300);
			this->sudoku1_28->Mask = L"0";
			this->sudoku1_28->Name = L"sudoku1_28";
			this->sudoku1_28->Size = System::Drawing::Size(25, 28);
			this->sudoku1_28->TabIndex = 30;
			// 
			// sudoku1_29
			// 
			this->sudoku1_29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_29->Location = System::Drawing::Point(456, 300);
			this->sudoku1_29->Mask = L"0";
			this->sudoku1_29->Name = L"sudoku1_29";
			this->sudoku1_29->Size = System::Drawing::Size(25, 28);
			this->sudoku1_29->TabIndex = 31;
			// 
			// sudoku1_30
			// 
			this->sudoku1_30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_30->Location = System::Drawing::Point(572, 300);
			this->sudoku1_30->Mask = L"0";
			this->sudoku1_30->Name = L"sudoku1_30";
			this->sudoku1_30->Size = System::Drawing::Size(25, 28);
			this->sudoku1_30->TabIndex = 32;
			// 
			// sudoku1_31
			// 
			this->sudoku1_31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_31->Location = System::Drawing::Point(630, 300);
			this->sudoku1_31->Mask = L"0";
			this->sudoku1_31->Name = L"sudoku1_31";
			this->sudoku1_31->Size = System::Drawing::Size(25, 28);
			this->sudoku1_31->TabIndex = 33;
			// 
			// sudoku1_32
			// 
			this->sudoku1_32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_32->Location = System::Drawing::Point(298, 360);
			this->sudoku1_32->Mask = L"0";
			this->sudoku1_32->Name = L"sudoku1_32";
			this->sudoku1_32->Size = System::Drawing::Size(25, 28);
			this->sudoku1_32->TabIndex = 34;
			// 
			// sudoku1_36
			// 
			this->sudoku1_36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_36->Location = System::Drawing::Point(250, 409);
			this->sudoku1_36->Mask = L"0";
			this->sudoku1_36->Name = L"sudoku1_36";
			this->sudoku1_36->Size = System::Drawing::Size(25, 28);
			this->sudoku1_36->TabIndex = 35;
			// 
			// sudoku1_37
			// 
			this->sudoku1_37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_37->Location = System::Drawing::Point(298, 409);
			this->sudoku1_37->Mask = L"0";
			this->sudoku1_37->Name = L"sudoku1_37";
			this->sudoku1_37->Size = System::Drawing::Size(25, 28);
			this->sudoku1_37->TabIndex = 36;
			// 
			// sudoku1_38
			// 
			this->sudoku1_38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_38->Location = System::Drawing::Point(407, 409);
			this->sudoku1_38->Mask = L"0";
			this->sudoku1_38->Name = L"sudoku1_38";
			this->sudoku1_38->Size = System::Drawing::Size(25, 28);
			this->sudoku1_38->TabIndex = 37;
			// 
			// sudoku1_39
			// 
			this->sudoku1_39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_39->Location = System::Drawing::Point(456, 409);
			this->sudoku1_39->Mask = L"0";
			this->sudoku1_39->Name = L"sudoku1_39";
			this->sudoku1_39->Size = System::Drawing::Size(25, 28);
			this->sudoku1_39->TabIndex = 38;
			// 
			// sudoku1_40
			// 
			this->sudoku1_40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_40->Location = System::Drawing::Point(514, 409);
			this->sudoku1_40->Mask = L"0";
			this->sudoku1_40->Name = L"sudoku1_40";
			this->sudoku1_40->Size = System::Drawing::Size(25, 28);
			this->sudoku1_40->TabIndex = 39;
			// 
			// sudoku1_34
			// 
			this->sudoku1_34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_34->Location = System::Drawing::Point(630, 360);
			this->sudoku1_34->Mask = L"0";
			this->sudoku1_34->Name = L"sudoku1_34";
			this->sudoku1_34->Size = System::Drawing::Size(25, 28);
			this->sudoku1_34->TabIndex = 41;
			// 
			// sudoku1_35
			// 
			this->sudoku1_35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_35->Location = System::Drawing::Point(673, 360);
			this->sudoku1_35->Mask = L"0";
			this->sudoku1_35->Name = L"sudoku1_35";
			this->sudoku1_35->Size = System::Drawing::Size(25, 28);
			this->sudoku1_35->TabIndex = 42;
			// 
			// sudoku1_41
			// 
			this->sudoku1_41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_41->Location = System::Drawing::Point(572, 409);
			this->sudoku1_41->Mask = L"0";
			this->sudoku1_41->Name = L"sudoku1_41";
			this->sudoku1_41->Size = System::Drawing::Size(25, 28);
			this->sudoku1_41->TabIndex = 43;
			// 
			// sudoku1_42
			// 
			this->sudoku1_42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_42->Location = System::Drawing::Point(673, 409);
			this->sudoku1_42->Mask = L"0";
			this->sudoku1_42->Name = L"sudoku1_42";
			this->sudoku1_42->Size = System::Drawing::Size(25, 28);
			this->sudoku1_42->TabIndex = 44;
			// 
			// sudoku1_43
			// 
			this->sudoku1_43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_43->Location = System::Drawing::Point(250, 461);
			this->sudoku1_43->Mask = L"0";
			this->sudoku1_43->Name = L"sudoku1_43";
			this->sudoku1_43->Size = System::Drawing::Size(25, 28);
			this->sudoku1_43->TabIndex = 45;
			// 
			// sudoku1_44
			// 
			this->sudoku1_44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_44->Location = System::Drawing::Point(351, 461);
			this->sudoku1_44->Mask = L"0";
			this->sudoku1_44->Name = L"sudoku1_44";
			this->sudoku1_44->Size = System::Drawing::Size(25, 28);
			this->sudoku1_44->TabIndex = 46;
			// 
			// sudoku1_45
			// 
			this->sudoku1_45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_45->Location = System::Drawing::Point(407, 461);
			this->sudoku1_45->Mask = L"0";
			this->sudoku1_45->Name = L"sudoku1_45";
			this->sudoku1_45->Size = System::Drawing::Size(25, 28);
			this->sudoku1_45->TabIndex = 47;
			// 
			// sudoku1_46
			// 
			this->sudoku1_46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_46->Location = System::Drawing::Point(456, 461);
			this->sudoku1_46->Mask = L"0";
			this->sudoku1_46->Name = L"sudoku1_46";
			this->sudoku1_46->Size = System::Drawing::Size(25, 28);
			this->sudoku1_46->TabIndex = 48;
			// 
			// sudoku1_47
			// 
			this->sudoku1_47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku1_47->Location = System::Drawing::Point(630, 461);
			this->sudoku1_47->Mask = L"0";
			this->sudoku1_47->Name = L"sudoku1_47";
			this->sudoku1_47->Size = System::Drawing::Size(25, 28);
			this->sudoku1_47->TabIndex = 49;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(25, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 29);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Poziom ³atwy";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 17);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Podaj nazwê gracza:";
			// 
			// nazwa_gracza1
			// 
			this->nazwa_gracza1->Location = System::Drawing::Point(30, 264);
			this->nazwa_gracza1->Name = L"nazwa_gracza1";
			this->nazwa_gracza1->Size = System::Drawing::Size(139, 22);
			this->nazwa_gracza1->TabIndex = 52;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &sudoku1::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(30, 441);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Czas:";
			// 
			// Czas1
			// 
			this->Czas1->AutoSize = true;
			this->Czas1->Location = System::Drawing::Point(89, 441);
			this->Czas1->Name = L"Czas1";
			this->Czas1->Size = System::Drawing::Size(28, 17);
			this->Czas1->TabIndex = 54;
			this->Czas1->Text = L"0:0";
			// 
			// spr1
			// 
			this->spr1->Location = System::Drawing::Point(30, 466);
			this->spr1->Name = L"spr1";
			this->spr1->Size = System::Drawing::Size(75, 25);
			this->spr1->TabIndex = 55;
			this->spr1->Text = L"Sprawdz";
			this->spr1->UseVisualStyleBackColor = true;
			this->spr1->Click += gcnew System::EventHandler(this, &sudoku1::spr1_Click);
			// 
			// zapisz
			// 
			this->zapisz->Location = System::Drawing::Point(30, 304);
			this->zapisz->Name = L"zapisz";
			this->zapisz->Size = System::Drawing::Size(139, 25);
			this->zapisz->TabIndex = 56;
			this->zapisz->Text = L"Zapsiz wynik";
			this->zapisz->UseVisualStyleBackColor = true;
			this->zapisz->Visible = false;
			this->zapisz->Click += gcnew System::EventHandler(this, &sudoku1::zapisz_Click);
			// 
			// sudoku1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(742, 533);
			this->Controls->Add(this->zapisz);
			this->Controls->Add(this->spr1);
			this->Controls->Add(this->Czas1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nazwa_gracza1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sudoku1_47);
			this->Controls->Add(this->sudoku1_46);
			this->Controls->Add(this->sudoku1_45);
			this->Controls->Add(this->sudoku1_44);
			this->Controls->Add(this->sudoku1_43);
			this->Controls->Add(this->sudoku1_42);
			this->Controls->Add(this->sudoku1_41);
			this->Controls->Add(this->sudoku1_35);
			this->Controls->Add(this->sudoku1_34);
			this->Controls->Add(this->sudoku1_40);
			this->Controls->Add(this->sudoku1_39);
			this->Controls->Add(this->sudoku1_38);
			this->Controls->Add(this->sudoku1_37);
			this->Controls->Add(this->sudoku1_36);
			this->Controls->Add(this->sudoku1_32);
			this->Controls->Add(this->sudoku1_31);
			this->Controls->Add(this->sudoku1_30);
			this->Controls->Add(this->sudoku1_29);
			this->Controls->Add(this->sudoku1_28);
			this->Controls->Add(this->sudoku1_27);
			this->Controls->Add(this->sudoku1_26);
			this->Controls->Add(this->sudoku1_25);
			this->Controls->Add(this->sudoku1_24);
			this->Controls->Add(this->sudoku1_23);
			this->Controls->Add(this->sudoku1_22);
			this->Controls->Add(this->sudoku1_21);
			this->Controls->Add(this->sudoku1_20);
			this->Controls->Add(this->sudoku1_19);
			this->Controls->Add(this->sudoku1_18);
			this->Controls->Add(this->sudoku1_17);
			this->Controls->Add(this->sudoku1_16);
			this->Controls->Add(this->sudoku1_15);
			this->Controls->Add(this->sudoku1_14);
			this->Controls->Add(this->sudoku1_12);
			this->Controls->Add(this->sudoku1_13);
			this->Controls->Add(this->sudoku1_11);
			this->Controls->Add(this->sudoku1_10);
			this->Controls->Add(this->sudoku1_9);
			this->Controls->Add(this->sudoku1_8);
			this->Controls->Add(this->sudoku1_7);
			this->Controls->Add(this->sudoku1_6);
			this->Controls->Add(this->sudoku1_5);
			this->Controls->Add(this->sudoku1_4);
			this->Controls->Add(this->sudoku1_3);
			this->Controls->Add(this->sudoku1_2);
			this->Controls->Add(this->sudoku1_1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"sudoku1";
			this->Text = L"sudoku1";
			this->Load += gcnew System::EventHandler(this, &sudoku1::sudoku1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void sudoku1_Load(System::Object^  sender, System::EventArgs^  e) {
		sekunda = 0;
		minuta = 0;
	}

	//timer  
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		sekunda++;

		if (sekunda == 60) {
			sekunda = 0;
			minuta++;
		}

		sek = Convert::ToString(sekunda);
		min = Convert::ToString(minuta);
		Czas1->Text = min + ":" + sek;

	}

	//sprawdzenie
	private: System::Void spr1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sudoku1_1->Text == "4"&&sudoku1_2->Text == "1"&&sudoku1_3->Text == "5"&&sudoku1_4->Text == "8"&&sudoku1_5->Text == "7"
			&&sudoku1_6->Text == "3"&&sudoku1_7->Text == "2"&&sudoku1_8->Text == "7"&&sudoku1_9->Text == "5"&&sudoku1_10->Text == "6"
			&&sudoku1_11->Text == "1"&&sudoku1_12->Text == "9"&&sudoku1_13->Text == "3"&&sudoku1_14->Text == "6"&&sudoku1_15->Text == "4"&&
			sudoku1_16->Text == "7"&&sudoku1_17->Text == "8"&&sudoku1_18->Text == "2"&&sudoku1_19->Text == "6"&&sudoku1_20->Text == "8"
			&&sudoku1_21->Text == "7"&&sudoku1_22->Text == "5"&&sudoku1_23->Text == "3"&&sudoku1_24->Text == "9"&&sudoku1_25->Text == "4"&&
			sudoku1_26->Text == "9"&&sudoku1_27->Text == "8"&&sudoku1_28->Text == "7"&&sudoku1_29->Text == "2"&&sudoku1_30->Text == "5"
			&&sudoku1_31->Text == "3"&&sudoku1_32->Text == "5"&&sudoku1_34->Text == "4"&&sudoku1_35->Text == "9"
			&&sudoku1_36->Text == "6"&&sudoku1_37->Text == "4"&&sudoku1_38->Text == "3"&&sudoku1_39->Text == "5"&&sudoku1_40->Text == "2"&&
			sudoku1_41->Text == "1"&&sudoku1_42->Text == "8"&&sudoku1_43->Text == "7"&&sudoku1_44->Text == "2"&&sudoku1_45->Text == "4"
			&&sudoku1_46->Text == "1"&&sudoku1_47->Text == "5") {
			timer1->Stop();
			sekunda;
			minuta;
			MessageBox::Show("Sudoku rozwiazane poprawnie", "Sprawdzenie", MessageBoxButtons::OK, MessageBoxIcon::Information);
			zapisz->Show();


		}
		else
			MessageBox::Show("Zle!", "Sprawdzenie", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	//zapisywanie wynikow
	private: System::Void zapisz_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::wyniki^ wynikiForm = gcnew wyniki();
		wynikiForm->Show();

		DataGridViewRow ^ row = gcnew DataGridViewRow();

		row->CreateCells(wynikiForm->tabelka);
		row->Cells[0]->Value = nazwa_gracza1->Text; //gracz
		row->Cells[1]->Value = Czas1->Text; //czas
		row->Cells[2]->Value = "Latwy"; //poziom

		wynikiForm->tabelka->Rows->Add(row);
	}
	};
}
