#pragma once
#include "MyForm1.h"
#include "MyForm2.h"

namespace Project1 {

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

	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:

















	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ pause_button;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;







	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pause_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->построитьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 60;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::DimGray;
			chartArea2->AlignmentOrientation = static_cast<System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations>((System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Vertical | System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Location = System::Drawing::Point(6, 21);
			this->chart1->Name = L"chart1";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->IsVisibleInLegend = false;
			series4->Name = L"Series1";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Black;
			series5->Name = L"Series2";
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::DeepSkyBlue;
			series6->LabelForeColor = System::Drawing::Color::Bisque;
			series6->Name = L"Series3";
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(660, 660);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title2->Name = L"Ваш график функции";
			title2->Text = L"Ваш график функции";
			this->chart1->Titles->Add(title2);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Location = System::Drawing::Point(8, 28);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(697, 706);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"График";
			// 
			// pause_button
			// 
			this->pause_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pause_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pause_button.BackgroundImage")));
			this->pause_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pause_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pause_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pause_button->Location = System::Drawing::Point(898, 494);
			this->pause_button->Name = L"pause_button";
			this->pause_button->Size = System::Drawing::Size(341, 188);
			this->pause_button->TabIndex = 13;
			this->pause_button->UseVisualStyleBackColor = false;
			this->pause_button->Visible = false;
			this->pause_button->Click += gcnew System::EventHandler(this, &MyForm::pause_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(709, 316);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Построение графика функции:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(709, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"x=2a cost - a cos2t";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(709, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"y=2a sint - a sin2t";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(711, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(359, 81);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Кардиоида";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1435, 28);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->построитьГрафикToolStripMenuItem,
					this->выйтиToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// построитьГрафикToolStripMenuItem
			// 
			this->построитьГрафикToolStripMenuItem->Name = L"построитьГрафикToolStripMenuItem";
			this->построитьГрафикToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->построитьГрафикToolStripMenuItem->Text = L"Построить график";
			this->построитьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::построитьГрафикToolStripMenuItem_Click);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выйтиToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(711, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(597, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Кардио́ида (греч. καρδία — сердце, греч. εἶδος — вид) — плоская ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(711, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(627, 20);
			this->label6->TabIndex = 21;
			this->label6->Text = L"линия, которая описывается фиксированной точкой окружности, ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(710, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(591, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"катящейся по неподвижной окружности с таким же радиусом.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(710, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(583, 20);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Получила своё название из-за схожести своих очертаний со ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(711, 252);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(373, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"стилизованным изображением сердца.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(973, 689);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(187, 20);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Остановка анимации";
			this->label10->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1435, 741);
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
			this->Controls->Add(this->pause_button);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CardioidWriter";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: double a, b, h,pi,t;
	private: double x,y,r,x1,y1,x2,y2,x3,y3;
	private: bool check;
	public: int Project1::MyForm::BuildGraph(String^ a_textboxP, String^ t_textbox_multP, String^ t_textbox_divP) {
		pi = 3.14;
		h = pi/36;
		check = true;
		if (a_textboxP == "" || t_textbox_multP == "" || t_textbox_divP == "") {
			MessageBox::Show("Вы не ввели какое то из данных параметра! Применены значения по умолчанию (a=2, t=0)","Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			DefParam();
		}
		else  {

			try {
				a = Convert::ToDouble(a_textboxP);
				t = (Convert::ToDouble(t_textbox_multP) * pi) / Convert::ToDouble(t_textbox_divP);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Введено некорректное число!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				check = false;
			}
			if (a <= 0 || Convert::ToDouble(t_textbox_divP) == 0) {
				MessageBox::Show("Введено некорректное число!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				check = false;
				return 0;
			}
			t = (Convert::ToDouble(t_textbox_multP)*pi)/ Convert::ToDouble(t_textbox_divP);
			b = t + 2 * pi;
		}
		if (check) {
			pause_button->Visible = true;
			label10->Visible = true;
		}
		chart1->ChartAreas[0]->AxisX->Minimum = -a*3.5;
		chart1->ChartAreas[0]->AxisX->Maximum = a*3.5;
		chart1->ChartAreas[0]->AxisY->Minimum = -a*3.5;
		chart1->ChartAreas[0]->AxisY->Maximum = a*3.5;
		this->chart1->Series[0]->Points->Clear();
		this->chart1->Series[1]->Points->Clear();
		this->chart1->Series[2]->Points->Clear();
		r = a;
		for (int k = 0; k <= 30; k++)
		{
			double x1 = 0 + r * Math::Cos(k * 2 * Math::PI / 30);
			double y1 = 0 + r * Math::Sin(k * 2 * Math::PI / 30);
			this->chart1->Series[2]->Points->AddXY(x1, y1);
		}


		if (timer1->Enabled == false)
			timer1->Enabled = true;
		else
			timer1->Enabled = false;

	}
		   void Project1::MyForm::DefParam() {
			   a = 2;
			   b = 2 * pi;
			   h = pi / 36;
			   t = 0;
	}


private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		int k = 0;
		if(t<=b) {
		this->chart1->Series[1]->Points->Clear();
		x = 2 * a * Math::Cos(t) - a * Math::Cos(2 * t);
		y = 2 * a * Math::Sin(t) - a * Math::Sin(2 * t);
		this->chart1->Series[0]->Points->AddXY(x, y);
		double x3 = 0 + 2 * r * Math::Cos(t);
		double y3 = 0 + 2 * r * Math::Sin(t);
		for (int k = 0; k <= 30; k++)
		{
			double x2 = x3 + r * Math::Cos(k * 2 * Math::PI / 30);
			double y2 = y3 + r * Math::Sin(k * 2 * Math::PI / 30);
			this->chart1->Series[1]->Points->AddXY(x2, y2);
		}
		t += h;
	}
		else {
			timer1->Enabled = false;
			this->pause_button->BackgroundImage = Image::FromFile("power_button.png");
		}
}
private: System::Void pause_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (timer1->Enabled == true) {
		timer1->Enabled = false;
		this->pause_button->BackgroundImage=Image::FromFile("power_button.png");
	}
	else {
		timer1->Enabled = true;
		this->pause_button->BackgroundImage = Image::FromFile("pause_button.png");
	}
	
}
private: System::Void построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ frm1 = gcnew MyForm1();
	frm1->ShowDialog();
	BuildGraph(frm1->a_gl, frm1->t_gl_verh, frm1->t_gl_niz);
}
private: System::Void выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ frm2 = gcnew MyForm2();
	frm2->Show();
}
};
}
