#pragma once

namespace formatter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SettingsWindow
	/// </summary>
	public ref class SettingsWindow : public System::Windows::Forms::Form
	{
	public:
		SettingsWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		SettingsWindow(System::Windows::Forms::Form ^)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 108);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(124, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Tabs instead spaces";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SettingsWindow::CheckBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Accept";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 131);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(184, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Blank line between each function";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 155);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(180, 17);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Blank line at the end of the code";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(12, 13);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(223, 17);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"Insert name label in the principal comment";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(12, 37);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(218, 17);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->Text = L"Insert date label in the principal comment";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(12, 61);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(223, 17);
			this->checkBox6->TabIndex = 7;
			this->checkBox6->Text = L"Insert editor label in the principal comment";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(12, 85);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(248, 17);
			this->checkBox7->TabIndex = 8;
			this->checkBox7->Text = L"Insert description label in the principal comment";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// SettingsWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"SettingsWindow";
			this->Text = L"SettingsWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
