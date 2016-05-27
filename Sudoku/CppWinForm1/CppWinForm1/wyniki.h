#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for wyniki
	/// </summary>
	public ref class wyniki : public System::Windows::Forms::Form
	{
	public:
		wyniki(void)
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
		~wyniki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::DataGridView^  tabelka;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  button1;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabelka = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelka))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(241, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wyniki";
			// 
			// tabelka
			// 
			this->tabelka->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelka->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->tabelka->Location = System::Drawing::Point(64, 85);
			this->tabelka->Name = L"tabelka";
			this->tabelka->RowTemplate->Height = 24;
			this->tabelka->Size = System::Drawing::Size(464, 192);
			this->tabelka->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Gracz";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Czas";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Poziom";
			this->Column3->Name = L"Column3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(276, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &wyniki::button1_Click);
			// 
			// wyniki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOrchid;
			this->ClientSize = System::Drawing::Size(612, 399);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabelka);
			this->Controls->Add(this->label1);
			this->Name = L"wyniki";
			this->Text = L"wyniki";
			this->Load += gcnew System::EventHandler(this, &wyniki::wyniki_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelka))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void wyniki_Load(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ sr = gcnew StreamReader("wyniki.txt");
	String^ pomocniczy = "";
	String^ pomocniczy2 = "";
	
	int cellInt = 0;
	while (sr->Peek() >= 0){
		DataGridViewRow ^ row = gcnew DataGridViewRow();
		row->CreateCells(tabelka);
		pomocniczy2 = sr->ReadLine();
		for (int i = 0; i < pomocniczy2->Length; i++){
			if (pomocniczy2[i] == '|'){
				if (cellInt == 3)
					break;

				row->Cells[cellInt]->Value = pomocniczy;
				pomocniczy = "";
				cellInt++;
				continue;
			}
			
			pomocniczy += pomocniczy2[i];
		}
		cellInt = 0;
		tabelka->Rows->Add(row);
	}
	sr->Close();
	//MessageBox::Show("Za³adowane!");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	TextWriter^ tw = gcnew StreamWriter("wyniki.txt");
	for (int i = 0; i < tabelka->Rows->Count - 1; i++){
		for (int j = 0; j < tabelka->Columns->Count; j++){
			tw->Write(tabelka->Rows[i]->Cells[j]->Value->ToString() + "|");
		}
		tw->WriteLine("");
	}
	tw->Close();
	MessageBox::Show("Zapisano wyniki!");
}
};
}
