#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название приложения";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Год создания";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Разработчик";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(188, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Построение кардиоиды";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(188, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"2024";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(188, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(324, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Тараканов Вячеслав Сергеевич - студент ВятГУ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Сайт разработчика";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(188, 174);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Ссылка на сайт";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm2::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 91);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Версия";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(188, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 16);
			this->label10->TabIndex = 9;
			this->label10->Text = L"1.0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(188, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(132, 16);
			this->label11->TabIndex = 10;
			this->label11->Text = L"группы ИНБб - 1301";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 217);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Помощь по работе";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 233);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 16);
			this->label13->TabIndex = 12;
			this->label13->Text = L"с программой";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(188, 217);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(380, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Для запуска построния графика и его анимации следует";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(188, 233);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(372, 16);
			this->label15->TabIndex = 14;
			this->label15->Text = L"ввести параметры функции. Для этого, в меню, которое";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(188, 249);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(336, 16);
			this->label16->TabIndex = 15;
			this->label16->Text = L"находится вверху главной формы выберите пункт";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(188, 265);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(412, 16);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Меню->Построить график. Во время построения графика, его ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(188, 281);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(399, 16);
			this->label18->TabIndex = 17;
			this->label18->Text = L"анимацию можно приостановить, нажав на паузу в главной";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(188, 297);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(372, 16);
			this->label19->TabIndex = 18;
			this->label19->Text = L"форме, и возообновить, повторно нажав на эту кнопку.";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(188, 313);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(344, 16);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Чтобы выйти из программы выберите Меню->Выход";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(188, 329);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(393, 16);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Для получения информации о программе, в верхней части ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(188, 345);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(206, 16);
			this->label22->TabIndex = 21;
			this->label22->Text = L"окна выберите \"О программе\".";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 425);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"О программе";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("index.html");
	}
};
}
