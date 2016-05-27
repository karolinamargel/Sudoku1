#pragma once

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for o_grze
	/// </summary>
	public ref class o_grze : public System::Windows::Forms::Form
	{
	public:
		o_grze(void)
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
		~o_grze()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  tekst_o_grze;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(o_grze::typeid));
			this->tekst_o_grze = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tekst_o_grze
			// 
			this->tekst_o_grze->AutoSize = true;
			this->tekst_o_grze->Location = System::Drawing::Point(13, 13);
			this->tekst_o_grze->Name = L"tekst_o_grze";
			this->tekst_o_grze->Size = System::Drawing::Size(351, 136);
			this->tekst_o_grze->TabIndex = 0;
			this->tekst_o_grze->Text = resources->GetString(L"tekst_o_grze.Text");
			// 
			// o_grze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 167);
			this->Controls->Add(this->tekst_o_grze);
			this->Name = L"o_grze";
			this->Text = L"o_grze";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
