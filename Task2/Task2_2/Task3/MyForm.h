#pragma once

namespace Task3 {

	using namespace System;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputL;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::TextBox^ inputM;
	private: System::Windows::Forms::Label^ label3;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputL = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->inputM = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calc";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"L";
			// 
			// inputL
			// 
			this->inputL->Location = System::Drawing::Point(58, 62);
			this->inputL->Name = L"inputL";
			this->inputL->Size = System::Drawing::Size(100, 20);
			this->inputL->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label2->Location = System::Drawing::Point(38, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Result:";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->result->Location = System::Drawing::Point(111, 102);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 24);
			this->result->TabIndex = 4;
			// 
			// inputM
			// 
			this->inputM->Location = System::Drawing::Point(58, 36);
			this->inputM->Name = L"inputM";
			this->inputM->Size = System::Drawing::Size(100, 20);
			this->inputM->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"M";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->inputM);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inputL);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double l;
		double m;

		try { l = Convert::ToDouble(inputL->Text); }
		catch (FormatException^ e) {
			result->Text = "Error: l is not a number";
		}

		try { m = Convert::ToDouble(inputM->Text); }
		catch (FormatException^ e) {
			result->Text = "Error: m is not a number";
		}

		double count = 0;
		double length = 0;

		while (length < l) {
			count++;
			length += m;
			m += m / 100 * 3;
		}

		result->Text = count.ToString();
	}
};
}
