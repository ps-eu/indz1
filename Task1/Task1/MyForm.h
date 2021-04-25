#pragma once

#include <cliext/vector>

namespace Task1 {
	using namespace cliext;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: String^ fileName = "data.txt";
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ message;
	private: System::Windows::Forms::Label^ searchResult;
	private: System::Windows::Forms::TextBox^ m;
	private: System::Windows::Forms::TextBox^ k;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: vector<int> data;

	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;

	protected:
	private: System::Windows::Forms::Button^ button1;


	protected:
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->message = (gcnew System::Windows::Forms::Label());
			this->k = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->searchResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 381);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Insert k to front";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// message
			// 
			this->message->AutoSize = true;
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->message->Location = System::Drawing::Point(468, 12);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(0, 24);
			this->message->TabIndex = 3;
			// 
			// k
			// 
			this->k->Location = System::Drawing::Point(312, 45);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(100, 20);
			this->k->TabIndex = 4;
			this->k->Text = L"k - here (number)";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Permutation";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(182, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(182, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Sort";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// m
			// 
			this->m->Location = System::Drawing::Point(312, 75);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(100, 20);
			this->m->TabIndex = 8;
			this->m->Text = L"m - here (number)";
			// 
			// searchResult
			// 
			this->searchResult->AutoSize = true;
			this->searchResult->Location = System::Drawing::Point(311, 108);
			this->searchResult->Name = L"searchResult";
			this->searchResult->Size = System::Drawing::Size(0, 13);
			this->searchResult->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 409);
			this->Controls->Add(this->searchResult);
			this->Controls->Add(this->m);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->k);
			this->Controls->Add(this->message);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			StreamReader^ din = File::OpenText(fileName);
			String^ str;
			while ((str = din->ReadLine()) != nullptr)
			{
				int convert;
				try {
					convert = Convert::ToInt32(str);
				}
				catch (FormatException^ e) {
					continue;
				}

				data.push_back(convert);
			}

			din->Close();

			fillDataFile();
			fillListBox();
		}

		void fillDataFile() {
			StreamWriter^ sw = gcnew StreamWriter(fileName);

			for each (int num in data) {
				sw->WriteLine(num.ToString());
			}

			sw->Close();
		}

		void fillListBox() {
			listBox1->Items->Clear();

			for each (int num in data) {
				listBox1->Items->Add(num.ToString());
			}
		}

		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = data.size() - 1; i >= 0; i--) {
			if (i % 2 != 0) data.erase(data.begin() + i);
		}

		fillListBox();
		fillDataFile();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int convert;
		try {
			convert = Convert::ToInt32(k->Text);
		}
		catch (FormatException^ e){
			message->Text = "k is not a number";
			return;
		}

		Random^ rand = gcnew Random();

		for (int i = 0; i < convert; i++) {
			int num = rand->Next() % 200 - 100;

			data.insert(data.begin(), num.ToString());
		}

		fillDataFile();
		fillListBox();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int convert;
		try {
			convert = Convert::ToInt32(m->Text);
		}
		catch (FormatException^ e) {
			message->Text = "m is not a number";
			return;
		}

		vector<int> newData;

		for (int i = 0; i < data.size(); i++) {
			newData.push_back(data.at((i + convert) % data.size()));
		}

		data = newData;

		fillDataFile();
		fillListBox();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (int num in data) {
			if (num % 2 == 0) {
				searchResult->Text = num.ToString();
				return;
			}
		}
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < data.size() - 1; i++) {
			int min = i;

			for (int j = i + 1; j < data.size(); j++) {
				if (data.at(j) < data.at(min)) min = j;
			}

			int c = data.at(i);
			data.at(i) = data.at(min);
			data.at(min) = c;
		}

		fillDataFile();
		fillListBox();
	}
};
}
