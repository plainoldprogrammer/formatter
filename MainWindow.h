#pragma once
#include "SettingsWindow.h"

namespace formatter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::Button^ buttonFormatCode;
	private: System::Windows::Forms::Button^ buttonSettings;
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
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->buttonFormatCode = (gcnew System::Windows::Forms::Button());
			this->buttonSettings = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox
			// 
			this->textBox->AcceptsTab = true;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(12, 12);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox->Size = System::Drawing::Size(1008, 510);
			this->textBox->TabIndex = 0;
			this->textBox->WordWrap = false;
			// 
			// buttonFormatCode
			// 
			this->buttonFormatCode->Location = System::Drawing::Point(945, 566);
			this->buttonFormatCode->Name = L"buttonFormatCode";
			this->buttonFormatCode->Size = System::Drawing::Size(75, 23);
			this->buttonFormatCode->TabIndex = 1;
			this->buttonFormatCode->Text = L"Format Code";
			this->buttonFormatCode->UseVisualStyleBackColor = true;
			this->buttonFormatCode->Click += gcnew System::EventHandler(this, &MainWindow::ButtonFormatCode_Click);
			// 
			// buttonSettings
			// 
			this->buttonSettings->Location = System::Drawing::Point(864, 566);
			this->buttonSettings->Name = L"buttonSettings";
			this->buttonSettings->Size = System::Drawing::Size(75, 23);
			this->buttonSettings->TabIndex = 2;
			this->buttonSettings->Text = L"Settings";
			this->buttonSettings->UseVisualStyleBackColor = true;
			this->buttonSettings->Click += gcnew System::EventHandler(this, &MainWindow::ButtonSettings_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 601);
			this->Controls->Add(this->buttonSettings);
			this->Controls->Add(this->buttonFormatCode);
			this->Controls->Add(this->textBox);
			this->Name = L"MainWindow";
			this->Text = L"Formatter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonFormatCode_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Your code has been formatted");
	}

	private: System::Void ButtonSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		Form ^settingsWindow = gcnew SettingsWindow(this);
		settingsWindow->Show(this);
	}

	};
}
