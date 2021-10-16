#pragma once
#include "Controller.h"

namespace DrawingFigures {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			controller = new Controller();
			g = panel1->CreateGraphics();
		}

	private:
		Controller* controller;
	private: System::Windows::Forms::GroupBox^ gbColors;
	private: System::Windows::Forms::TextBox^ txbBlue;
	private: System::Windows::Forms::TextBox^ txbGreen;
	private: System::Windows::Forms::TextBox^ txbRed;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnColors;

		   Graphics^ g;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbElegirFigura;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnDibujar;
	private: System::Windows::Forms::GroupBox^ gbPosicionInicial;
	private: System::Windows::Forms::TextBox^ txbPosicionY;



	private: System::Windows::Forms::TextBox^ txbPosicionX;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ gbElipse;
	private: System::Windows::Forms::TextBox^ txbRadio;


	private: System::Windows::Forms::Label^ lblAreaElipse;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ gbRectangulo;
	private: System::Windows::Forms::TextBox^ txbLado2;


	private: System::Windows::Forms::TextBox^ txbLado1;

	private: System::Windows::Forms::Label^ lblAreaRectangulo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbElegirFigura = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->gbPosicionInicial = (gcnew System::Windows::Forms::GroupBox());
			this->txbPosicionY = (gcnew System::Windows::Forms::TextBox());
			this->txbPosicionX = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gbElipse = (gcnew System::Windows::Forms::GroupBox());
			this->txbRadio = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaElipse = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->txbLado2 = (gcnew System::Windows::Forms::TextBox());
			this->txbLado1 = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gbColors = (gcnew System::Windows::Forms::GroupBox());
			this->btnColors = (gcnew System::Windows::Forms::Button());
			this->txbBlue = (gcnew System::Windows::Forms::TextBox());
			this->txbGreen = (gcnew System::Windows::Forms::TextBox());
			this->txbRed = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->gbPosicionInicial->SuspendLayout();
			this->gbElipse->SuspendLayout();
			this->gbRectangulo->SuspendLayout();
			this->gbColors->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir Figura";
			// 
			// cmbElegirFigura
			// 
			this->cmbElegirFigura->FormattingEnabled = true;
			this->cmbElegirFigura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Circle", L"Rectangle" });
			this->cmbElegirFigura->Location = System::Drawing::Point(130, 43);
			this->cmbElegirFigura->Name = L"cmbElegirFigura";
			this->cmbElegirFigura->Size = System::Drawing::Size(208, 24);
			this->cmbElegirFigura->TabIndex = 1;
			this->cmbElegirFigura->SelectedIndexChanged += gcnew System::EventHandler(this, &FrmMain::cmbElegirFigura_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnDibujar);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cmbElegirFigura);
			this->groupBox1->Location = System::Drawing::Point(24, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1010, 105);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(356, 34);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(622, 40);
			this->btnDibujar->TabIndex = 2;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &FrmMain::btnDibujar_Click);
			// 
			// gbPosicionInicial
			// 
			this->gbPosicionInicial->Controls->Add(this->txbPosicionY);
			this->gbPosicionInicial->Controls->Add(this->txbPosicionX);
			this->gbPosicionInicial->Controls->Add(this->label3);
			this->gbPosicionInicial->Controls->Add(this->label2);
			this->gbPosicionInicial->Enabled = false;
			this->gbPosicionInicial->Location = System::Drawing::Point(24, 152);
			this->gbPosicionInicial->Name = L"gbPosicionInicial";
			this->gbPosicionInicial->Size = System::Drawing::Size(307, 207);
			this->gbPosicionInicial->TabIndex = 3;
			this->gbPosicionInicial->TabStop = false;
			this->gbPosicionInicial->Text = L"Posicion Inicial";
			// 
			// txbPosicionY
			// 
			this->txbPosicionY->Location = System::Drawing::Point(145, 120);
			this->txbPosicionY->Name = L"txbPosicionY";
			this->txbPosicionY->Size = System::Drawing::Size(144, 22);
			this->txbPosicionY->TabIndex = 8;
			// 
			// txbPosicionX
			// 
			this->txbPosicionX->Location = System::Drawing::Point(145, 63);
			this->txbPosicionX->Name = L"txbPosicionX";
			this->txbPosicionX->Size = System::Drawing::Size(144, 22);
			this->txbPosicionX->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Posicion en Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Posicion en X";
			// 
			// gbElipse
			// 
			this->gbElipse->Controls->Add(this->txbRadio);
			this->gbElipse->Controls->Add(this->lblAreaElipse);
			this->gbElipse->Controls->Add(this->label5);
			this->gbElipse->Controls->Add(this->label4);
			this->gbElipse->Enabled = false;
			this->gbElipse->Location = System::Drawing::Point(380, 152);
			this->gbElipse->Name = L"gbElipse";
			this->gbElipse->Size = System::Drawing::Size(292, 207);
			this->gbElipse->TabIndex = 4;
			this->gbElipse->TabStop = false;
			this->gbElipse->Text = L"Elipse";
			// 
			// txbRadio
			// 
			this->txbRadio->Location = System::Drawing::Point(122, 61);
			this->txbRadio->Name = L"txbRadio";
			this->txbRadio->Size = System::Drawing::Size(144, 22);
			this->txbRadio->TabIndex = 9;
			// 
			// lblAreaElipse
			// 
			this->lblAreaElipse->AutoSize = true;
			this->lblAreaElipse->Location = System::Drawing::Point(123, 134);
			this->lblAreaElipse->Name = L"lblAreaElipse";
			this->lblAreaElipse->Size = System::Drawing::Size(135, 17);
			this->lblAreaElipse->TabIndex = 9;
			this->lblAreaElipse->Text = L"Mostrar el area aqui";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Area";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Radio";
			// 
			// gbRectangulo
			// 
			this->gbRectangulo->Controls->Add(this->txbLado2);
			this->gbRectangulo->Controls->Add(this->txbLado1);
			this->gbRectangulo->Controls->Add(this->lblAreaRectangulo);
			this->gbRectangulo->Controls->Add(this->label9);
			this->gbRectangulo->Controls->Add(this->label8);
			this->gbRectangulo->Controls->Add(this->label7);
			this->gbRectangulo->Enabled = false;
			this->gbRectangulo->Location = System::Drawing::Point(729, 152);
			this->gbRectangulo->Name = L"gbRectangulo";
			this->gbRectangulo->Size = System::Drawing::Size(305, 207);
			this->gbRectangulo->TabIndex = 4;
			this->gbRectangulo->TabStop = false;
			this->gbRectangulo->Text = L"Rectangulo";
			// 
			// txbLado2
			// 
			this->txbLado2->Location = System::Drawing::Point(107, 98);
			this->txbLado2->Name = L"txbLado2";
			this->txbLado2->Size = System::Drawing::Size(144, 22);
			this->txbLado2->TabIndex = 14;
			// 
			// txbLado1
			// 
			this->txbLado1->Location = System::Drawing::Point(107, 43);
			this->txbLado1->Name = L"txbLado1";
			this->txbLado1->Size = System::Drawing::Size(144, 22);
			this->txbLado1->TabIndex = 10;
			// 
			// lblAreaRectangulo
			// 
			this->lblAreaRectangulo->AutoSize = true;
			this->lblAreaRectangulo->Location = System::Drawing::Point(104, 155);
			this->lblAreaRectangulo->Name = L"lblAreaRectangulo";
			this->lblAreaRectangulo->Size = System::Drawing::Size(135, 17);
			this->lblAreaRectangulo->TabIndex = 13;
			this->lblAreaRectangulo->Text = L"Mostrar el area aqui";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 17);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Area";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Lado 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Lado 1";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(24, 380);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1373, 413);
			this->panel1->TabIndex = 5;
			// 
			// gbColors
			// 
			this->gbColors->Controls->Add(this->btnColors);
			this->gbColors->Controls->Add(this->txbBlue);
			this->gbColors->Controls->Add(this->txbGreen);
			this->gbColors->Controls->Add(this->txbRed);
			this->gbColors->Controls->Add(this->label11);
			this->gbColors->Controls->Add(this->label10);
			this->gbColors->Controls->Add(this->label6);
			this->gbColors->Location = System::Drawing::Point(1057, 26);
			this->gbColors->Name = L"gbColors";
			this->gbColors->Size = System::Drawing::Size(340, 333);
			this->gbColors->TabIndex = 6;
			this->gbColors->TabStop = false;
			this->gbColors->Text = L"Colors";
			// 
			// btnColors
			// 
			this->btnColors->Location = System::Drawing::Point(37, 202);
			this->btnColors->Name = L"btnColors";
			this->btnColors->Size = System::Drawing::Size(253, 114);
			this->btnColors->TabIndex = 6;
			this->btnColors->UseVisualStyleBackColor = true;
			// 
			// txbBlue
			// 
			this->txbBlue->Location = System::Drawing::Point(113, 162);
			this->txbBlue->Name = L"txbBlue";
			this->txbBlue->Size = System::Drawing::Size(177, 22);
			this->txbBlue->TabIndex = 5;
			this->txbBlue->TextChanged += gcnew System::EventHandler(this, &FrmMain::txbBlue_TextChanged);
			// 
			// txbGreen
			// 
			this->txbGreen->Location = System::Drawing::Point(113, 111);
			this->txbGreen->Name = L"txbGreen";
			this->txbGreen->Size = System::Drawing::Size(177, 22);
			this->txbGreen->TabIndex = 4;
			this->txbGreen->TextChanged += gcnew System::EventHandler(this, &FrmMain::txbGreen_TextChanged);
			// 
			// txbRed
			// 
			this->txbRed->Location = System::Drawing::Point(113, 61);
			this->txbRed->Name = L"txbRed";
			this->txbRed->Size = System::Drawing::Size(177, 22);
			this->txbRed->TabIndex = 3;
			this->txbRed->TextChanged += gcnew System::EventHandler(this, &FrmMain::txbRed_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 165);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 17);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Blue";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 111);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Green";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Red";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1427, 805);
			this->Controls->Add(this->gbColors);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gbRectangulo);
			this->Controls->Add(this->gbElipse);
			this->Controls->Add(this->gbPosicionInicial);
			this->Controls->Add(this->groupBox1);
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gbPosicionInicial->ResumeLayout(false);
			this->gbPosicionInicial->PerformLayout();
			this->gbElipse->ResumeLayout(false);
			this->gbElipse->PerformLayout();
			this->gbRectangulo->ResumeLayout(false);
			this->gbRectangulo->PerformLayout();
			this->gbColors->ResumeLayout(false);
			this->gbColors->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cmbElegirFigura_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cmbElegirFigura->SelectedItem == "Circle") {
			gbPosicionInicial->Enabled = true;
			gbElipse->Enabled = true;
			gbRectangulo->Enabled = false;
		}

		if (cmbElegirFigura->SelectedItem == "Rectangle") {
			gbPosicionInicial->Enabled = true;
			gbElipse->Enabled = false;
			gbRectangulo->Enabled = true;
		}
	}
private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbElegirFigura->SelectedItem == "Circle") {
		Circle* c = new Circle(Convert::ToInt32(txbPosicionX->Text), Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbRadio->Text));
		controller->addCircle(c);
		lblAreaElipse->Text = Convert::ToString(c->getArea());
	}

	if (cmbElegirFigura->SelectedItem == "Rectangle") {
		MyRectangle* r = new MyRectangle(Convert::ToInt32(txbPosicionX->Text), Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbLado1->Text), Convert::ToInt32(txbLado2->Text));
		controller->addMyRectangle(r);
		lblAreaRectangulo->Text = Convert::ToString(r->getArea());
	}

	g->Clear(Color::White);
	Color color = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
		Convert::ToInt32(txbBlue->Text));
	controller->drawEverything(g, color);
}
private: System::Void txbRed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColors->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
			Convert::ToInt32(txbBlue->Text));
	}
}
private: System::Void txbGreen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColors->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
			Convert::ToInt32(txbBlue->Text));
	}
}
private: System::Void txbBlue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txbRed->Text != "" && txbGreen->Text != "" && txbBlue->Text != "") {
		btnColors->BackColor = Color::FromArgb(Convert::ToInt32(txbRed->Text), Convert::ToInt32(txbGreen->Text),
			Convert::ToInt32(txbBlue->Text));
	}
}
};
}
