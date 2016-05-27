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
	/// Summary for sudoku2
	/// </summary>
	public ref class sudoku2 : public System::Windows::Forms::Form
	{
		static int sekunda2;
		static int minuta2;
		String^ sek2;
	private: System::Windows::Forms::Button^  spr2;
	private: System::Windows::Forms::Button^  zapisz;

			 String^ min2;

	public:
		sudoku2(void)
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
		~sudoku2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_2;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_3;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_4;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_5;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_6;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_7;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_8;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_9;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_10;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_11;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_12;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_13;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_14;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_15;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_16;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_17;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_18;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_19;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_20;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_21;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_22;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_23;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_24;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_25;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_26;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_27;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_28;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_29;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_30;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_31;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_32;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_33;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_34;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_35;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_36;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_37;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_38;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_39;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_40;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_41;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_42;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_43;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_44;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_45;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_46;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_47;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_48;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_49;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_50;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_51;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_52;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_53;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_54;
	private: System::Windows::Forms::MaskedTextBox^  sudoku2_55;
	private: System::Windows::Forms::TextBox^  nazwa_gracza2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  Czas2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
























































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sudoku2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sudoku2_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_44 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_45 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_46 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_47 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_48 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_49 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_50 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_51 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_52 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_53 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_54 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku2_55 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nazwa_gracza2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Czas2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->spr2 = (gcnew System::Windows::Forms::Button());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(34, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 29);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Poziom œredni";
			// 
			// sudoku2_1
			// 
			this->sudoku2_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_1->Location = System::Drawing::Point(254, 35);
			this->sudoku2_1->Mask = L"0";
			this->sudoku2_1->Name = L"sudoku2_1";
			this->sudoku2_1->Size = System::Drawing::Size(25, 28);
			this->sudoku2_1->TabIndex = 52;
			// 
			// sudoku2_2
			// 
			this->sudoku2_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_2->Location = System::Drawing::Point(307, 35);
			this->sudoku2_2->Mask = L"0";
			this->sudoku2_2->Name = L"sudoku2_2";
			this->sudoku2_2->Size = System::Drawing::Size(25, 28);
			this->sudoku2_2->TabIndex = 53;
			// 
			// sudoku2_3
			// 
			this->sudoku2_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_3->Location = System::Drawing::Point(414, 35);
			this->sudoku2_3->Mask = L"0";
			this->sudoku2_3->Name = L"sudoku2_3";
			this->sudoku2_3->Size = System::Drawing::Size(25, 28);
			this->sudoku2_3->TabIndex = 54;
			// 
			// sudoku2_4
			// 
			this->sudoku2_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_4->Location = System::Drawing::Point(518, 35);
			this->sudoku2_4->Mask = L"0";
			this->sudoku2_4->Name = L"sudoku2_4";
			this->sudoku2_4->Size = System::Drawing::Size(25, 28);
			this->sudoku2_4->TabIndex = 55;
			// 
			// sudoku2_5
			// 
			this->sudoku2_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_5->Location = System::Drawing::Point(629, 35);
			this->sudoku2_5->Mask = L"0";
			this->sudoku2_5->Name = L"sudoku2_5";
			this->sudoku2_5->Size = System::Drawing::Size(25, 28);
			this->sudoku2_5->TabIndex = 56;
			// 
			// sudoku2_6
			// 
			this->sudoku2_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_6->Location = System::Drawing::Point(679, 35);
			this->sudoku2_6->Mask = L"0";
			this->sudoku2_6->Name = L"sudoku2_6";
			this->sudoku2_6->Size = System::Drawing::Size(25, 28);
			this->sudoku2_6->TabIndex = 57;
			// 
			// sudoku2_7
			// 
			this->sudoku2_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_7->Location = System::Drawing::Point(254, 86);
			this->sudoku2_7->Mask = L"0";
			this->sudoku2_7->Name = L"sudoku2_7";
			this->sudoku2_7->Size = System::Drawing::Size(25, 28);
			this->sudoku2_7->TabIndex = 58;
			// 
			// sudoku2_8
			// 
			this->sudoku2_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_8->Location = System::Drawing::Point(354, 86);
			this->sudoku2_8->Mask = L"0";
			this->sudoku2_8->Name = L"sudoku2_8";
			this->sudoku2_8->Size = System::Drawing::Size(25, 28);
			this->sudoku2_8->TabIndex = 59;
			// 
			// sudoku2_9
			// 
			this->sudoku2_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_9->Location = System::Drawing::Point(414, 86);
			this->sudoku2_9->Mask = L"0";
			this->sudoku2_9->Name = L"sudoku2_9";
			this->sudoku2_9->Size = System::Drawing::Size(25, 28);
			this->sudoku2_9->TabIndex = 60;
			// 
			// sudoku2_10
			// 
			this->sudoku2_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_10->Location = System::Drawing::Point(462, 86);
			this->sudoku2_10->Mask = L"0";
			this->sudoku2_10->Name = L"sudoku2_10";
			this->sudoku2_10->Size = System::Drawing::Size(25, 28);
			this->sudoku2_10->TabIndex = 61;
			// 
			// sudoku2_11
			// 
			this->sudoku2_11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_11->Location = System::Drawing::Point(518, 86);
			this->sudoku2_11->Mask = L"0";
			this->sudoku2_11->Name = L"sudoku2_11";
			this->sudoku2_11->Size = System::Drawing::Size(25, 28);
			this->sudoku2_11->TabIndex = 62;
			// 
			// sudoku2_12
			// 
			this->sudoku2_12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_12->Location = System::Drawing::Point(579, 86);
			this->sudoku2_12->Mask = L"0";
			this->sudoku2_12->Name = L"sudoku2_12";
			this->sudoku2_12->Size = System::Drawing::Size(25, 28);
			this->sudoku2_12->TabIndex = 63;
			// 
			// sudoku2_13
			// 
			this->sudoku2_13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_13->Location = System::Drawing::Point(679, 86);
			this->sudoku2_13->Mask = L"0";
			this->sudoku2_13->Name = L"sudoku2_13";
			this->sudoku2_13->Size = System::Drawing::Size(25, 28);
			this->sudoku2_13->TabIndex = 64;
			// 
			// sudoku2_14
			// 
			this->sudoku2_14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_14->Location = System::Drawing::Point(307, 138);
			this->sudoku2_14->Mask = L"0";
			this->sudoku2_14->Name = L"sudoku2_14";
			this->sudoku2_14->Size = System::Drawing::Size(25, 28);
			this->sudoku2_14->TabIndex = 65;
			// 
			// sudoku2_15
			// 
			this->sudoku2_15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_15->Location = System::Drawing::Point(354, 138);
			this->sudoku2_15->Mask = L"0";
			this->sudoku2_15->Name = L"sudoku2_15";
			this->sudoku2_15->Size = System::Drawing::Size(25, 28);
			this->sudoku2_15->TabIndex = 66;
			// 
			// sudoku2_16
			// 
			this->sudoku2_16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_16->Location = System::Drawing::Point(462, 138);
			this->sudoku2_16->Mask = L"0";
			this->sudoku2_16->Name = L"sudoku2_16";
			this->sudoku2_16->Size = System::Drawing::Size(25, 28);
			this->sudoku2_16->TabIndex = 67;
			// 
			// sudoku2_17
			// 
			this->sudoku2_17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_17->Location = System::Drawing::Point(579, 138);
			this->sudoku2_17->Mask = L"0";
			this->sudoku2_17->Name = L"sudoku2_17";
			this->sudoku2_17->Size = System::Drawing::Size(25, 28);
			this->sudoku2_17->TabIndex = 68;
			// 
			// sudoku2_18
			// 
			this->sudoku2_18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_18->Location = System::Drawing::Point(629, 138);
			this->sudoku2_18->Mask = L"0";
			this->sudoku2_18->Name = L"sudoku2_18";
			this->sudoku2_18->Size = System::Drawing::Size(25, 28);
			this->sudoku2_18->TabIndex = 69;
			// 
			// sudoku2_19
			// 
			this->sudoku2_19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_19->Location = System::Drawing::Point(254, 191);
			this->sudoku2_19->Mask = L"0";
			this->sudoku2_19->Name = L"sudoku2_19";
			this->sudoku2_19->Size = System::Drawing::Size(25, 28);
			this->sudoku2_19->TabIndex = 70;
			// 
			// sudoku2_20
			// 
			this->sudoku2_20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_20->Location = System::Drawing::Point(354, 191);
			this->sudoku2_20->Mask = L"0";
			this->sudoku2_20->Name = L"sudoku2_20";
			this->sudoku2_20->Size = System::Drawing::Size(25, 28);
			this->sudoku2_20->TabIndex = 71;
			// 
			// sudoku2_21
			// 
			this->sudoku2_21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_21->Location = System::Drawing::Point(414, 191);
			this->sudoku2_21->Mask = L"0";
			this->sudoku2_21->Name = L"sudoku2_21";
			this->sudoku2_21->Size = System::Drawing::Size(25, 28);
			this->sudoku2_21->TabIndex = 72;
			// 
			// sudoku2_22
			// 
			this->sudoku2_22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_22->Location = System::Drawing::Point(462, 191);
			this->sudoku2_22->Mask = L"0";
			this->sudoku2_22->Name = L"sudoku2_22";
			this->sudoku2_22->Size = System::Drawing::Size(25, 28);
			this->sudoku2_22->TabIndex = 73;
			// 
			// sudoku2_23
			// 
			this->sudoku2_23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_23->Location = System::Drawing::Point(518, 191);
			this->sudoku2_23->Mask = L"0";
			this->sudoku2_23->Name = L"sudoku2_23";
			this->sudoku2_23->Size = System::Drawing::Size(25, 28);
			this->sudoku2_23->TabIndex = 74;
			// 
			// sudoku2_24
			// 
			this->sudoku2_24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_24->Location = System::Drawing::Point(579, 191);
			this->sudoku2_24->Mask = L"0";
			this->sudoku2_24->Name = L"sudoku2_24";
			this->sudoku2_24->Size = System::Drawing::Size(25, 28);
			this->sudoku2_24->TabIndex = 75;
			// 
			// sudoku2_25
			// 
			this->sudoku2_25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_25->Location = System::Drawing::Point(679, 191);
			this->sudoku2_25->Mask = L"0";
			this->sudoku2_25->Name = L"sudoku2_25";
			this->sudoku2_25->Size = System::Drawing::Size(25, 28);
			this->sudoku2_25->TabIndex = 76;
			// 
			// sudoku2_26
			// 
			this->sudoku2_26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_26->Location = System::Drawing::Point(254, 244);
			this->sudoku2_26->Mask = L"0";
			this->sudoku2_26->Name = L"sudoku2_26";
			this->sudoku2_26->Size = System::Drawing::Size(25, 28);
			this->sudoku2_26->TabIndex = 77;
			// 
			// sudoku2_27
			// 
			this->sudoku2_27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_27->Location = System::Drawing::Point(307, 244);
			this->sudoku2_27->Mask = L"0";
			this->sudoku2_27->Name = L"sudoku2_27";
			this->sudoku2_27->Size = System::Drawing::Size(25, 28);
			this->sudoku2_27->TabIndex = 78;
			// 
			// sudoku2_28
			// 
			this->sudoku2_28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_28->Location = System::Drawing::Point(462, 244);
			this->sudoku2_28->Mask = L"0";
			this->sudoku2_28->Name = L"sudoku2_28";
			this->sudoku2_28->Size = System::Drawing::Size(25, 28);
			this->sudoku2_28->TabIndex = 79;
			// 
			// sudoku2_29
			// 
			this->sudoku2_29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_29->Location = System::Drawing::Point(629, 244);
			this->sudoku2_29->Mask = L"0";
			this->sudoku2_29->Name = L"sudoku2_29";
			this->sudoku2_29->Size = System::Drawing::Size(25, 28);
			this->sudoku2_29->TabIndex = 80;
			// 
			// sudoku2_30
			// 
			this->sudoku2_30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_30->Location = System::Drawing::Point(679, 244);
			this->sudoku2_30->Mask = L"0";
			this->sudoku2_30->Name = L"sudoku2_30";
			this->sudoku2_30->Size = System::Drawing::Size(25, 28);
			this->sudoku2_30->TabIndex = 81;
			// 
			// sudoku2_31
			// 
			this->sudoku2_31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_31->Location = System::Drawing::Point(254, 303);
			this->sudoku2_31->Mask = L"0";
			this->sudoku2_31->Name = L"sudoku2_31";
			this->sudoku2_31->Size = System::Drawing::Size(25, 28);
			this->sudoku2_31->TabIndex = 82;
			// 
			// sudoku2_32
			// 
			this->sudoku2_32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_32->Location = System::Drawing::Point(354, 303);
			this->sudoku2_32->Mask = L"0";
			this->sudoku2_32->Name = L"sudoku2_32";
			this->sudoku2_32->Size = System::Drawing::Size(25, 28);
			this->sudoku2_32->TabIndex = 83;
			// 
			// sudoku2_33
			// 
			this->sudoku2_33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_33->Location = System::Drawing::Point(414, 303);
			this->sudoku2_33->Mask = L"0";
			this->sudoku2_33->Name = L"sudoku2_33";
			this->sudoku2_33->Size = System::Drawing::Size(25, 28);
			this->sudoku2_33->TabIndex = 84;
			// 
			// sudoku2_34
			// 
			this->sudoku2_34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_34->Location = System::Drawing::Point(462, 303);
			this->sudoku2_34->Mask = L"0";
			this->sudoku2_34->Name = L"sudoku2_34";
			this->sudoku2_34->Size = System::Drawing::Size(25, 28);
			this->sudoku2_34->TabIndex = 85;
			// 
			// sudoku2_35
			// 
			this->sudoku2_35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_35->Location = System::Drawing::Point(518, 303);
			this->sudoku2_35->Mask = L"0";
			this->sudoku2_35->Name = L"sudoku2_35";
			this->sudoku2_35->Size = System::Drawing::Size(25, 28);
			this->sudoku2_35->TabIndex = 86;
			// 
			// sudoku2_36
			// 
			this->sudoku2_36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_36->Location = System::Drawing::Point(579, 303);
			this->sudoku2_36->Mask = L"0";
			this->sudoku2_36->Name = L"sudoku2_36";
			this->sudoku2_36->Size = System::Drawing::Size(25, 28);
			this->sudoku2_36->TabIndex = 87;
			// 
			// sudoku2_37
			// 
			this->sudoku2_37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_37->Location = System::Drawing::Point(679, 303);
			this->sudoku2_37->Mask = L"0";
			this->sudoku2_37->Name = L"sudoku2_37";
			this->sudoku2_37->Size = System::Drawing::Size(25, 28);
			this->sudoku2_37->TabIndex = 88;
			// 
			// sudoku2_38
			// 
			this->sudoku2_38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_38->Location = System::Drawing::Point(307, 360);
			this->sudoku2_38->Mask = L"0";
			this->sudoku2_38->Name = L"sudoku2_38";
			this->sudoku2_38->Size = System::Drawing::Size(25, 28);
			this->sudoku2_38->TabIndex = 89;
			// 
			// sudoku2_39
			// 
			this->sudoku2_39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_39->Location = System::Drawing::Point(354, 360);
			this->sudoku2_39->Mask = L"0";
			this->sudoku2_39->Name = L"sudoku2_39";
			this->sudoku2_39->Size = System::Drawing::Size(25, 28);
			this->sudoku2_39->TabIndex = 90;
			// 
			// sudoku2_40
			// 
			this->sudoku2_40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_40->Location = System::Drawing::Point(462, 360);
			this->sudoku2_40->Mask = L"0";
			this->sudoku2_40->Name = L"sudoku2_40";
			this->sudoku2_40->Size = System::Drawing::Size(25, 28);
			this->sudoku2_40->TabIndex = 91;
			// 
			// sudoku2_41
			// 
			this->sudoku2_41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_41->Location = System::Drawing::Point(579, 360);
			this->sudoku2_41->Mask = L"0";
			this->sudoku2_41->Name = L"sudoku2_41";
			this->sudoku2_41->Size = System::Drawing::Size(25, 28);
			this->sudoku2_41->TabIndex = 92;
			// 
			// sudoku2_42
			// 
			this->sudoku2_42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_42->Location = System::Drawing::Point(629, 360);
			this->sudoku2_42->Mask = L"0";
			this->sudoku2_42->Name = L"sudoku2_42";
			this->sudoku2_42->Size = System::Drawing::Size(25, 28);
			this->sudoku2_42->TabIndex = 93;
			// 
			// sudoku2_43
			// 
			this->sudoku2_43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_43->Location = System::Drawing::Point(254, 410);
			this->sudoku2_43->Mask = L"0";
			this->sudoku2_43->Name = L"sudoku2_43";
			this->sudoku2_43->Size = System::Drawing::Size(25, 28);
			this->sudoku2_43->TabIndex = 94;
			// 
			// sudoku2_44
			// 
			this->sudoku2_44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_44->Location = System::Drawing::Point(354, 410);
			this->sudoku2_44->Mask = L"0";
			this->sudoku2_44->Name = L"sudoku2_44";
			this->sudoku2_44->Size = System::Drawing::Size(25, 28);
			this->sudoku2_44->TabIndex = 95;
			// 
			// sudoku2_45
			// 
			this->sudoku2_45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_45->Location = System::Drawing::Point(414, 410);
			this->sudoku2_45->Mask = L"0";
			this->sudoku2_45->Name = L"sudoku2_45";
			this->sudoku2_45->Size = System::Drawing::Size(25, 28);
			this->sudoku2_45->TabIndex = 96;
			// 
			// sudoku2_46
			// 
			this->sudoku2_46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_46->Location = System::Drawing::Point(462, 410);
			this->sudoku2_46->Mask = L"0";
			this->sudoku2_46->Name = L"sudoku2_46";
			this->sudoku2_46->Size = System::Drawing::Size(25, 28);
			this->sudoku2_46->TabIndex = 97;
			// 
			// sudoku2_47
			// 
			this->sudoku2_47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_47->Location = System::Drawing::Point(518, 410);
			this->sudoku2_47->Mask = L"0";
			this->sudoku2_47->Name = L"sudoku2_47";
			this->sudoku2_47->Size = System::Drawing::Size(25, 28);
			this->sudoku2_47->TabIndex = 98;
			// 
			// sudoku2_48
			// 
			this->sudoku2_48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_48->Location = System::Drawing::Point(579, 410);
			this->sudoku2_48->Mask = L"0";
			this->sudoku2_48->Name = L"sudoku2_48";
			this->sudoku2_48->Size = System::Drawing::Size(25, 28);
			this->sudoku2_48->TabIndex = 99;
			// 
			// sudoku2_49
			// 
			this->sudoku2_49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_49->Location = System::Drawing::Point(679, 410);
			this->sudoku2_49->Mask = L"0";
			this->sudoku2_49->Name = L"sudoku2_49";
			this->sudoku2_49->Size = System::Drawing::Size(25, 28);
			this->sudoku2_49->TabIndex = 100;
			// 
			// sudoku2_50
			// 
			this->sudoku2_50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_50->Location = System::Drawing::Point(254, 463);
			this->sudoku2_50->Mask = L"0";
			this->sudoku2_50->Name = L"sudoku2_50";
			this->sudoku2_50->Size = System::Drawing::Size(25, 28);
			this->sudoku2_50->TabIndex = 101;
			// 
			// sudoku2_51
			// 
			this->sudoku2_51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_51->Location = System::Drawing::Point(307, 463);
			this->sudoku2_51->Mask = L"0";
			this->sudoku2_51->Name = L"sudoku2_51";
			this->sudoku2_51->Size = System::Drawing::Size(25, 28);
			this->sudoku2_51->TabIndex = 102;
			// 
			// sudoku2_52
			// 
			this->sudoku2_52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_52->Location = System::Drawing::Point(414, 463);
			this->sudoku2_52->Mask = L"0";
			this->sudoku2_52->Name = L"sudoku2_52";
			this->sudoku2_52->Size = System::Drawing::Size(25, 28);
			this->sudoku2_52->TabIndex = 103;
			// 
			// sudoku2_53
			// 
			this->sudoku2_53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_53->Location = System::Drawing::Point(518, 463);
			this->sudoku2_53->Mask = L"0";
			this->sudoku2_53->Name = L"sudoku2_53";
			this->sudoku2_53->Size = System::Drawing::Size(25, 28);
			this->sudoku2_53->TabIndex = 104;
			// 
			// sudoku2_54
			// 
			this->sudoku2_54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_54->Location = System::Drawing::Point(629, 463);
			this->sudoku2_54->Mask = L"0";
			this->sudoku2_54->Name = L"sudoku2_54";
			this->sudoku2_54->Size = System::Drawing::Size(25, 28);
			this->sudoku2_54->TabIndex = 105;
			// 
			// sudoku2_55
			// 
			this->sudoku2_55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku2_55->Location = System::Drawing::Point(679, 463);
			this->sudoku2_55->Mask = L"0";
			this->sudoku2_55->Name = L"sudoku2_55";
			this->sudoku2_55->Size = System::Drawing::Size(25, 28);
			this->sudoku2_55->TabIndex = 106;
			// 
			// nazwa_gracza2
			// 
			this->nazwa_gracza2->Location = System::Drawing::Point(36, 256);
			this->nazwa_gracza2->Name = L"nazwa_gracza2";
			this->nazwa_gracza2->Size = System::Drawing::Size(139, 22);
			this->nazwa_gracza2->TabIndex = 108;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 17);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Podaj nazwê gracza:";
			// 
			// Czas2
			// 
			this->Czas2->AutoSize = true;
			this->Czas2->Location = System::Drawing::Point(83, 437);
			this->Czas2->Name = L"Czas2";
			this->Czas2->Size = System::Drawing::Size(28, 17);
			this->Czas2->TabIndex = 110;
			this->Czas2->Text = L"0:0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(33, 437);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 109;
			this->label3->Text = L"Czas:";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &sudoku2::timer1_Tick);
			// 
			// spr2
			// 
			this->spr2->Location = System::Drawing::Point(36, 467);
			this->spr2->Name = L"spr2";
			this->spr2->Size = System::Drawing::Size(75, 25);
			this->spr2->TabIndex = 111;
			this->spr2->Text = L"Sprawdz";
			this->spr2->UseVisualStyleBackColor = true;
			this->spr2->Click += gcnew System::EventHandler(this, &sudoku2::spr2_Click);
			// 
			// zapisz
			// 
			this->zapisz->Location = System::Drawing::Point(36, 303);
			this->zapisz->Name = L"zapisz";
			this->zapisz->Size = System::Drawing::Size(139, 28);
			this->zapisz->TabIndex = 112;
			this->zapisz->Text = L"Zapisz wynik";
			this->zapisz->UseVisualStyleBackColor = true;
			this->zapisz->Visible = false;
			this->zapisz->Click += gcnew System::EventHandler(this, &sudoku2::zapisz_Click);
			// 
			// sudoku2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->ClientSize = System::Drawing::Size(742, 533);
			this->Controls->Add(this->zapisz);
			this->Controls->Add(this->spr2);
			this->Controls->Add(this->Czas2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nazwa_gracza2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->sudoku2_55);
			this->Controls->Add(this->sudoku2_54);
			this->Controls->Add(this->sudoku2_53);
			this->Controls->Add(this->sudoku2_52);
			this->Controls->Add(this->sudoku2_51);
			this->Controls->Add(this->sudoku2_50);
			this->Controls->Add(this->sudoku2_49);
			this->Controls->Add(this->sudoku2_48);
			this->Controls->Add(this->sudoku2_47);
			this->Controls->Add(this->sudoku2_46);
			this->Controls->Add(this->sudoku2_45);
			this->Controls->Add(this->sudoku2_44);
			this->Controls->Add(this->sudoku2_43);
			this->Controls->Add(this->sudoku2_42);
			this->Controls->Add(this->sudoku2_41);
			this->Controls->Add(this->sudoku2_40);
			this->Controls->Add(this->sudoku2_39);
			this->Controls->Add(this->sudoku2_38);
			this->Controls->Add(this->sudoku2_37);
			this->Controls->Add(this->sudoku2_36);
			this->Controls->Add(this->sudoku2_35);
			this->Controls->Add(this->sudoku2_34);
			this->Controls->Add(this->sudoku2_33);
			this->Controls->Add(this->sudoku2_32);
			this->Controls->Add(this->sudoku2_31);
			this->Controls->Add(this->sudoku2_30);
			this->Controls->Add(this->sudoku2_29);
			this->Controls->Add(this->sudoku2_28);
			this->Controls->Add(this->sudoku2_27);
			this->Controls->Add(this->sudoku2_26);
			this->Controls->Add(this->sudoku2_25);
			this->Controls->Add(this->sudoku2_24);
			this->Controls->Add(this->sudoku2_23);
			this->Controls->Add(this->sudoku2_22);
			this->Controls->Add(this->sudoku2_21);
			this->Controls->Add(this->sudoku2_20);
			this->Controls->Add(this->sudoku2_19);
			this->Controls->Add(this->sudoku2_18);
			this->Controls->Add(this->sudoku2_17);
			this->Controls->Add(this->sudoku2_16);
			this->Controls->Add(this->sudoku2_15);
			this->Controls->Add(this->sudoku2_14);
			this->Controls->Add(this->sudoku2_13);
			this->Controls->Add(this->sudoku2_12);
			this->Controls->Add(this->sudoku2_11);
			this->Controls->Add(this->sudoku2_10);
			this->Controls->Add(this->sudoku2_9);
			this->Controls->Add(this->sudoku2_8);
			this->Controls->Add(this->sudoku2_7);
			this->Controls->Add(this->sudoku2_6);
			this->Controls->Add(this->sudoku2_5);
			this->Controls->Add(this->sudoku2_4);
			this->Controls->Add(this->sudoku2_3);
			this->Controls->Add(this->sudoku2_2);
			this->Controls->Add(this->sudoku2_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"sudoku2";
			this->Text = L"sudoku2";
			this->Load += gcnew System::EventHandler(this, &sudoku2::sudoku2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sudoku2_Load(System::Object^  sender, System::EventArgs^  e) {
		sekunda2 = 0;
		minuta2 = 0;
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		sekunda2++;

		if (sekunda2 == 60) {
			sekunda2 = 0;
			minuta2++;
		}

		sek2 = Convert::ToString(sekunda2);
		min2 = Convert::ToString(minuta2);
		Czas2->Text = min2 + ":" + sek2;
	}

	private: System::Void spr2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sudoku2_1->Text == "9"&&sudoku2_2->Text == "5"&&sudoku2_3->Text == "6"&&sudoku2_4->Text == "2"&&sudoku2_5->Text == "3"
			&&sudoku2_6->Text == "1"&&sudoku2_7->Text == "3"&&sudoku2_8->Text == "1"&&sudoku2_9->Text == "5"&&sudoku2_10->Text == "8"
			&&sudoku2_11->Text == "4"&&sudoku2_12->Text == "2"&&sudoku2_13->Text == "7"&&sudoku2_14->Text == "8"&&sudoku2_15->Text == "7"&&
			sudoku2_16->Text == "1"&&sudoku2_17->Text == "5"&&sudoku2_18->Text == "4"&&sudoku2_19->Text == "4"&&sudoku2_20->Text == "2"
			&&sudoku2_21->Text == "3"&&sudoku2_22->Text == "9"&&sudoku2_23->Text == "8"&&sudoku2_24->Text == "6"&&sudoku2_25->Text == "5"&&
			sudoku2_26->Text == "7"&&sudoku2_27->Text == "9"&&sudoku2_28->Text == "5"&&sudoku2_29->Text == "8"&&sudoku2_30->Text == "4"
			&&sudoku2_31->Text == "8"&&sudoku2_32->Text == "5"&&sudoku2_33->Text == "4"&&sudoku2_34->Text == "6"&&sudoku2_35->Text == "7"
			&&sudoku2_36->Text == "1"&&sudoku2_37->Text == "9"&&sudoku2_38->Text == "4"&&sudoku2_39->Text == "9"&&sudoku2_40->Text == "3"&&
			sudoku2_41->Text == "7"&&sudoku2_42->Text == "6"&&sudoku2_43->Text == "6"&&sudoku2_44->Text == "8"&&sudoku2_45->Text == "1"
			&&sudoku2_46->Text == "2"&&sudoku2_47->Text == "9"&&sudoku2_48->Text == "4"&&sudoku2_49->Text == "3"&&sudoku2_50->Text == "5"
			&&sudoku2_51->Text == "2"&&sudoku2_52->Text == "7"&&sudoku2_53->Text == "6"&&sudoku2_54->Text == "1"&&sudoku2_55->Text == "8") {
			timer1->Stop();
			sekunda2;
			minuta2;
			MessageBox::Show("Sudoku rozwiazane poprawnie", "Sprawdzenie", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			zapisz->Show();
		}
		else
			MessageBox::Show("Zle!", "Sprawdzenie", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	private: System::Void zapisz_Click(System::Object^  sender, System::EventArgs^  e) {
		CppWinForm1::wyniki^ wynikiForm = gcnew wyniki();
		wynikiForm->Show();

		DataGridViewRow ^ row = gcnew DataGridViewRow();

		row->CreateCells(wynikiForm->tabelka);
		row->Cells[0]->Value = nazwa_gracza2->Text; //gracz
		row->Cells[1]->Value = Czas2->Text; //czas
		row->Cells[2]->Value = "Sredni"; //poziom

		wynikiForm->tabelka->Rows->Add(row);
	}
};
}
