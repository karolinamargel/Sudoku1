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
	/// Summary for sudoku3
	/// </summary>
	public ref class sudoku3 : public System::Windows::Forms::Form
	{
		static int sekunda3;
		static int minuta3;
		String^ sek3;
	private: System::Windows::Forms::Button^  spr3;
	private: System::Windows::Forms::Button^  zapisz;
			 String^ min3;

	public:
		sudoku3(void)
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
		~sudoku3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_1;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_2;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_3;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_4;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_5;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_6;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_7;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_8;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_9;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_10;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_11;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_12;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_13;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_14;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_15;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_16;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_17;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_18;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_28;




















	private: System::Windows::Forms::MaskedTextBox^  sudoku3_19;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_20;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_21;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_22;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_23;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_24;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_25;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_26;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_27;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_29;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_30;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_31;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_32;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_33;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_34;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_35;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_36;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_37;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_38;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_39;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_40;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_41;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_42;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_43;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_44;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_45;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_46;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_47;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_48;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_49;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_50;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_51;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_52;
	private: System::Windows::Forms::MaskedTextBox^  sudoku3_53;
private: System::Windows::Forms::MaskedTextBox^  sudoku3_54;
private: System::Windows::Forms::MaskedTextBox^  sudoku3_55;





































	private: System::Windows::Forms::TextBox^  nazwa_gracza3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  Czas3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sudoku3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sudoku3_1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_44 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_45 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_46 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_47 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_48 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_49 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_50 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_51 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_52 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_53 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_54 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sudoku3_55 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->nazwa_gracza3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Czas3 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->spr3 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(36, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 29);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Poziom trudny";
			// 
			// sudoku3_1
			// 
			this->sudoku3_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_1->Location = System::Drawing::Point(253, 37);
			this->sudoku3_1->Mask = L"0";
			this->sudoku3_1->Name = L"sudoku3_1";
			this->sudoku3_1->Size = System::Drawing::Size(25, 28);
			this->sudoku3_1->TabIndex = 53;
			// 
			// sudoku3_2
			// 
			this->sudoku3_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_2->Location = System::Drawing::Point(303, 37);
			this->sudoku3_2->Mask = L"0";
			this->sudoku3_2->Name = L"sudoku3_2";
			this->sudoku3_2->Size = System::Drawing::Size(25, 28);
			this->sudoku3_2->TabIndex = 54;
			// 
			// sudoku3_3
			// 
			this->sudoku3_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_3->Location = System::Drawing::Point(411, 37);
			this->sudoku3_3->Mask = L"0";
			this->sudoku3_3->Name = L"sudoku3_3";
			this->sudoku3_3->Size = System::Drawing::Size(25, 28);
			this->sudoku3_3->TabIndex = 55;
			// 
			// sudoku3_4
			// 
			this->sudoku3_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_4->Location = System::Drawing::Point(579, 37);
			this->sudoku3_4->Mask = L"0";
			this->sudoku3_4->Name = L"sudoku3_4";
			this->sudoku3_4->Size = System::Drawing::Size(25, 28);
			this->sudoku3_4->TabIndex = 56;
			// 
			// sudoku3_5
			// 
			this->sudoku3_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_5->Location = System::Drawing::Point(629, 37);
			this->sudoku3_5->Mask = L"0";
			this->sudoku3_5->Name = L"sudoku3_5";
			this->sudoku3_5->Size = System::Drawing::Size(25, 28);
			this->sudoku3_5->TabIndex = 57;
			// 
			// sudoku3_6
			// 
			this->sudoku3_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_6->Location = System::Drawing::Point(253, 84);
			this->sudoku3_6->Mask = L"0";
			this->sudoku3_6->Name = L"sudoku3_6";
			this->sudoku3_6->Size = System::Drawing::Size(25, 28);
			this->sudoku3_6->TabIndex = 58;
			// 
			// sudoku3_7
			// 
			this->sudoku3_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_7->Location = System::Drawing::Point(353, 84);
			this->sudoku3_7->Mask = L"0";
			this->sudoku3_7->Name = L"sudoku3_7";
			this->sudoku3_7->Size = System::Drawing::Size(25, 28);
			this->sudoku3_7->TabIndex = 59;
			// 
			// sudoku3_8
			// 
			this->sudoku3_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_8->Location = System::Drawing::Point(411, 84);
			this->sudoku3_8->Mask = L"0";
			this->sudoku3_8->Name = L"sudoku3_8";
			this->sudoku3_8->Size = System::Drawing::Size(25, 28);
			this->sudoku3_8->TabIndex = 60;
			// 
			// sudoku3_9
			// 
			this->sudoku3_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_9->Location = System::Drawing::Point(519, 84);
			this->sudoku3_9->Mask = L"0";
			this->sudoku3_9->Name = L"sudoku3_9";
			this->sudoku3_9->Size = System::Drawing::Size(25, 28);
			this->sudoku3_9->TabIndex = 61;
			// 
			// sudoku3_10
			// 
			this->sudoku3_10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_10->Location = System::Drawing::Point(629, 84);
			this->sudoku3_10->Mask = L"0";
			this->sudoku3_10->Name = L"sudoku3_10";
			this->sudoku3_10->Size = System::Drawing::Size(25, 28);
			this->sudoku3_10->TabIndex = 62;
			// 
			// sudoku3_11
			// 
			this->sudoku3_11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_11->Location = System::Drawing::Point(677, 84);
			this->sudoku3_11->Mask = L"0";
			this->sudoku3_11->Name = L"sudoku3_11";
			this->sudoku3_11->Size = System::Drawing::Size(25, 28);
			this->sudoku3_11->TabIndex = 63;
			// 
			// sudoku3_12
			// 
			this->sudoku3_12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_12->Location = System::Drawing::Point(303, 138);
			this->sudoku3_12->Mask = L"0";
			this->sudoku3_12->Name = L"sudoku3_12";
			this->sudoku3_12->Size = System::Drawing::Size(25, 28);
			this->sudoku3_12->TabIndex = 64;
			// 
			// sudoku3_13
			// 
			this->sudoku3_13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_13->Location = System::Drawing::Point(353, 138);
			this->sudoku3_13->Mask = L"0";
			this->sudoku3_13->Name = L"sudoku3_13";
			this->sudoku3_13->Size = System::Drawing::Size(25, 28);
			this->sudoku3_13->TabIndex = 65;
			// 
			// sudoku3_14
			// 
			this->sudoku3_14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_14->Location = System::Drawing::Point(411, 138);
			this->sudoku3_14->Mask = L"0";
			this->sudoku3_14->Name = L"sudoku3_14";
			this->sudoku3_14->Size = System::Drawing::Size(25, 28);
			this->sudoku3_14->TabIndex = 66;
			// 
			// sudoku3_15
			// 
			this->sudoku3_15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_15->Location = System::Drawing::Point(461, 138);
			this->sudoku3_15->Mask = L"0";
			this->sudoku3_15->Name = L"sudoku3_15";
			this->sudoku3_15->Size = System::Drawing::Size(25, 28);
			this->sudoku3_15->TabIndex = 67;
			// 
			// sudoku3_16
			// 
			this->sudoku3_16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_16->Location = System::Drawing::Point(519, 138);
			this->sudoku3_16->Mask = L"0";
			this->sudoku3_16->Name = L"sudoku3_16";
			this->sudoku3_16->Size = System::Drawing::Size(25, 28);
			this->sudoku3_16->TabIndex = 68;
			// 
			// sudoku3_17
			// 
			this->sudoku3_17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_17->Location = System::Drawing::Point(579, 138);
			this->sudoku3_17->Mask = L"0";
			this->sudoku3_17->Name = L"sudoku3_17";
			this->sudoku3_17->Size = System::Drawing::Size(25, 28);
			this->sudoku3_17->TabIndex = 69;
			// 
			// sudoku3_18
			// 
			this->sudoku3_18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_18->Location = System::Drawing::Point(677, 138);
			this->sudoku3_18->Mask = L"0";
			this->sudoku3_18->Name = L"sudoku3_18";
			this->sudoku3_18->Size = System::Drawing::Size(25, 28);
			this->sudoku3_18->TabIndex = 70;
			// 
			// sudoku3_28
			// 
			this->sudoku3_28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_28->Location = System::Drawing::Point(353, 245);
			this->sudoku3_28->Mask = L"0";
			this->sudoku3_28->Name = L"sudoku3_28";
			this->sudoku3_28->Size = System::Drawing::Size(25, 28);
			this->sudoku3_28->TabIndex = 71;
			// 
			// sudoku3_19
			// 
			this->sudoku3_19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_19->Location = System::Drawing::Point(253, 192);
			this->sudoku3_19->Mask = L"0";
			this->sudoku3_19->Name = L"sudoku3_19";
			this->sudoku3_19->Size = System::Drawing::Size(25, 28);
			this->sudoku3_19->TabIndex = 71;
			// 
			// sudoku3_20
			// 
			this->sudoku3_20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_20->Location = System::Drawing::Point(353, 192);
			this->sudoku3_20->Mask = L"0";
			this->sudoku3_20->Name = L"sudoku3_20";
			this->sudoku3_20->Size = System::Drawing::Size(25, 28);
			this->sudoku3_20->TabIndex = 72;
			// 
			// sudoku3_21
			// 
			this->sudoku3_21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_21->Location = System::Drawing::Point(411, 192);
			this->sudoku3_21->Mask = L"0";
			this->sudoku3_21->Name = L"sudoku3_21";
			this->sudoku3_21->Size = System::Drawing::Size(25, 28);
			this->sudoku3_21->TabIndex = 73;
			// 
			// sudoku3_22
			// 
			this->sudoku3_22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_22->Location = System::Drawing::Point(461, 192);
			this->sudoku3_22->Mask = L"0";
			this->sudoku3_22->Name = L"sudoku3_22";
			this->sudoku3_22->Size = System::Drawing::Size(25, 28);
			this->sudoku3_22->TabIndex = 74;
			// 
			// sudoku3_23
			// 
			this->sudoku3_23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_23->Location = System::Drawing::Point(519, 192);
			this->sudoku3_23->Mask = L"0";
			this->sudoku3_23->Name = L"sudoku3_23";
			this->sudoku3_23->Size = System::Drawing::Size(25, 28);
			this->sudoku3_23->TabIndex = 75;
			// 
			// sudoku3_24
			// 
			this->sudoku3_24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_24->Location = System::Drawing::Point(579, 192);
			this->sudoku3_24->Mask = L"0";
			this->sudoku3_24->Name = L"sudoku3_24";
			this->sudoku3_24->Size = System::Drawing::Size(25, 28);
			this->sudoku3_24->TabIndex = 76;
			// 
			// sudoku3_25
			// 
			this->sudoku3_25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_25->Location = System::Drawing::Point(629, 192);
			this->sudoku3_25->Mask = L"0";
			this->sudoku3_25->Name = L"sudoku3_25";
			this->sudoku3_25->Size = System::Drawing::Size(25, 28);
			this->sudoku3_25->TabIndex = 77;
			// 
			// sudoku3_26
			// 
			this->sudoku3_26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_26->Location = System::Drawing::Point(253, 245);
			this->sudoku3_26->Mask = L"0";
			this->sudoku3_26->Name = L"sudoku3_26";
			this->sudoku3_26->Size = System::Drawing::Size(25, 28);
			this->sudoku3_26->TabIndex = 78;
			// 
			// sudoku3_27
			// 
			this->sudoku3_27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_27->Location = System::Drawing::Point(303, 245);
			this->sudoku3_27->Mask = L"0";
			this->sudoku3_27->Name = L"sudoku3_27";
			this->sudoku3_27->Size = System::Drawing::Size(25, 28);
			this->sudoku3_27->TabIndex = 79;
			// 
			// sudoku3_29
			// 
			this->sudoku3_29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_29->Location = System::Drawing::Point(461, 245);
			this->sudoku3_29->Mask = L"0";
			this->sudoku3_29->Name = L"sudoku3_29";
			this->sudoku3_29->Size = System::Drawing::Size(25, 28);
			this->sudoku3_29->TabIndex = 80;
			// 
			// sudoku3_30
			// 
			this->sudoku3_30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_30->Location = System::Drawing::Point(629, 245);
			this->sudoku3_30->Mask = L"0";
			this->sudoku3_30->Name = L"sudoku3_30";
			this->sudoku3_30->Size = System::Drawing::Size(25, 28);
			this->sudoku3_30->TabIndex = 81;
			// 
			// sudoku3_31
			// 
			this->sudoku3_31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_31->Location = System::Drawing::Point(677, 245);
			this->sudoku3_31->Mask = L"0";
			this->sudoku3_31->Name = L"sudoku3_31";
			this->sudoku3_31->Size = System::Drawing::Size(25, 28);
			this->sudoku3_31->TabIndex = 82;
			// 
			// sudoku3_32
			// 
			this->sudoku3_32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_32->Location = System::Drawing::Point(253, 303);
			this->sudoku3_32->Mask = L"0";
			this->sudoku3_32->Name = L"sudoku3_32";
			this->sudoku3_32->Size = System::Drawing::Size(25, 28);
			this->sudoku3_32->TabIndex = 83;
			// 
			// sudoku3_33
			// 
			this->sudoku3_33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_33->Location = System::Drawing::Point(303, 303);
			this->sudoku3_33->Mask = L"0";
			this->sudoku3_33->Name = L"sudoku3_33";
			this->sudoku3_33->Size = System::Drawing::Size(25, 28);
			this->sudoku3_33->TabIndex = 84;
			// 
			// sudoku3_34
			// 
			this->sudoku3_34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_34->Location = System::Drawing::Point(411, 303);
			this->sudoku3_34->Mask = L"0";
			this->sudoku3_34->Name = L"sudoku3_34";
			this->sudoku3_34->Size = System::Drawing::Size(25, 28);
			this->sudoku3_34->TabIndex = 85;
			// 
			// sudoku3_35
			// 
			this->sudoku3_35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_35->Location = System::Drawing::Point(579, 303);
			this->sudoku3_35->Mask = L"0";
			this->sudoku3_35->Name = L"sudoku3_35";
			this->sudoku3_35->Size = System::Drawing::Size(25, 28);
			this->sudoku3_35->TabIndex = 86;
			// 
			// sudoku3_36
			// 
			this->sudoku3_36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_36->Location = System::Drawing::Point(629, 303);
			this->sudoku3_36->Mask = L"0";
			this->sudoku3_36->Name = L"sudoku3_36";
			this->sudoku3_36->Size = System::Drawing::Size(25, 28);
			this->sudoku3_36->TabIndex = 87;
			// 
			// sudoku3_37
			// 
			this->sudoku3_37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_37->Location = System::Drawing::Point(677, 303);
			this->sudoku3_37->Mask = L"0";
			this->sudoku3_37->Name = L"sudoku3_37";
			this->sudoku3_37->Size = System::Drawing::Size(25, 28);
			this->sudoku3_37->TabIndex = 88;
			// 
			// sudoku3_38
			// 
			this->sudoku3_38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_38->Location = System::Drawing::Point(253, 359);
			this->sudoku3_38->Mask = L"0";
			this->sudoku3_38->Name = L"sudoku3_38";
			this->sudoku3_38->Size = System::Drawing::Size(25, 28);
			this->sudoku3_38->TabIndex = 89;
			// 
			// sudoku3_39
			// 
			this->sudoku3_39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_39->Location = System::Drawing::Point(353, 359);
			this->sudoku3_39->Mask = L"0";
			this->sudoku3_39->Name = L"sudoku3_39";
			this->sudoku3_39->Size = System::Drawing::Size(25, 28);
			this->sudoku3_39->TabIndex = 90;
			// 
			// sudoku3_40
			// 
			this->sudoku3_40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_40->Location = System::Drawing::Point(461, 359);
			this->sudoku3_40->Mask = L"0";
			this->sudoku3_40->Name = L"sudoku3_40";
			this->sudoku3_40->Size = System::Drawing::Size(25, 28);
			this->sudoku3_40->TabIndex = 91;
			// 
			// sudoku3_41
			// 
			this->sudoku3_41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_41->Location = System::Drawing::Point(629, 359);
			this->sudoku3_41->Mask = L"0";
			this->sudoku3_41->Name = L"sudoku3_41";
			this->sudoku3_41->Size = System::Drawing::Size(25, 28);
			this->sudoku3_41->TabIndex = 92;
			// 
			// sudoku3_42
			// 
			this->sudoku3_42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_42->Location = System::Drawing::Point(677, 359);
			this->sudoku3_42->Mask = L"0";
			this->sudoku3_42->Name = L"sudoku3_42";
			this->sudoku3_42->Size = System::Drawing::Size(25, 28);
			this->sudoku3_42->TabIndex = 93;
			// 
			// sudoku3_43
			// 
			this->sudoku3_43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_43->Location = System::Drawing::Point(303, 412);
			this->sudoku3_43->Mask = L"0";
			this->sudoku3_43->Name = L"sudoku3_43";
			this->sudoku3_43->Size = System::Drawing::Size(25, 28);
			this->sudoku3_43->TabIndex = 94;
			// 
			// sudoku3_44
			// 
			this->sudoku3_44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_44->Location = System::Drawing::Point(353, 412);
			this->sudoku3_44->Mask = L"0";
			this->sudoku3_44->Name = L"sudoku3_44";
			this->sudoku3_44->Size = System::Drawing::Size(25, 28);
			this->sudoku3_44->TabIndex = 95;
			// 
			// sudoku3_45
			// 
			this->sudoku3_45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_45->Location = System::Drawing::Point(411, 412);
			this->sudoku3_45->Mask = L"0";
			this->sudoku3_45->Name = L"sudoku3_45";
			this->sudoku3_45->Size = System::Drawing::Size(25, 28);
			this->sudoku3_45->TabIndex = 96;
			// 
			// sudoku3_46
			// 
			this->sudoku3_46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_46->Location = System::Drawing::Point(461, 412);
			this->sudoku3_46->Mask = L"0";
			this->sudoku3_46->Name = L"sudoku3_46";
			this->sudoku3_46->Size = System::Drawing::Size(25, 28);
			this->sudoku3_46->TabIndex = 97;
			// 
			// sudoku3_47
			// 
			this->sudoku3_47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_47->Location = System::Drawing::Point(519, 412);
			this->sudoku3_47->Mask = L"0";
			this->sudoku3_47->Name = L"sudoku3_47";
			this->sudoku3_47->Size = System::Drawing::Size(25, 28);
			this->sudoku3_47->TabIndex = 98;
			// 
			// sudoku3_48
			// 
			this->sudoku3_48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_48->Location = System::Drawing::Point(579, 412);
			this->sudoku3_48->Mask = L"0";
			this->sudoku3_48->Name = L"sudoku3_48";
			this->sudoku3_48->Size = System::Drawing::Size(25, 28);
			this->sudoku3_48->TabIndex = 99;
			// 
			// sudoku3_49
			// 
			this->sudoku3_49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_49->Location = System::Drawing::Point(677, 412);
			this->sudoku3_49->Mask = L"0";
			this->sudoku3_49->Name = L"sudoku3_49";
			this->sudoku3_49->Size = System::Drawing::Size(25, 28);
			this->sudoku3_49->TabIndex = 100;
			// 
			// sudoku3_50
			// 
			this->sudoku3_50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_50->Location = System::Drawing::Point(253, 464);
			this->sudoku3_50->Mask = L"0";
			this->sudoku3_50->Name = L"sudoku3_50";
			this->sudoku3_50->Size = System::Drawing::Size(25, 28);
			this->sudoku3_50->TabIndex = 101;
			// 
			// sudoku3_51
			// 
			this->sudoku3_51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_51->Location = System::Drawing::Point(303, 464);
			this->sudoku3_51->Mask = L"0";
			this->sudoku3_51->Name = L"sudoku3_51";
			this->sudoku3_51->Size = System::Drawing::Size(25, 28);
			this->sudoku3_51->TabIndex = 102;
			// 
			// sudoku3_52
			// 
			this->sudoku3_52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_52->Location = System::Drawing::Point(461, 464);
			this->sudoku3_52->Mask = L"0";
			this->sudoku3_52->Name = L"sudoku3_52";
			this->sudoku3_52->Size = System::Drawing::Size(25, 28);
			this->sudoku3_52->TabIndex = 103;
			// 
			// sudoku3_53
			// 
			this->sudoku3_53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_53->Location = System::Drawing::Point(519, 464);
			this->sudoku3_53->Mask = L"0";
			this->sudoku3_53->Name = L"sudoku3_53";
			this->sudoku3_53->Size = System::Drawing::Size(25, 28);
			this->sudoku3_53->TabIndex = 104;
			// 
			// sudoku3_54
			// 
			this->sudoku3_54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_54->Location = System::Drawing::Point(579, 464);
			this->sudoku3_54->Mask = L"0";
			this->sudoku3_54->Name = L"sudoku3_54";
			this->sudoku3_54->Size = System::Drawing::Size(25, 28);
			this->sudoku3_54->TabIndex = 105;
			// 
			// sudoku3_55
			// 
			this->sudoku3_55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sudoku3_55->Location = System::Drawing::Point(629, 464);
			this->sudoku3_55->Mask = L"0";
			this->sudoku3_55->Name = L"sudoku3_55";
			this->sudoku3_55->Size = System::Drawing::Size(25, 28);
			this->sudoku3_55->TabIndex = 106;
			// 
			// nazwa_gracza3
			// 
			this->nazwa_gracza3->Location = System::Drawing::Point(38, 259);
			this->nazwa_gracza3->Name = L"nazwa_gracza3";
			this->nazwa_gracza3->Size = System::Drawing::Size(139, 22);
			this->nazwa_gracza3->TabIndex = 108;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 17);
			this->label2->TabIndex = 107;
			this->label2->Text = L"Podaj nazwê gracza:";
			// 
			// Czas3
			// 
			this->Czas3->AutoSize = true;
			this->Czas3->Location = System::Drawing::Point(93, 438);
			this->Czas3->Name = L"Czas3";
			this->Czas3->Size = System::Drawing::Size(28, 17);
			this->Czas3->TabIndex = 112;
			this->Czas3->Text = L"0:0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(35, 438);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 111;
			this->label3->Text = L"Czas:";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &sudoku3::timer1_Tick);
			// 
			// spr3
			// 
			this->spr3->Location = System::Drawing::Point(38, 468);
			this->spr3->Name = L"spr3";
			this->spr3->Size = System::Drawing::Size(75, 25);
			this->spr3->TabIndex = 113;
			this->spr3->Text = L"Sprawdz";
			this->spr3->UseVisualStyleBackColor = true;
			this->spr3->Click += gcnew System::EventHandler(this, &sudoku3::spr3_Click);
			// 
			// zapisz
			// 
			this->zapisz->Location = System::Drawing::Point(38, 303);
			this->zapisz->Name = L"zapisz";
			this->zapisz->Size = System::Drawing::Size(139, 28);
			this->zapisz->TabIndex = 114;
			this->zapisz->Text = L"Zapisz wynik";
			this->zapisz->UseVisualStyleBackColor = true;
			this->zapisz->Visible = false;
			this->zapisz->Click += gcnew System::EventHandler(this, &sudoku3::zapisz_Click);
			// 
			// sudoku3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(742, 533);
			this->Controls->Add(this->zapisz);
			this->Controls->Add(this->spr3);
			this->Controls->Add(this->Czas3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nazwa_gracza3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->sudoku3_55);
			this->Controls->Add(this->sudoku3_54);
			this->Controls->Add(this->sudoku3_53);
			this->Controls->Add(this->sudoku3_52);
			this->Controls->Add(this->sudoku3_51);
			this->Controls->Add(this->sudoku3_50);
			this->Controls->Add(this->sudoku3_49);
			this->Controls->Add(this->sudoku3_48);
			this->Controls->Add(this->sudoku3_47);
			this->Controls->Add(this->sudoku3_46);
			this->Controls->Add(this->sudoku3_45);
			this->Controls->Add(this->sudoku3_44);
			this->Controls->Add(this->sudoku3_43);
			this->Controls->Add(this->sudoku3_42);
			this->Controls->Add(this->sudoku3_41);
			this->Controls->Add(this->sudoku3_40);
			this->Controls->Add(this->sudoku3_39);
			this->Controls->Add(this->sudoku3_38);
			this->Controls->Add(this->sudoku3_37);
			this->Controls->Add(this->sudoku3_36);
			this->Controls->Add(this->sudoku3_35);
			this->Controls->Add(this->sudoku3_34);
			this->Controls->Add(this->sudoku3_33);
			this->Controls->Add(this->sudoku3_32);
			this->Controls->Add(this->sudoku3_31);
			this->Controls->Add(this->sudoku3_30);
			this->Controls->Add(this->sudoku3_29);
			this->Controls->Add(this->sudoku3_27);
			this->Controls->Add(this->sudoku3_26);
			this->Controls->Add(this->sudoku3_25);
			this->Controls->Add(this->sudoku3_24);
			this->Controls->Add(this->sudoku3_23);
			this->Controls->Add(this->sudoku3_22);
			this->Controls->Add(this->sudoku3_21);
			this->Controls->Add(this->sudoku3_20);
			this->Controls->Add(this->sudoku3_19);
			this->Controls->Add(this->sudoku3_28);
			this->Controls->Add(this->sudoku3_18);
			this->Controls->Add(this->sudoku3_17);
			this->Controls->Add(this->sudoku3_16);
			this->Controls->Add(this->sudoku3_15);
			this->Controls->Add(this->sudoku3_14);
			this->Controls->Add(this->sudoku3_13);
			this->Controls->Add(this->sudoku3_12);
			this->Controls->Add(this->sudoku3_11);
			this->Controls->Add(this->sudoku3_10);
			this->Controls->Add(this->sudoku3_9);
			this->Controls->Add(this->sudoku3_8);
			this->Controls->Add(this->sudoku3_7);
			this->Controls->Add(this->sudoku3_6);
			this->Controls->Add(this->sudoku3_5);
			this->Controls->Add(this->sudoku3_4);
			this->Controls->Add(this->sudoku3_3);
			this->Controls->Add(this->sudoku3_2);
			this->Controls->Add(this->sudoku3_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"sudoku3";
			this->Text = L"sudoku3";
			this->Load += gcnew System::EventHandler(this, &sudoku3::sudoku3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sudoku3_Load(System::Object^  sender, System::EventArgs^  e) {
		sekunda3 = 0;
		minuta3 = 0;
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		sekunda3++;

		if (sekunda3 == 60) {
			sekunda3 = 0;
			minuta3++;
		}

		sek3 = Convert::ToString(sekunda3);
		min3 = Convert::ToString(minuta3);
		Czas3->Text = min3 + ":" + sek3;
	}
	private: System::Void spr3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sudoku3_1->Text == "4"&&sudoku3_2->Text == "9"&&sudoku3_3->Text == "5"&&sudoku3_4->Text == "1"&&sudoku3_5->Text == "6"
			&&sudoku3_6->Text == "1"&&sudoku3_7->Text == "2"&&sudoku3_8->Text == "8"&&sudoku3_9->Text == "7"&&sudoku3_10->Text == "9"
			&&sudoku3_11->Text == "3"&&sudoku3_12->Text == "5"&&sudoku3_13->Text == "3"&&sudoku3_14->Text == "1"&&sudoku3_15->Text == "6"&&
			sudoku3_16->Text == "9"&&sudoku3_17->Text == "2"&&sudoku3_18->Text == "4"&&sudoku3_19->Text == "3"&&sudoku3_20->Text == "6"
			&&sudoku3_21->Text == "2"&&sudoku3_22->Text == "5"&&sudoku3_23->Text == "4"&&sudoku3_24->Text == "8"&&sudoku3_25->Text == "7"&&
			sudoku3_26->Text == "2"&&sudoku3_27->Text == "4"&&sudoku3_28->Text == "7"&&sudoku3_29->Text == "1"&&sudoku3_30->Text == "5"
			&&sudoku3_31->Text == "6"&&sudoku3_32->Text == "9"&&sudoku3_33->Text == "8"&&sudoku3_34->Text == "3"&&sudoku3_35->Text == "4"
			&&sudoku3_36->Text == "2"&&sudoku3_37->Text == "1"&&sudoku3_38->Text == "8"&&sudoku3_39->Text == "4"&&sudoku3_40->Text == "9"&&
			sudoku3_41->Text == "1"&&sudoku3_42->Text == "5"&&sudoku3_43->Text == "3"&&sudoku3_44->Text == "1"&&sudoku3_45->Text == "7"
			&&sudoku3_46->Text == "2"&&sudoku3_47->Text == "5"&&sudoku3_48->Text == "9"&&sudoku3_49->Text == "8"&&sudoku3_50->Text == "5"
			&&sudoku3_51->Text == "7"&&sudoku3_52->Text == "8"&&sudoku3_53->Text == "1"&&sudoku3_54->Text == "6"&&sudoku3_55->Text == "3") {
			timer1->Stop();
			sekunda3;
			minuta3;
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
		row->Cells[0]->Value = nazwa_gracza3->Text; //gracz
		row->Cells[1]->Value = Czas3->Text; //czas
		row->Cells[2]->Value = "Trudny"; //poziom

		wynikiForm->tabelka->Rows->Add(row);
	}

};
}
