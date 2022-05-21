#pragma once
#include <cmath>

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading::Tasks;
	using namespace System::Text::RegularExpressions; // Регулярные выражения
	using namespace System::Net; // Для подключения к интернету

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(71, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Калькулятор Валюты:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->pictureBox1->Location = System::Drawing::Point(-31, -15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(485, 75);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(17, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 95);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Узнать\r\nкурс:";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(357, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 35);
			this->label2->TabIndex = 3;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"RUB", L"USD", L"EUR", L"AUD", L"JPY", L"GBP",
					L"UAH"
			});
			this->comboBox1->Location = System::Drawing::Point(17, 150);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(225, 42);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"RUB", L"USD", L"EUR", L"AUD", L"JPY", L"GBP",
					L"UAH"
			});
			this->comboBox2->Location = System::Drawing::Point(17, 314);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(225, 42);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(357, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 35);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Вывод:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(11, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 35);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ИЗ:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(11, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 35);
			this->label5->TabIndex = 9;
			this->label5->Text = L"В:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(178)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(11, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 35);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Номинал:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->numericUpDown1->Location = System::Drawing::Point(17, 233);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(225, 36);
			this->numericUpDown1->TabIndex = 15;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(2, 542);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Аксёнов Дмитрий РИС-21-1б";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(345, 242);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(646, 117);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(9, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(835, 32);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(828, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 19;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(959, 537);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(23, 22);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->Visible = false;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(345, 381);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 56);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AccessibleDescription = L"Calc";
			this->AccessibleName = L"Lofolop3";
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(253)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1000, 600);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор Валюты:";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int lol, lol1;
		bool flag = false;
		bool flag1 = false;
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) // Объект кнопка, алгоритм работы калькулятора.
{
	//----------------------------------------------------------------------------------------------------//
	// Парсинг сайта для сбора данных о валютах
	//----------------------------------------------------------------------------------------------------//
	String^ pattern1; String^ pattern2; // Наши будущие результаты
	System::Net::WebClient^ wb = gcnew System::Net::WebClient(); //Создаем клиент
	String^ line = wb->DownloadString("https://cbr.ru/scripts/XML_daily.asp?"); // Скачиваем страницу сайта
	if ((comboBox1->Text != "RUB")||(comboBox2->Text != "RUB")) // Если наши валюты не являются рублем.
	{
		Regex^ rg1 = gcnew Regex("<NumCode>(.*?)</NumCode><CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>"); //Шаблон для поиска 1
		Regex^ rg2 = gcnew Regex("<NumCode>(.*?)</NumCode><CharCode>" + comboBox2->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>"); //Шаблон для поиска 2
		Match^ match1 = rg1->Match(line); //Поиск по шаблону 1
		Match^ match2 = rg2->Match(line); //Поиск по шаблону 2
		pattern1 = "" + match1->Groups[4]; //Результат поиска 1
		pattern2 = "" + match2->Groups[4]; //Результат поиска 2
	}
	//Исключения шаблона для рубля
	if(comboBox1->Text == "RUB")
	{
		Regex^ rg2 = gcnew Regex("<NumCode>(.*?)</NumCode><CharCode>" + comboBox2->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
		Match^ match2 = rg2->Match(line);
		pattern2 = "" + match2->Groups[4];
	}
	if (comboBox2->Text == "RUB")
	{
		Regex^ rg1 = gcnew Regex("<NumCode>(.*?)</NumCode><CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
		Match^ match1 = rg1->Match(line);
		pattern1 = "" + match1->Groups[4];
	}

	//----------------------------------------------------------------------------------------------------//
	// Доступные валюты:
	//----------------------------------------------------------------------------------------------------//

	double USD_RUB;
	double EUR_RUB;
	double AUD_RUB;
	double GBP_RUB;
	double JPY_RUB;
	double UAH_RUB;

	//----------------------------------------------------------------------------------------------------//
	// Добавим возможность указывать кол-во переводимой валюты
	//----------------------------------------------------------------------------------------------------//

	double Namenal = System::Convert::ToDouble(numericUpDown1->Value);

	//----------------------------------------------------------------------------------------------------//
	// Условия для конвертации и присваивания
	//----------------------------------------------------------------------------------------------------//

	if (comboBox2->Text == "RUB" && comboBox1->Text != "RUB")
	{
		USD_RUB = System::Convert::ToDouble(pattern1);
		EUR_RUB = System::Convert::ToDouble(pattern1);
		AUD_RUB = System::Convert::ToDouble(pattern1);
		GBP_RUB = System::Convert::ToDouble(pattern1);
		JPY_RUB = System::Convert::ToDouble(pattern1);
		UAH_RUB = System::Convert::ToDouble(pattern1);
	}

	//----------------------------------------------------------------------------------------------------//

	if (comboBox1->Text == "RUB" && comboBox2->Text != "RUB")
	{
		USD_RUB = System::Convert::ToDouble(pattern2);
		EUR_RUB = System::Convert::ToDouble(pattern2);
		AUD_RUB = System::Convert::ToDouble(pattern2);
		GBP_RUB = System::Convert::ToDouble(pattern2);
		JPY_RUB = System::Convert::ToDouble(pattern2);
		UAH_RUB = System::Convert::ToDouble(pattern2);
	}
	else if (comboBox1->Text == "USD")
	{
		USD_RUB = System::Convert::ToDouble(pattern1);
	}
	else if (comboBox1->Text == "EUR")
	{
		EUR_RUB = System::Convert::ToDouble(pattern1);
	}
	else if (comboBox1->Text == "AUD")
	{
		AUD_RUB = System::Convert::ToDouble(pattern1);
	}
	else if (comboBox1->Text == "GBP")
	{
		GBP_RUB = System::Convert::ToDouble(pattern1);
	}
	else if (comboBox1->Text == "JPY")
	{
		JPY_RUB = System::Convert::ToDouble(pattern1);
	}
	else if (comboBox1->Text == "UAH")
	{
		UAH_RUB = System::Convert::ToDouble(pattern1);
	}
	
	//----------------------------------------------------------------------------------------------------//
	// Конвертирование валют и их подсчёт
	//----------------------------------------------------------------------------------------------------//

	if (comboBox1->Text == "RUB") // RUB - Подсчет для Рублей
	{
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= EUR_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= AUD_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= GBP_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= JPY_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal /= UAH_RUB;
		}
		if (comboBox2->Text == "RUB")
		{
			Namenal /= 1;
		}
	}

	else if (comboBox1->Text == "USD") // USD - Подсчет для Американского Доллара
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= USD_RUB / EUR_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= USD_RUB / AUD_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= USD_RUB / GBP_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= USD_RUB / JPY_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= USD_RUB / UAH_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			Namenal /= 1;
		}
	}
	else if (comboBox1->Text == "EUR") // EUR - Подсчет для Евро
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= EUR_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= EUR_RUB / USD_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= EUR_RUB / AUD_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= EUR_RUB / GBP_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= EUR_RUB / JPY_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= EUR_RUB / UAH_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			Namenal /= 1;
		}
	}

	else if (comboBox1->Text == "AUD") // AUD - Подсчет для Австралийский доллар
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= AUD_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= AUD_RUB / USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= AUD_RUB / EUR_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= AUD_RUB / GBP_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= AUD_RUB / JPY_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= AUD_RUB / UAH_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			Namenal /= 1;
		}
	}

	else if (comboBox1->Text == "JPY") // JPY - Подсчет для Японской Йены
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= JPY_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= JPY_RUB / USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= JPY_RUB / EUR_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= JPY_RUB / GBP_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= JPY_RUB / AUD_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= JPY_RUB / UAH_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			Namenal /= 1;
		}
	}

	else if (comboBox1->Text == "GBP") // GBP - Подсчет для Фунт стерлингов
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= GBP_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= GBP_RUB / USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= GBP_RUB / EUR_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= GBP_RUB / JPY_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= GBP_RUB / AUD_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			UAH_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= GBP_RUB / UAH_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			Namenal /= 1;
		}
	}

	else if (comboBox1->Text == "UAH") // UAH - Подсчет для Гривны
	{
		if (comboBox2->Text == "RUB")
		{
			Namenal *= UAH_RUB;
		}
		if (comboBox2->Text == "USD")
		{
			USD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= UAH_RUB / USD_RUB;
		}
		if (comboBox2->Text == "EUR")
		{
			EUR_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= UAH_RUB / EUR_RUB;
		}
		if (comboBox2->Text == "JPY")
		{
			JPY_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= UAH_RUB / JPY_RUB;
		}
		if (comboBox2->Text == "AUD")
		{
			AUD_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= UAH_RUB / AUD_RUB;
		}
		if (comboBox2->Text == "GBP")
		{
			GBP_RUB = System::Convert::ToDouble(pattern2);
			Namenal *= UAH_RUB / GBP_RUB;
		}
		if (comboBox2->Text == "UAH")
		{
			Namenal /= 1;
		}
	}
	//----------------------------------------------------------------------------------------------------//
	//------------------------------------Вывод-на-label2-------------------------------------------------//
	//----------------------------------------------------------------------------------------------------//
	if (((comboBox1->Text != "GBP") && (comboBox1->Text != "JPY") && (comboBox1->Text != "UAH") && (comboBox1->Text != "EUR") && (comboBox1->Text != "USD") && (comboBox1->Text != "AUD") && (comboBox1->Text != "RUB")) || ((comboBox2->Text != "JPY") && (comboBox2->Text != "GBP") && (comboBox2->Text != "UAH") && (comboBox2->Text != "EUR") && (comboBox2->Text != "USD") && (comboBox2->Text != "AUD") && (comboBox2->Text != "RUB"))) // Исключение, если поля не заполнены
	{
		label2->Text = "Error:\nЗаполните необходимые поля.\n ";
	}
	else
	{
		label2->Text = "Курс на " + dateTimePicker1 -> Value.ToLongDateString() +"\nсостовляет:\n" + numericUpDown1->Value + " " + comboBox1->Text + " = " + round(Namenal * 100) / 100 + " " + comboBox2->Text; //Вывод результата
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	//----------------------------------------------------------------------------------------------------//
	//-------------------------------------Очистка-формы--------------------------------------------------//
	//----------------------------------------------------------------------------------------------------//
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	label8->Text="";
	label1->Text = "Калькулятор Валюты:";
	label2->Text = "";
	label7->Text = "Аксёнов Дмитрий РИС-21-1б";

}





























//----------------------------------------------------------------------------------------------------//
//-----------------------------------------Пасхальный-------------------------------------------------//
//----------------------------------------------------------------------------------------------------//



private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "Политех - это круто!";
	if (flag == true)
	{
	   lol1 += 1;
	   label8->Text = "| " + lol1 + " |";
    }

	if (lol1 >= 10 && flag == true)
	{
		lol1 = 0;
		flag1 = true;
		label8->Text = "OK";
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = "Аксёнов Дмитрий РИС-21-1б::-::GitHub -> https://github.com/AxyonovDmitry";
	if (flag == true && flag1 == true)
	{
		flag = false;
		flag1 = false;
		label2->Text = "Поздравляю!\nТы нашел пасхалку\nМолодец, и что теперь?";
	}
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	lol += 1;
	if (lol >= 10)
	{
		lol = 0;
		label8->Text = "Нажимай на меня";
		flag = true;
	}
}
};
}
