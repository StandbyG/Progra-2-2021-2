#pragma once
#include "Controller.h"
#include <ctime>

namespace Sem9Ex1 {

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
			srand(time(NULL));
			InitializeComponent();
			controller = new Controller();
			g = pnlCanvas->CreateGraphics();
		}

	private:
		Controller* controller;
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnDibujar;
	protected:

	private: System::Windows::Forms::ComboBox^ cmbElegirFigura;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ gbPosicionInicial;
	private: System::Windows::Forms::TextBox^ txbPosicionY;



	private: System::Windows::Forms::TextBox^ txbPosicionX;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ gbElipse;
	private: System::Windows::Forms::TextBox^ txbRadio;
	private: System::Windows::Forms::Label^ lblAreaCirculo;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ gbRectangulo;

	private: System::Windows::Forms::TextBox^ txbLado2;

	private: System::Windows::Forms::TextBox^ txbLado1;
	private: System::Windows::Forms::Label^ lblAreaRectangulo;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ pnlCanvas;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->cmbElegirFigura = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gbPosicionInicial = (gcnew System::Windows::Forms::GroupBox());
			this->txbPosicionY = (gcnew System::Windows::Forms::TextBox());
			this->txbPosicionX = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gbElipse = (gcnew System::Windows::Forms::GroupBox());
			this->txbRadio = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaCirculo = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->txbLado2 = (gcnew System::Windows::Forms::TextBox());
			this->txbLado1 = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pnlCanvas = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->gbPosicionInicial->SuspendLayout();
			this->gbElipse->SuspendLayout();
			this->gbRectangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnDibujar);
			this->groupBox1->Controls->Add(this->cmbElegirFigura);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(27, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(997, 106);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(408, 34);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(566, 41);
			this->btnDibujar->TabIndex = 2;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &FrmMain::btnDibujar_Click);
			// 
			// cmbElegirFigura
			// 
			this->cmbElegirFigura->FormattingEnabled = true;
			this->cmbElegirFigura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Circle", L"Rectangle" });
			this->cmbElegirFigura->Location = System::Drawing::Point(143, 43);
			this->cmbElegirFigura->Name = L"cmbElegirFigura";
			this->cmbElegirFigura->Size = System::Drawing::Size(200, 24);
			this->cmbElegirFigura->TabIndex = 1;
			this->cmbElegirFigura->SelectedIndexChanged += gcnew System::EventHandler(this, &FrmMain::cmbElegirFigura_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir Figura";
			// 
			// gbPosicionInicial
			// 
			this->gbPosicionInicial->Controls->Add(this->txbPosicionY);
			this->gbPosicionInicial->Controls->Add(this->txbPosicionX);
			this->gbPosicionInicial->Controls->Add(this->label3);
			this->gbPosicionInicial->Controls->Add(this->label2);
			this->gbPosicionInicial->Enabled = false;
			this->gbPosicionInicial->Location = System::Drawing::Point(27, 166);
			this->gbPosicionInicial->Name = L"gbPosicionInicial";
			this->gbPosicionInicial->Size = System::Drawing::Size(334, 230);
			this->gbPosicionInicial->TabIndex = 1;
			this->gbPosicionInicial->TabStop = false;
			this->gbPosicionInicial->Text = L"Posicion Inicial";
			// 
			// txbPosicionY
			// 
			this->txbPosicionY->Location = System::Drawing::Point(143, 142);
			this->txbPosicionY->Name = L"txbPosicionY";
			this->txbPosicionY->Size = System::Drawing::Size(157, 22);
			this->txbPosicionY->TabIndex = 3;
			// 
			// txbPosicionX
			// 
			this->txbPosicionX->Location = System::Drawing::Point(143, 74);
			this->txbPosicionX->Name = L"txbPosicionX";
			this->txbPosicionX->Size = System::Drawing::Size(157, 22);
			this->txbPosicionX->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Posicion en Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Posicion en X";
			// 
			// gbElipse
			// 
			this->gbElipse->Controls->Add(this->txbRadio);
			this->gbElipse->Controls->Add(this->lblAreaCirculo);
			this->gbElipse->Controls->Add(this->label4);
			this->gbElipse->Controls->Add(this->label5);
			this->gbElipse->Enabled = false;
			this->gbElipse->Location = System::Drawing::Point(385, 166);
			this->gbElipse->Name = L"gbElipse";
			this->gbElipse->Size = System::Drawing::Size(307, 230);
			this->gbElipse->TabIndex = 4;
			this->gbElipse->TabStop = false;
			this->gbElipse->Text = L"Elipse";
			// 
			// txbRadio
			// 
			this->txbRadio->Location = System::Drawing::Point(126, 67);
			this->txbRadio->Name = L"txbRadio";
			this->txbRadio->Size = System::Drawing::Size(157, 22);
			this->txbRadio->TabIndex = 4;
			// 
			// lblAreaCirculo
			// 
			this->lblAreaCirculo->AutoSize = true;
			this->lblAreaCirculo->Location = System::Drawing::Point(130, 138);
			this->lblAreaCirculo->Name = L"lblAreaCirculo";
			this->lblAreaCirculo->Size = System::Drawing::Size(122, 17);
			this->lblAreaCirculo->TabIndex = 3;
			this->lblAreaCirculo->Text = L"Mostrar Area Aqui";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Area";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Radio";
			// 
			// gbRectangulo
			// 
			this->gbRectangulo->Controls->Add(this->txbLado2);
			this->gbRectangulo->Controls->Add(this->txbLado1);
			this->gbRectangulo->Controls->Add(this->lblAreaRectangulo);
			this->gbRectangulo->Controls->Add(this->label7);
			this->gbRectangulo->Controls->Add(this->label8);
			this->gbRectangulo->Controls->Add(this->label9);
			this->gbRectangulo->Enabled = false;
			this->gbRectangulo->Location = System::Drawing::Point(717, 166);
			this->gbRectangulo->Name = L"gbRectangulo";
			this->gbRectangulo->Size = System::Drawing::Size(307, 230);
			this->gbRectangulo->TabIndex = 5;
			this->gbRectangulo->TabStop = false;
			this->gbRectangulo->Text = L"Rectangulo";
			// 
			// txbLado2
			// 
			this->txbLado2->Location = System::Drawing::Point(127, 122);
			this->txbLado2->Name = L"txbLado2";
			this->txbLado2->Size = System::Drawing::Size(157, 22);
			this->txbLado2->TabIndex = 6;
			// 
			// txbLado1
			// 
			this->txbLado1->Location = System::Drawing::Point(127, 58);
			this->txbLado1->Name = L"txbLado1";
			this->txbLado1->Size = System::Drawing::Size(157, 22);
			this->txbLado1->TabIndex = 5;
			// 
			// lblAreaRectangulo
			// 
			this->lblAreaRectangulo->AutoSize = true;
			this->lblAreaRectangulo->Location = System::Drawing::Point(131, 182);
			this->lblAreaRectangulo->Name = L"lblAreaRectangulo";
			this->lblAreaRectangulo->Size = System::Drawing::Size(122, 17);
			this->lblAreaRectangulo->TabIndex = 5;
			this->lblAreaRectangulo->Text = L"Mostrar Area Aqui";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Lado 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 17);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Area";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Lado 1";
			// 
			// pnlCanvas
			// 
			this->pnlCanvas->Location = System::Drawing::Point(27, 422);
			this->pnlCanvas->Name = L"pnlCanvas";
			this->pnlCanvas->Size = System::Drawing::Size(997, 430);
			this->pnlCanvas->TabIndex = 6;
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 864);
			this->Controls->Add(this->pnlCanvas);
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
		gbRectangulo-> Enabled = true;
	}
}
private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cmbElegirFigura->SelectedItem == "Circle") {
		Circle* c = new Circle(Convert::ToInt32(txbPosicionX->Text), Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbRadio->Text));
		controller->addCircle(c);
		lblAreaCirculo->Text = Convert::ToString(c->getArea());
	}
	if (cmbElegirFigura->SelectedItem == "Rectangle") {
		MyRectangle* m = new MyRectangle(Convert::ToInt32(txbPosicionX->Text), Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbLado1->Text), Convert::ToInt32(txbLado2->Text));
		controller->addMyRectangle(m);
		lblAreaRectangulo->Text = Convert::ToString(m->getArea());
	}
	

	g->Clear(Color::White);
	controller->drawEverything(g);
}
};
}
