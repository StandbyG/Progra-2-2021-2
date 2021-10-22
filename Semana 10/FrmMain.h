#pragma once
#include "Controller.h"

namespace FiguresRace {

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
		
	private: System::Windows::Forms::Label^ lblDiamondVictories;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblRectangleVictories;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblCircleVictories;
	private: System::Windows::Forms::Label^ label1;
		 

	public:
		FrmMain(void)
		{
			srand(time(NULL));
			InitializeComponent();
			raceNumber = 1;
			controller = new Controller();
			
			//Buffer
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);
		}

	private:
		int raceNumber;
		Controller* controller;

		//Buffer
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCircleVictories = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblRectangleVictories = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblDiamondVictories = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblDiamondVictories);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->lblRectangleVictories);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->lblCircleVictories);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1142, 659);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmMain::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 456);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Circle";
			// 
			// lblCircleVictories
			// 
			this->lblCircleVictories->AutoSize = true;
			this->lblCircleVictories->Location = System::Drawing::Point(125, 456);
			this->lblCircleVictories->Name = L"lblCircleVictories";
			this->lblCircleVictories->Size = System::Drawing::Size(20, 21);
			this->lblCircleVictories->TabIndex = 1;
			this->lblCircleVictories->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(291, 456);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Rectangle";
			// 
			// lblRectangleVictories
			// 
			this->lblRectangleVictories->AutoSize = true;
			this->lblRectangleVictories->Location = System::Drawing::Point(373, 456);
			this->lblRectangleVictories->Name = L"lblRectangleVictories";
			this->lblRectangleVictories->Size = System::Drawing::Size(20, 21);
			this->lblRectangleVictories->TabIndex = 3;
			this->lblRectangleVictories->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(541, 456);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Diamond";
			// 
			// lblDiamondVictories
			// 
			this->lblDiamondVictories->AutoSize = true;
			this->lblDiamondVictories->Location = System::Drawing::Point(626, 456);
			this->lblDiamondVictories->Name = L"lblDiamondVictories";
			this->lblDiamondVictories->Size = System::Drawing::Size(20, 21);
			this->lblDiamondVictories->TabIndex = 5;
			this->lblDiamondVictories->Text = L"0";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 683);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMain";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::FrmMain_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::WhiteSmoke);
		controller->moveEverything();
		controller->drawEverything(buffer->Graphics);
		lblCircleVictories->Text = Convert::ToString(controller->getCircle()->getVictories());
		lblDiamondVictories->Text = Convert::ToString(controller->getDiamond()->getVictories());
		lblRectangleVictories->Text = Convert::ToString(controller->getRectangle()->getVictories());

		if (raceNumber > 5) {
			timer1->Enabled = false;
			MessageBox::Show("Figure Ranking" + "\n" + 
				"Circle: " + controller->getCircle()->getVictories() + "\n"
				"Rectangle: " + controller->getRectangle()->getVictories() + "\n"
				"Diamond: " + controller->getDiamond()->getVictories());
		}

		buffer->Render(g);
	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		switch (e->KeyCode)
		{
		case Keys::Space:
			controller->again(); raceNumber++; break;
		}
	}
	};
}
