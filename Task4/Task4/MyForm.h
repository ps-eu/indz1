#pragma once

#define _USE_MATH_DEFINES
#include <cmath>

namespace Task4 {

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
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::TextBox^ inputX;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ task2Result;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ inputPointX;
	private: System::Windows::Forms::TextBox^ inputPointY;
	private: System::Windows::Forms::Label^ task3Result;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ task4Result;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ ellipseA;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ ellipseB;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ shapeHeight;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->inputX = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->task2Result = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->inputPointX = (gcnew System::Windows::Forms::TextBox());
			this->inputPointY = (gcnew System::Windows::Forms::TextBox());
			this->task3Result = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->task4Result = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ellipseA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ellipseB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->shapeHeight = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellipseA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellipseB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shapeHeight))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label2->Location = System::Drawing::Point(16, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x:";
			// 
			// inputX
			// 
			this->inputX->Location = System::Drawing::Point(37, 49);
			this->inputX->Name = L"inputX";
			this->inputX->Size = System::Drawing::Size(100, 20);
			this->inputX->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label1->Location = System::Drawing::Point(16, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Result:";
			// 
			// task2Result
			// 
			this->task2Result->AutoSize = true;
			this->task2Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->task2Result->Location = System::Drawing::Point(74, 81);
			this->task2Result->Name = L"task2Result";
			this->task2Result->Size = System::Drawing::Size(0, 17);
			this->task2Result->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(15, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Task 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(178, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Task 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label5->Location = System::Drawing::Point(182, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"x:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label6->Location = System::Drawing::Point(182, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"y:";
			// 
			// inputPointX
			// 
			this->inputPointX->Location = System::Drawing::Point(206, 46);
			this->inputPointX->Name = L"inputPointX";
			this->inputPointX->Size = System::Drawing::Size(100, 20);
			this->inputPointX->TabIndex = 10;
			this->inputPointX->Text = L"0";
			// 
			// inputPointY
			// 
			this->inputPointY->Location = System::Drawing::Point(207, 81);
			this->inputPointY->Name = L"inputPointY";
			this->inputPointY->Size = System::Drawing::Size(100, 20);
			this->inputPointY->TabIndex = 11;
			this->inputPointY->Text = L"0";
			// 
			// task3Result
			// 
			this->task3Result->AutoSize = true;
			this->task3Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->task3Result->Location = System::Drawing::Point(240, 116);
			this->task3Result->Name = L"task3Result";
			this->task3Result->Size = System::Drawing::Size(0, 17);
			this->task3Result->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label8->Location = System::Drawing::Point(182, 116);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Result:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(185, 459);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Calculate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label7->Location = System::Drawing::Point(481, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Task 4";
			// 
			// task4Result
			// 
			this->task4Result->AutoSize = true;
			this->task4Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->task4Result->Location = System::Drawing::Point(540, 46);
			this->task4Result->Name = L"task4Result";
			this->task4Result->Size = System::Drawing::Size(0, 17);
			this->task4Result->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label10->Location = System::Drawing::Point(482, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Result:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(485, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Use float";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(485, 110);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Use double";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(185, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(201, 201);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(339, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Scale 1*";
			// 
			// ellipseA
			// 
			this->ellipseA->Location = System::Drawing::Point(256, 361);
			this->ellipseA->Name = L"ellipseA";
			this->ellipseA->Size = System::Drawing::Size(50, 20);
			this->ellipseA->TabIndex = 22;
			this->ellipseA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->ellipseA->ValueChanged += gcnew System::EventHandler(this, &MyForm::ellipseA_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(182, 363);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Ellipse a:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(182, 389);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Ellipse b:";
			// 
			// ellipseB
			// 
			this->ellipseB->Location = System::Drawing::Point(256, 387);
			this->ellipseB->Name = L"ellipseB";
			this->ellipseB->Size = System::Drawing::Size(50, 20);
			this->ellipseB->TabIndex = 24;
			this->ellipseB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->ellipseB->ValueChanged += gcnew System::EventHandler(this, &MyForm::ellipseB_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(182, 415);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Shape height:";
			// 
			// shapeHeight
			// 
			this->shapeHeight->Location = System::Drawing::Point(256, 413);
			this->shapeHeight->Name = L"shapeHeight";
			this->shapeHeight->Size = System::Drawing::Size(50, 20);
			this->shapeHeight->TabIndex = 26;
			this->shapeHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->shapeHeight->ValueChanged += gcnew System::EventHandler(this, &MyForm::shapeHeight_ValueChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 494);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->shapeHeight);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->ellipseB);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->ellipseA);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->task4Result);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->task3Result);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->inputPointY);
			this->Controls->Add(this->inputPointX);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->task2Result);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->inputX);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellipseA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellipseB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->shapeHeight))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	public: int unit = 10;
	public: float rHorizontal;
	public: float rVertical;
	public: float halfHeight;

	private: System::Void f(double angle, double* x, double* y) {
		double r = (rHorizontal * rVertical) / sqrt(pow(rHorizontal, 2) * pow(sin(angle), 2) + pow(rVertical, 2) * pow(cos(angle), 2));

		*y = sin(angle) * r;
		*x = cos(angle) * r;

		if (*y > halfHeight) *y = halfHeight;
		else if (*y < -halfHeight) *y = -halfHeight;
	}

	private: System::Void fillShedule(PointF *point) {
		pictureBox1->Invalidate();

		Pen^ sPen = Pens::Silver;
		Pen^ bPen = gcnew Pen(Color::FromArgb(32, 168, 227));
		Pen^ rPen = gcnew Pen(Color::FromArgb(207, 27, 48));
		Pen^ gPen = gcnew Pen(Color::FromArgb(25, 207, 97));
		Pen^ blPen = gcnew Pen(Color::FromArgb(50, 89, 89, 89));

		int pW = pictureBox1->Width;
		int pH = pictureBox1->Height;

		Bitmap^ img = gcnew Bitmap(pW, pH);
		Graphics^ g = Graphics::FromImage(img);

		for (int i = 0; i < pW; i += unit) g->DrawLine(sPen, i, 0, i, pH);
		for (int i = 0; i < pH; i += unit) g->DrawLine(sPen, 0, i, pW, i);
		for (int i = 0; i < pW; i += unit * 5) g->DrawLine(bPen, i, 0, i, pH);
		for (int i = 0; i < pH; i += unit * 5) g->DrawLine(bPen, 0, i, pW, i);

		int mX = int(pW / 2 - pW / 2 % unit);
		int mY = int(pH / 2 - pH / 2 % unit);
		g->DrawLine(rPen, mX, 0, mX, pH);
		g->DrawLine(rPen, 0, mY, pW, mY);

		g->ScaleTransform(1, -1);
		g->TranslateTransform((float)mX, -(float)mY);

		double angle = 0;
		double maxAngle = 180;
		double delta = 1;
		double x;
		double y;
		System::Collections::Generic::List<PointF>^ Points = gcnew System::Collections::Generic::List<PointF>();
		while (angle <= maxAngle) {
			f(angle, &x, &y);
			Points->Add(PointF(x * unit, y * unit));
			angle += delta;
		}

		bool hasPositiveY = true;
		for (int i = 0; i < Points->Count - 1; i++) {
			int indexToReplace = i;

			if (hasPositiveY) {
				hasPositiveY = false;
				for (int j = i; j < Points->Count; j++) {
					if (Points[j].Y >= 0) {
						hasPositiveY = true;
						break;
					}
				}
			}

			int g = 1;
			while (Points[i].Y < 0 && hasPositiveY && Points->Count - g > i) {
				PointF c = Points[i];
				Points[i] = Points[Points->Count - g];
				Points[Points->Count - g] = c;

				g++;
			}

			for (int j = i + 1; j < Points->Count; j++) {
				if (hasPositiveY) {
					if (Points[j].X <= Points[indexToReplace].X && Points[j].Y >= 0) indexToReplace = j;
				}
				else {
					if (Points[j].X > Points[indexToReplace].X) indexToReplace = j;
				}
			}

			PointF c = Points[i];
			Points[i] = Points[indexToReplace];
			Points[indexToReplace] = c;
		}

		SolidBrush^ sBrush = gcnew SolidBrush(gPen->Color);

		g->DrawEllipse(blPen, -rHorizontal * unit, -rVertical * unit, rHorizontal * 2 * unit, rVertical * 2 * unit);
		g->DrawPolygon(gPen, Points->ToArray());
		g->FillClosedCurve(sBrush, Points->ToArray());

		if (point != nullptr) {
			point->X *= unit;
			point->Y *= unit;

			int pScale = 2;

			Points->Clear();
			Points->Add(PointF(point->X - pScale, point->Y));
			Points->Add(PointF(point->X, point->Y + pScale));
			Points->Add(PointF(point->X + pScale, point->Y));
			Points->Add(PointF(point->X, point->Y - pScale));

			sBrush = gcnew SolidBrush(Color::Black);
			g->FillClosedCurve(sBrush, Points->ToArray());
		}

		delete g;
		this->pictureBox1->Image = img;
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		rHorizontal = Convert::ToDouble(ellipseA->Value);
		rVertical = Convert::ToDouble(ellipseB->Value);
		halfHeight = Convert::ToDouble(shapeHeight->Value) / 2;


		fillShedule(nullptr);
	}

	private: System::Void ellipseA_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		rHorizontal = Convert::ToDouble(ellipseA->Value);
		fillShedule(nullptr);
	}

	private: System::Void ellipseB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		rVertical = Convert::ToDouble(ellipseB->Value);
		fillShedule(nullptr);
	}

	private: System::Void shapeHeight_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		halfHeight = Convert::ToDouble(shapeHeight->Value) / 2;
		fillShedule(nullptr);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x;
		try { x = Convert::ToDouble(inputX->Text); }
		catch (FormatException^ e) {
			task2Result->Text = "Error: x is not a number";
			return;
		}
		
		double result = asin(x + pow(x, 2));
		task2Result->Text = result.ToString();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double x;
		double y;

		try { x = Convert::ToDouble(inputPointX->Text); }
		catch (FormatException^ e) {
			task3Result->Text = "Error: x is not a number";
			return;
		}

		try { y = Convert::ToDouble(inputPointY->Text); }
		catch (FormatException^ e) {
			task3Result->Text = "Error: y is not a number";
			return;
		}

		double angle = (acos(x / sqrt(pow(x, 2) + pow(y, 2))));

		double r = (rHorizontal * rVertical) / sqrt(pow(rHorizontal, 2) * pow(sin(angle), 2) + pow(rVertical, 2) * pow(cos(angle), 2));

		double maxY = abs(sin(angle) * r);
		double maxX = abs(cos(angle) * r);

		if (maxY > halfHeight) maxY = halfHeight;
		else if (maxY == 0) maxY = Math::Min(halfHeight, rVertical);

		bool result = (x >= -maxX && x <= maxX && y >= -maxY && y <= maxY);

		task3Result->Text = result.ToString();

		fillShedule(new PointF(x, y));
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		float a = 10;
		float b = .01f;

		float result = ((pow(a - b, 4) - (pow(a, 4) + 6 * pow(a, 2) * pow(b, 2) - 4 * pow(a, 3) * b)) / (pow(b, 4) - 4 * pow(a, 3) * b));
		task4Result->Text = result.ToString();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = 10;
		double b = .01;

		double result = ((pow(a - b, 4) - (pow(a, 4) + 6 * pow(a, 2) * pow(b, 2) - 4 * pow(a, 3) * b)) / (pow(b, 4) - 4 * pow(a, 3) * b));
		task4Result->Text = result.ToString();
	}
};
}
