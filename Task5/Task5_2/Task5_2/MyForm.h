#pragma once

namespace Task52 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ button;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(152, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your word:";
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(216, 6);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(100, 20);
			this->input->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"File";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(16, 39);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(107, 199);
			this->listBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Count: ";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Location = System::Drawing::Point(199, 39);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 13);
			this->result->TabIndex = 5;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(155, 65);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 23);
			this->button->TabIndex = 6;
			this->button->Text = L"Execute";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 261);
			this->Controls->Add(this->button);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ fileName = "data.txt";

	private: Void readFile() {
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		while (str = din->ReadLine())
		{
			listBox1->Items->Add(str);
		}

		din->Close();
	}

	private: System::Void MyForm_Load1(System::Object^ sender, System::EventArgs^ e) {
		readFile();
	}

	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ din = File::OpenText(fileName);

		String^ str;
		int count = 0;
		while (str = din->ReadLine())
		{
			array<String^>^ strings = str->Split(' ');
			for (int i = 0; i < strings->Length; i++) {
				if (strings[i] == input->Text)
					count++;
			}
		}

		din->Close();

		result->Text = count.ToString();
	}
};
}
