#pragma once

namespace ClaraProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Button^ zeroButton;
	private: System::Windows::Forms::Button^ oneButton;
	private: System::Windows::Forms::Button^ twoButton;
	private: System::Windows::Forms::Button^ threeButton;
	private: System::Windows::Forms::Button^ sixButton;
	private: System::Windows::Forms::Button^ fiveButton;
	private: System::Windows::Forms::Button^ fourButton;
	private: System::Windows::Forms::Button^ sevenButton;
	private: System::Windows::Forms::Button^ eightButton;
	private: System::Windows::Forms::Button^ nineButton;
	private: System::Windows::Forms::Button^ differenceButton;
	private: System::Windows::Forms::Button^ divisionButton;
	private: System::Windows::Forms::Button^ combinationButton;
	private: System::Windows::Forms::Button^ compasitionButton;
	private: System::Windows::Forms::Button^ answerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Button^ pointButton;
	// variables
	private:
		Int32 cmp = 0;
		Int32 div = 0;
		Int32 cmb = 0;
		Int32 dif = 0;

		Int32 locked = 0;

		Double a = 0;
		Double b = 0;

	// Неизменная для всех случаев(кроме равно) операция
	private: System::Void ArithmeticAction() {
		if (cmp)
		{
			b = Double::Parse(this->textBox1->Text);
			a *= b;
			this->textBox1->Text = "";
			this->textBox2->Text = Convert::ToString(a);
			cmp = 0;
			b = 0;
		}
		else if (div)
		{
			b = Double::Parse(this->textBox1->Text);
			if (b != 0)
			{
				a /= b;
				this->textBox1->Text = "";
				this->textBox2->Text = Convert::ToString(a);
				div = 0;
				b = 0;
			}
			else
			{
				div = 0;
				locked = 1;
				this->textBox1->Text = "the result is uncertain";
				this->textBox2->Text += Convert::ToString(b);
			}
		}
		else if (cmb)
		{
			b = Double::Parse(this->textBox1->Text);
			a += b;
			this->textBox1->Text = "";
			this->textBox2->Text = Convert::ToString(a);
			cmb = 0;
			b = 0;
		}
		else if (dif)
		{
			b = Double::Parse(this->textBox1->Text);
			a -= b;
			this->textBox1->Text = "";
			this->textBox2->Text = Convert::ToString(a);
			dif = 0;
			b = 0;
		}
		else
		{
			a = Double::Parse(this->textBox1->Text);
			this->textBox2->Text = Convert::ToString(a);
			this->textBox1->Text = "";
		}
	}

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->differenceButton = (gcnew System::Windows::Forms::Button());
			this->divisionButton = (gcnew System::Windows::Forms::Button());
			this->combinationButton = (gcnew System::Windows::Forms::Button());
			this->compasitionButton = (gcnew System::Windows::Forms::Button());
			this->answerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->pointButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(261, 12);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(80, 46);
			this->exitButton->TabIndex = 0;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->Location = System::Drawing::Point(12, 12);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(61, 55);
			this->zeroButton->TabIndex = 1;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = true;
			this->zeroButton->Click += gcnew System::EventHandler(this, &MyForm::zeroButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->Location = System::Drawing::Point(12, 73);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(61, 55);
			this->oneButton->TabIndex = 2;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = true;
			this->oneButton->Click += gcnew System::EventHandler(this, &MyForm::oneButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->Location = System::Drawing::Point(79, 73);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(61, 55);
			this->twoButton->TabIndex = 3;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = true;
			this->twoButton->Click += gcnew System::EventHandler(this, &MyForm::twoButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->Location = System::Drawing::Point(146, 73);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(61, 55);
			this->threeButton->TabIndex = 4;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = true;
			this->threeButton->Click += gcnew System::EventHandler(this, &MyForm::threeButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->Location = System::Drawing::Point(146, 134);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(61, 55);
			this->sixButton->TabIndex = 5;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = true;
			this->sixButton->Click += gcnew System::EventHandler(this, &MyForm::sixButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->Location = System::Drawing::Point(79, 134);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(61, 55);
			this->fiveButton->TabIndex = 6;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = true;
			this->fiveButton->Click += gcnew System::EventHandler(this, &MyForm::fiveButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->Location = System::Drawing::Point(12, 134);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(61, 55);
			this->fourButton->TabIndex = 7;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = true;
			this->fourButton->Click += gcnew System::EventHandler(this, &MyForm::fourButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->Location = System::Drawing::Point(14, 195);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(61, 55);
			this->sevenButton->TabIndex = 8;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = true;
			this->sevenButton->Click += gcnew System::EventHandler(this, &MyForm::sevenButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->Location = System::Drawing::Point(81, 195);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(61, 55);
			this->eightButton->TabIndex = 9;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = true;
			this->eightButton->Click += gcnew System::EventHandler(this, &MyForm::eightButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->Location = System::Drawing::Point(146, 195);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(61, 55);
			this->nineButton->TabIndex = 10;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = true;
			this->nineButton->Click += gcnew System::EventHandler(this, &MyForm::nineButton_Click);
			// 
			// differenceButton
			// 
			this->differenceButton->Location = System::Drawing::Point(280, 73);
			this->differenceButton->Name = L"differenceButton";
			this->differenceButton->Size = System::Drawing::Size(61, 55);
			this->differenceButton->TabIndex = 11;
			this->differenceButton->Text = L"--";
			this->differenceButton->UseVisualStyleBackColor = true;
			this->differenceButton->Click += gcnew System::EventHandler(this, &MyForm::differenceButton_Click);
			// 
			// divisionButton
			// 
			this->divisionButton->Location = System::Drawing::Point(280, 134);
			this->divisionButton->Name = L"divisionButton";
			this->divisionButton->Size = System::Drawing::Size(61, 55);
			this->divisionButton->TabIndex = 12;
			this->divisionButton->Text = L"%";
			this->divisionButton->UseVisualStyleBackColor = true;
			this->divisionButton->Click += gcnew System::EventHandler(this, &MyForm::divisionButton_Click);
			// 
			// combinationButton
			// 
			this->combinationButton->Location = System::Drawing::Point(213, 73);
			this->combinationButton->Name = L"combinationButton";
			this->combinationButton->Size = System::Drawing::Size(61, 55);
			this->combinationButton->TabIndex = 13;
			this->combinationButton->Text = L"+";
			this->combinationButton->UseVisualStyleBackColor = true;
			this->combinationButton->Click += gcnew System::EventHandler(this, &MyForm::combinationButton_Click);
			// 
			// compasitionButton
			// 
			this->compasitionButton->Location = System::Drawing::Point(213, 134);
			this->compasitionButton->Name = L"compasitionButton";
			this->compasitionButton->Size = System::Drawing::Size(61, 55);
			this->compasitionButton->TabIndex = 14;
			this->compasitionButton->Text = L">|<";
			this->compasitionButton->UseVisualStyleBackColor = true;
			this->compasitionButton->Click += gcnew System::EventHandler(this, &MyForm::compasitionButton_Click);
			// 
			// answerButton
			// 
			this->answerButton->Location = System::Drawing::Point(213, 195);
			this->answerButton->Name = L"answerButton";
			this->answerButton->Size = System::Drawing::Size(61, 55);
			this->answerButton->TabIndex = 15;
			this->answerButton->Text = L"=";
			this->answerButton->UseVisualStyleBackColor = true;
			this->answerButton->Click += gcnew System::EventHandler(this, &MyForm::answerButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(14, 257);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(260, 190);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 20);
			this->textBox1->TabIndex = 17;
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(280, 196);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(61, 54);
			this->clearButton->TabIndex = 18;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// pointButton
			// 
			this->pointButton->Location = System::Drawing::Point(280, 257);
			this->pointButton->Name = L"pointButton";
			this->pointButton->Size = System::Drawing::Size(61, 54);
			this->pointButton->TabIndex = 19;
			this->pointButton->Text = L",";
			this->pointButton->UseVisualStyleBackColor = true;
			this->pointButton->Click += gcnew System::EventHandler(this, &MyForm::pointButton_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(81, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"История:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 459);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->pointButton);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->answerButton);
			this->Controls->Add(this->compasitionButton);
			this->Controls->Add(this->combinationButton);
			this->Controls->Add(this->divisionButton);
			this->Controls->Add(this->differenceButton);
			this->Controls->Add(this->nineButton);
			this->Controls->Add(this->eightButton);
			this->Controls->Add(this->sevenButton);
			this->Controls->Add(this->fourButton);
			this->Controls->Add(this->fiveButton);
			this->Controls->Add(this->sixButton);
			this->Controls->Add(this->threeButton);
			this->Controls->Add(this->twoButton);
			this->Controls->Add(this->oneButton);
			this->Controls->Add(this->zeroButton);
			this->Controls->Add(this->exitButton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void zeroButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"0";
	}
	private: System::Void oneButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"1";
	}
	private: System::Void twoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"2";
	}
	private: System::Void threeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"3";
	}
	private: System::Void fourButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"4";
	}
	private: System::Void fiveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"5";
	}
	private: System::Void sixButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"6";
	}
	private: System::Void sevenButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"7";
	}
	private: System::Void eightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"8";
	}
	private: System::Void nineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L"9";
	}
	private: System::Void pointButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked) this->textBox1->Text += L",";
	}

	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		cmp = 0;
		div = 0;
		cmb = 0;
		dif = 0;

		locked = 0;

		a = 0;
		b = 0;

		this->textBox1->Text = "";
	}

	private: System::Void combinationButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked)
		{
			ArithmeticAction();
			cmb = 1;
			if (!locked) this->textBox2->Text += "+";
		}
	}
	private: System::Void differenceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked)
		{
			ArithmeticAction();
			dif = 1;
			if (!locked) this->textBox2->Text += "-";
		}
	}
	private: System::Void answerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//равно
		if (cmp)
		{
			b = Double::Parse(this->textBox1->Text);
			a *= b;
			this->textBox2->Text += Convert::ToString(b);
			this->textBox1->Text = Convert::ToString(a);
			cmp = 0;
			b = 0;
		}
		else if (div)
		{
			if (this->textBox1->Text != "")
			{
				b = Double::Parse(this->textBox1->Text);
			}
			else
			{
				b = 0;
			}
			this->textBox2->Text += Convert::ToString(b);
			if (b != 0)
			{
				a /= b;
				this->textBox1->Text = Convert::ToString(a);
				div = 0;
				b = 0;
			}
			else
			{
				div = 0;
				locked = 1;
				this->textBox1->Text = "the result is uncertain";
			}
		}
		else if (cmb)
		{
			b = Double::Parse(this->textBox1->Text);
			a += b;
			this->textBox2->Text += Convert::ToString(b);
			this->textBox1->Text = Convert::ToString(a);
			cmb = 0;
			b = 0;
		}
		else if (dif)
		{
			b = Double::Parse(this->textBox1->Text);
			a -= b;
			this->textBox2->Text += Convert::ToString(b);
			this->textBox1->Text = Convert::ToString(a);
			dif = 0;
			b = 0;
		}
		else
		{
			a = Double::Parse(this->textBox1->Text);
			this->textBox1->Text = Convert::ToString(a);
			this->textBox2->Text = "";
		}
	}
	private: System::Void compasitionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked)
		{
			ArithmeticAction();
			cmp = 1;
			if (!locked) this->textBox2->Text += "*";
		}
	}
	private: System::Void divisionButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!locked)
		{
			ArithmeticAction();
			div = 1;
			if (!locked) this->textBox2->Text += "%";
		}
	}
};
}
