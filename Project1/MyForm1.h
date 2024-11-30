#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ t_textbox_div1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::Label^ t_label;
	private: System::Windows::Forms::TextBox^ a_textbox1;
	private: System::Windows::Forms::TextBox^ t_textbox_mult1;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ start_button;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->t_textbox_div1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->t_label = (gcnew System::Windows::Forms::Label());
			this->a_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->t_textbox_mult1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->t_textbox_div1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->a_label);
			this->groupBox1->Controls->Add(this->t_label);
			this->groupBox1->Controls->Add(this->a_textbox1);
			this->groupBox1->Controls->Add(this->t_textbox_mult1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(2, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(413, 202);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"¬вод параметров";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(209, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 15);
			this->label10->TabIndex = 24;
			this->label10->Text = L"t=2pi*k, где k-целое";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(7, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(314, 15);
			this->label9->TabIndex = 23;
			this->label9->Text = L"ƒл€ более корректного отображени€ вводите число";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(146, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(197, 15);
			this->label8->TabIndex = 19;
			this->label8->Text = L"¬ведите значение большее нул€";
			// 
			// t_textbox_div1
			// 
			this->t_textbox_div1->Location = System::Drawing::Point(173, 125);
			this->t_textbox_div1->Name = L"t_textbox_div1";
			this->t_textbox_div1->Size = System::Drawing::Size(26, 22);
			this->t_textbox_div1->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(190, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"pi";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(169, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"*";
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a_label->Location = System::Drawing::Point(5, 29);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(108, 20);
			this->a_label->TabIndex = 2;
			this->a_label->Text = L"ѕараметр a";
			// 
			// t_label
			// 
			this->t_label->AutoSize = true;
			this->t_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->t_label->Location = System::Drawing::Point(6, 109);
			this->t_label->Name = L"t_label";
			this->t_label->Size = System::Drawing::Size(104, 20);
			this->t_label->TabIndex = 3;
			this->t_label->Text = L"ѕараметр t";
			// 
			// a_textbox1
			// 
			this->a_textbox1->Location = System::Drawing::Point(149, 29);
			this->a_textbox1->Name = L"a_textbox1";
			this->a_textbox1->Size = System::Drawing::Size(120, 22);
			this->a_textbox1->TabIndex = 4;
			// 
			// t_textbox_mult1
			// 
			this->t_textbox_mult1->Location = System::Drawing::Point(148, 94);
			this->t_textbox_mult1->Name = L"t_textbox_mult1";
			this->t_textbox_mult1->Size = System::Drawing::Size(24, 22);
			this->t_textbox_mult1->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(144, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"_______";
			// 
			// start_button
			// 
			this->start_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->start_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start_button.BackgroundImage")));
			this->start_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->start_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->start_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_button->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->start_button->Location = System::Drawing::Point(119, 215);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(189, 57);
			this->start_button->TabIndex = 13;
			this->start_button->UseVisualStyleBackColor = false;
			this->start_button->Click += gcnew System::EventHandler(this, &MyForm1::start_button_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(427, 278);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ѕараметры";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String^ a_gl;
	public: String^ t_gl_verh;
	public: String^ t_gl_niz;
	private: System::Void start_button_Click(System::Object^ sender, System::EventArgs^ e) {
		a_gl = a_textbox1->Text;
		t_gl_verh = t_textbox_mult1->Text;
		t_gl_niz = t_textbox_div1->Text;
		this->Hide();
	
	}
};
}
