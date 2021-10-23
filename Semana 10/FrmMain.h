#pragma once
#include "Controller.h"

namespace FiguresRaceRemake {

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
			raceNumber = 1;
			counter = 0;

			//Buffer
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);
		}

	private:
		int raceNumber;
		int counter;
		Controller* controller;

		//Buffer
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
	private: System::Windows::Forms::Label^ lblTimer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timerTime;

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
			this->timerTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblTimer);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(5, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1139, 583);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmMain::timer1_Tick);
			// 
			// timerTime
			// 
			this->timerTime->Enabled = true;
			this->timerTime->Interval = 1000;
			this->timerTime->Tick += gcnew System::EventHandler(this, &FrmMain::timerTime_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Timer";
			// 
			// lblTimer
			// 
			this->lblTimer->AutoSize = true;
			this->lblTimer->Location = System::Drawing::Point(96, 22);
			this->lblTimer->Name = L"lblTimer";
			this->lblTimer->Size = System::Drawing::Size(20, 21);
			this->lblTimer->TabIndex = 1;
			this->lblTimer->Text = L"0";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 588);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmMain";
			this->Text = L"FrmMain";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmMain::FrmMain_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::White);
		controller->moveEverything();
		controller->drawEverything(buffer->Graphics);
		lblTimer->Text = Convert::ToString(counter);
		if (raceNumber > 5) {
			timer1->Enabled = false;
			MessageBox::Show("Figure Ranking" + "\n" +
				"Circle: " + controller->getCircle()->getVictories() + "\n" +
				"Rectangle: " + controller->getRectangle()->getVictories() + "\n" +
				"Diamond: " + controller->getDiamond()->getVictories());
		}

		buffer->Render(g);
	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::Space:
			if (controller->getCircle()->getArrive() && 
				controller->getRectangle()->getArrive() && 
				controller->getDiamond()->getArrive()) {
				controller->again(); raceNumber++;
			}
			break;
		}
	}
	private: System::Void timerTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		counter++;
	}
};
}
