#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for info
	/// </summary>
	public ref class info : public System::Windows::Forms::Form
	{
	public:
		info(void)
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
		~info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  informacje;
	protected:

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
			this->informacje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// informacje
			// 
			this->informacje->AutoSize = true;
			this->informacje->Location = System::Drawing::Point(12, 9);
			this->informacje->Name = L"informacje";
			this->informacje->Size = System::Drawing::Size(380, 34);
			this->informacje->TabIndex = 0;
			this->informacje->Text = L"Nazywam sie Karolina Margel. \r\nStudiuje Informatyke Stosowana na Politechnice Gda"
				L"nskiej.";
			// 
			// info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 58);
			this->Controls->Add(this->informacje);
			this->Name = L"info";
			this->Text = L"info";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
