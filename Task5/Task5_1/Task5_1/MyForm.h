#pragma once

namespace Task51 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ allFile;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ countInput;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ priceInput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nameInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ filteredFile;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ nameOfFile;
	private: System::Windows::Forms::Label^ fileSize;
	private: System::Windows::Forms::Label^ label7;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->allFile = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->countInput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->priceInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nameInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->filteredFile = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameOfFile = (gcnew System::Windows::Forms::Label());
			this->fileSize = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// allFile
			// 
			this->allFile->FormattingEnabled = true;
			this->allFile->Location = System::Drawing::Point(152, 37);
			this->allFile->Name = L"allFile";
			this->allFile->Size = System::Drawing::Size(120, 212);
			this->allFile->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ReadFile";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->countInput);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->priceInput);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->nameInput);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(134, 241);
			this->panel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// countInput
			// 
			this->countInput->Location = System::Drawing::Point(47, 92);
			this->countInput->Name = L"countInput";
			this->countInput->Size = System::Drawing::Size(83, 20);
			this->countInput->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Count";
			// 
			// priceInput
			// 
			this->priceInput->Location = System::Drawing::Point(47, 66);
			this->priceInput->Name = L"priceInput";
			this->priceInput->Size = System::Drawing::Size(83, 20);
			this->priceInput->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add to file";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Price";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// nameInput
			// 
			this->nameInput->Location = System::Drawing::Point(47, 40);
			this->nameInput->Name = L"nameInput";
			this->nameInput->Size = System::Drawing::Size(83, 20);
			this->nameInput->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(278, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Count < 30";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// filteredFile
			// 
			this->filteredFile->FormattingEnabled = true;
			this->filteredFile->Location = System::Drawing::Point(278, 37);
			this->filteredFile->Name = L"filteredFile";
			this->filteredFile->Size = System::Drawing::Size(120, 82);
			this->filteredFile->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 208);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Name of file";
			// 
			// nameOfFile
			// 
			this->nameOfFile->AutoSize = true;
			this->nameOfFile->Location = System::Drawing::Point(348, 208);
			this->nameOfFile->Name = L"nameOfFile";
			this->nameOfFile->Size = System::Drawing::Size(0, 13);
			this->nameOfFile->TabIndex = 6;
			// 
			// fileSize
			// 
			this->fileSize->AutoSize = true;
			this->fileSize->Location = System::Drawing::Point(348, 233);
			this->fileSize->Name = L"fileSize";
			this->fileSize->Size = System::Drawing::Size(0, 13);
			this->fileSize->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(278, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"File size";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 261);
			this->Controls->Add(this->fileSize);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->nameOfFile);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->filteredFile);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->allFile);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ fileName = "data.txt";

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FileInfo^ fi = gcnew FileInfo(fileName);

		nameOfFile->Text = fileName;
		fileSize->Text = fi->Length.ToString();

		fill();
	}

	private: System::Void fill() {
		allFile->Items->Clear();
		filteredFile->Items->Clear();

		FileInfo^ fi = gcnew FileInfo(fileName);
		fileSize->Text = fi->Length.ToString();

		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		while ((str = din->ReadLine()) != nullptr)
		{
			array<String^>^ split = str->Split(' ');

			String^ name = split[0];
			String^ price = split[1];
			String^ count = split[2];

			allFile->Items->Add(str);
			if (Convert::ToInt32(count) < 30)
				filteredFile->Items->Add(str);
		}

		din->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		fill();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = nameInput->Text;
		String^ price = priceInput->Text;
		String^ count = countInput->Text;

		StreamWriter^ sw = gcnew StreamWriter(fileName, true);
		sw->WriteLine(name + " " + price + " " + count);
		sw->Close();

		fill();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		fill();
	}
};
}
