#pragma once

#include <cliext/vector>

namespace Task53 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ direction;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ depTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ arrTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ validityFromDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ validityToDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;








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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->direction = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->depTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->arrTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->validityFromDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->validityToDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->dateTimePicker4);
			this->panel1->Controls->Add(this->dateTimePicker3);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(7, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 263);
			this->panel1->TabIndex = 0;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker4->Location = System::Drawing::Point(93, 72);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker4->TabIndex = 18;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker3->Location = System::Drawing::Point(93, 46);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker3->TabIndex = 17;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(93, 185);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 16;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(93, 159);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker2->TabIndex = 15;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(93, 133);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 20);
			this->dateTimePicker1->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Ticket price";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"To date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Schedule validity period";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"From date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Arrival time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Departure time";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Direction";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"RouteInfo";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->direction,
					this->depTime, this->arrTime, this->validityFromDate, this->validityToDate, this->price
			});
			this->dataGridView1->Location = System::Drawing::Point(213, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(842, 263);
			this->dataGridView1->TabIndex = 1;
			// 
			// direction
			// 
			this->direction->Frozen = true;
			this->direction->HeaderText = L"Direction";
			this->direction->Name = L"direction";
			// 
			// depTime
			// 
			this->depTime->Frozen = true;
			this->depTime->HeaderText = L"Departure time";
			this->depTime->Name = L"depTime";
			this->depTime->Width = 150;
			// 
			// arrTime
			// 
			this->arrTime->Frozen = true;
			this->arrTime->HeaderText = L"ArrivalTime";
			this->arrTime->Name = L"arrTime";
			this->arrTime->Width = 150;
			// 
			// validityFromDate
			// 
			this->validityFromDate->Frozen = true;
			this->validityFromDate->HeaderText = L"From date";
			this->validityFromDate->Name = L"validityFromDate";
			this->validityFromDate->Width = 150;
			// 
			// validityToDate
			// 
			this->validityToDate->Frozen = true;
			this->validityToDate->HeaderText = L"To date";
			this->validityToDate->Name = L"validityToDate";
			this->validityToDate->Width = 150;
			// 
			// price
			// 
			this->price->Frozen = true;
			this->price->HeaderText = L"Ticket price";
			this->price->Name = L"price";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(7, 357);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(438, 95);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(576, 357);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(479, 95);
			this->listBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(81, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(268, 24);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Task 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(690, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(252, 24);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Task 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 464);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"sss";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: ref struct route {
		String^ direction;
		DateTime depTime;
		DateTime arrTime;
		DateTime validityFrom;
		DateTime validityTo;
		int price;
		
		route() {}

		route(route^ _r)
		{
			this->direction = _r->direction;
			this->depTime = _r->depTime;
			this->arrTime = _r->arrTime;
			this->validityFrom = _r->validityFrom;
			this->validityTo = _r->validityTo;
			this->price = _r->price;
		}

		route(route %_r)
		{
			this->direction = _r.direction;
			this->depTime = _r.depTime;
			this->arrTime = _r.arrTime;
			this->validityFrom = _r.validityFrom;
			this->validityTo = _r.validityTo;
			this->price = _r.price;
		}
	};

	private: char delimiter = ';';

	private: String^ filename = "data.txt";

	private: Void addRowToTable(route r) {
		dataGridView1->Rows->Add(
			r.direction,
			r.depTime.ToString(),
			r.arrTime.ToString(),
			r.validityFrom.ToString(),
			r.validityTo.ToString(),
			r.price.ToString()
		);
	}

	private: Void load() {
		StreamReader^ din;

		try {
			din = File::OpenText(filename);
		} 
		catch (FileNotFoundException^ e) {
			StreamWriter^ sw = gcnew StreamWriter(filename);
			sw->Close();

			din = File::OpenText(filename);
		}

		dataGridView1->Rows->Clear();

		String^ str;
		while (str = din->ReadLine()) {
			array<String^>^ split = str->Split(delimiter);

			route r;

			try {
				r.direction = split[0];
				r.depTime = DateTime::Parse(split[1]);
				r.arrTime = DateTime::Parse(split[2]);
				r.validityFrom = DateTime::Parse(split[3]);
				r.validityTo = DateTime::Parse(split[4]);
				r.price = Convert::ToInt32(split[5]);
			}
			catch (IndexOutOfRangeException^ e) {
				return;
			}

			addRowToTable(r);
		}

		din->Close();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		load();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		route r;

		r.direction = textBox1->Text;
		r.depTime = dateTimePicker3->Value;
		r.arrTime = dateTimePicker4->Value;
		r.validityFrom = dateTimePicker1->Value;
		r.validityTo = dateTimePicker2->Value;
		r.price = Convert::ToInt32(numericUpDown1->Value);

		StreamWriter^ sw = gcnew StreamWriter(filename, true);
		sw->WriteLine(
			r.direction + ";" +
			r.depTime + ";" +
			r.arrTime + ";" +
			r.validityFrom + ";" +
			r.validityTo + ";" +
			r.price);

		sw->Close();

		load();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ din;

		try {
			din = File::OpenText(filename);
		}
		catch (FileNotFoundException^ e) {
			StreamWriter^ sw = gcnew StreamWriter(filename);
			sw->Close();

			din = File::OpenText(filename);
		}

		listBox1->Items->Clear();

		String^ str;
		while (str = din->ReadLine()) {
			String^ routeDirection = "Odessa_Kyiv";

			array<String^>^ split = str->Split(delimiter);
			
			DateTime maxDate = DateTime::Parse(split[4]);
			maxDate.AddDays(45);

			if (split[0] == routeDirection && maxDate` > DateTime::Now)
				listBox1->Items->Add(
					split[0] + " " +
					split[1] + " " +
					split[2] + " " +
					split[3] + " " +
					split[4] + " " +
					split[5]
				);
		}

		din->Close();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ din;

		try {
			din = File::OpenText(filename);
		}
		catch (FileNotFoundException^ e) {
			StreamWriter^ sw = gcnew StreamWriter(filename);
			sw->Close();

			din = File::OpenText(filename);
		}

		listBox1->Items->Clear();

		String^ str;
		while (str = din->ReadLine()) {
			String^ routeDirection = "Odessa_Varna";

			array<String^>^ split = str->Split(delimiter);

			DateTime arriveTime = DateTime::Parse(split[2]);

			if (split[0] == routeDirection && arriveTime.Hour > 17 && arriveTime.Hour < 20)
				listBox2->Items->Add(
					split[0] + " " +
					split[1] + " " +
					split[2] + " " +
					split[3] + " " +
					split[4] + " " +
					split[5]
				);
		}

		din->Close();
	}
};
}
