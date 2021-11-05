#pragma once
#include "Controller.h"

namespace HeroEnemies {

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
			//Buffer
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);

			//Bitmap
			bmpHero = gcnew Bitmap("oro.png");
			bmpMap = gcnew Bitmap("map.png");
			bmpEnemy = gcnew Bitmap("proton.png");
			
			//Controller
			controller = new Controller(bmpHero, bmpEnemy);
		}

	private:
		//Buffer
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

		//Bitmap
		Bitmap^ bmpHero;
		Bitmap^ bmpMap;
		Bitmap^ bmpEnemy;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ lblHP;
	private: System::Windows::Forms::Label^ label1;


		//Controller
		Controller* controller;

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
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->lblHP = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblHP);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(2, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1186, 732);
			this->panel1->TabIndex = 0;
			// 
			// lblHP
			// 
			this->lblHP->AutoSize = true;
			this->lblHP->Location = System::Drawing::Point(122, 30);
			this->lblHP->Name = L"lblHP";
			this->lblHP->Size = System::Drawing::Size(0, 17);
			this->lblHP->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmMain::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Health Points";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1192, 730);
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
		//Clear
		buffer->Graphics->Clear(Color::White);
		//Collision
		controller->collision();
		//Move
		controller->moveEverything(buffer->Graphics);
		//Draw
		lblHP->Text = Convert::ToString(controller->getHero()->getHp());
		buffer->Graphics->DrawImage(bmpMap, 0, 0, panel1->Width, panel1->Height);
		buffer->Graphics->DrawString(Convert::ToString(controller->getHero()->getHp()), gcnew Drawing::Font("MV Boli", 40, FontStyle::Bold),
			Brushes::Black, 600, 10);
		controller->drawEverything(buffer->Graphics, bmpHero, bmpEnemy);
		//Render
		buffer->Render(g);
	}
	private: System::Void FrmMain_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::A: case Keys::Left:
			controller->getHero()->move(buffer->Graphics, 'A'); break;
		case Keys::D: case Keys::Right:
			controller->getHero()->move(buffer->Graphics, 'D'); break;
		case Keys::W: case Keys::Up:
			controller->getHero()->move(buffer->Graphics, 'W'); break;
		case Keys::S: case Keys::Down:
			controller->getHero()->move(buffer->Graphics, 'S'); break;
		}
	}
};
}
