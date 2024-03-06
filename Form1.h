#pragma once
#include "pch.h"
#include <Windows.h>
#include <msclr/marshal.h>
#include <vcclr.h>
#include <string>
#include <tchar.h>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;
	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;
	using namespace System::Text;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ selectFolderToolStripMenuItem;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;




	private: System::Windows::Forms::Button^ button1;

	public:
		void ErrorBox(String^ str) {
			MessageBox::Show(str, "Message", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	private: System::ComponentModel::IContainer^ components;
	public:
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 85);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(782, 274);
			this->textBox1->TabIndex = 0;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(224, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(821, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->selectFolderToolStripMenuItem,
					this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Roboto Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// selectFolderToolStripMenuItem
			// 
			this->selectFolderToolStripMenuItem->Name = L"selectFolderToolStripMenuItem";
			this->selectFolderToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->selectFolderToolStripMenuItem->Text = L"Select folder";
			this->selectFolderToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::selectFolderToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Default Path: C:\\Program Files";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button2->Location = System::Drawing::Point(354, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// backgroundWorker2
			// 
			this->backgroundWorker2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker2_DoWork);
			// 
			// backgroundWorker3
			// 
			this->backgroundWorker3->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker3_DoWork);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button3->Location = System::Drawing::Point(480, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 31);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(644, 406);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Notify if there are changes";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"FolderChangesChecker";
			this->notifyIcon1->Visible = false;
			this->notifyIcon1->Icon = SystemIcons::Shield;
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::notifyIcon1_MouseDoubleClick_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(821, 454);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"FolderChangesChecker";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void ShowMessageBox(String^ message, String^ folder)
		{
			if (checkBox1->Checked)
			{
				if (this->WindowState == FormWindowState::Minimized) { // Якщо вікно згорнуте
					ShowNotification(folder, message); //Показати повідомлення в треї
				}
				else {
					MessageBox::Show(message, folder, MessageBoxButtons::OK, MessageBoxIcon::Information); // Показати MessageBox
				}
			}
		}

		void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if (this->WindowState == FormWindowState::Minimized) // Перевіряємо, чи створене вікно
			{
				this->WindowState = FormWindowState::Normal; // Розгортаємо вікно
			}

			this->Activate(); // Активируем окно
		}





		void ShowNotification(String^ title, String^ message)
		{
			this->notifyIcon1->BalloonTipTitle = title;
			this->notifyIcon1->BalloonTipText = message;
			this->notifyIcon1->ShowBalloonTip(3000);
		}




		void TextBoxAddText(String^ text) {
			DateTime now = DateTime::Now;
			this->textBox1->AppendText(now.ToString("dd.MM.yyyy HH:mm:ss") + " " + text + Environment::NewLine);
		}


		String^ folderPath = "C:\Program Files";
		String^ folderPath2 = "";
		String^ folderPath3 = "";

		int counter = 0;




		void MonitorDirectoryChanges(String^ path)
		{
			String^ folder = path->TrimEnd();
			wchar_t* lp_Path = static_cast<wchar_t*>(Marshal::StringToHGlobalUni(folder).ToPointer()); // конвертація строки

			HANDLE hDir = CreateFile(lp_Path, // шлях до директорії
				GENERIC_READ,
				FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
				NULL,
				OPEN_EXISTING,
				FILE_FLAG_BACKUP_SEMANTICS,
				NULL);

			if (hDir == INVALID_HANDLE_VALUE)
			{
				ErrorBox("Invalid Create File handle value");
				// обробка помилки
				return;
			}

			char buffer[1024];
			DWORD dwBytesReturned = 0;
			BOOL bSuccess = FALSE;

			while (true)
			{
				bSuccess = ReadDirectoryChangesW(hDir,
					buffer,
					sizeof(buffer),
					TRUE,
					FILE_NOTIFY_CHANGE_FILE_NAME | FILE_NOTIFY_CHANGE_DIR_NAME | FILE_NOTIFY_CHANGE_ATTRIBUTES | FILE_NOTIFY_CHANGE_SIZE | FILE_NOTIFY_CHANGE_LAST_WRITE | FILE_NOTIFY_CHANGE_CREATION | FILE_NOTIFY_CHANGE_SECURITY,
					&dwBytesReturned,
					NULL,
					NULL);

				if (!bSuccess)
				{
					ErrorBox("ReadDirectoryChangesW error");
					break;
				}

				// переформатування дани у формат String  на textBox1
				FILE_NOTIFY_INFORMATION* pNotify = (FILE_NOTIFY_INFORMATION*)buffer;
				while (TRUE)
				{
					if (pNotify->Action == FILE_ACTION_ADDED)
					{
						System::String^ str = gcnew System::String(pNotify->FileName, 0, pNotify->FileNameLength / 2); // ділення на 2, тому що в конструктор String передається кількість символів, а не кількість байтів
						this->textBox1->Invoke(gcnew Action<String^>(this, &Form1::TextBoxAddText), str + " was added" + " in " + path);
						ShowMessageBox(str + " was added", path);
					}
					else if (pNotify->Action == FILE_ACTION_REMOVED)
					{
						System::String^ str = gcnew System::String(pNotify->FileName, 0, pNotify->FileNameLength / 2);
						this->textBox1->Invoke(gcnew Action<String^>(this, &Form1::TextBoxAddText), str + " was removed" + " in " + path);
						ShowMessageBox(str + " was removed", path);
					}
					else if (pNotify->Action == FILE_ACTION_MODIFIED)
					{
						System::String^ str = gcnew System::String(pNotify->FileName, 0, pNotify->FileNameLength / 2);
						this->textBox1->Invoke(gcnew Action<String^>(this, &Form1::TextBoxAddText), str + " was modified" + " in " + path);
						ShowMessageBox(str + " was modified", path);
					}
					else if (pNotify->Action == FILE_ACTION_RENAMED_OLD_NAME)
					{
						System::String^ str = gcnew System::String(pNotify->FileName, 0, pNotify->FileNameLength / 2);
						this->textBox1->Invoke(gcnew Action<String^>(this, &Form1::TextBoxAddText), str + " was renamed (old name)" + " in " + path);
						ShowMessageBox(str + " was renamed (old name)", path);
					}
					else if (pNotify->Action == FILE_ACTION_RENAMED_NEW_NAME)
					{
						System::String^ str = gcnew System::String(pNotify->FileName, 0, pNotify->FileNameLength / 2);
						this->textBox1->Invoke(gcnew Action<String^>(this, &Form1::TextBoxAddText), str + " was renamed (new name)" + " in " + path);
						ShowMessageBox(str + " was renamed (new name)", path);
					}

					if (pNotify->NextEntryOffset == 0)
						break;

					pNotify = (FILE_NOTIFY_INFORMATION*)((LPBYTE)pNotify + pNotify->NextEntryOffset);
				}
			}

			CloseHandle(hDir);
		}



		void ReadStringFromRegistry(String^% value1, String^% value2, String^% value3)
		{
			HKEY hKey;
			DWORD dwType, dwSize;
			LPBYTE lpData;
			wchar_t* lpValueName;

			// Відкриваємо шлях реєстра
			if (RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\FolderChangesChecker\\Data", 0, KEY_READ, &hKey) != ERROR_SUCCESS) {
				return;
			}

			// Зчитуємо перше значення
			lpValueName = L"path1";
			if (RegQueryValueEx(hKey, lpValueName, NULL, &dwType, NULL, &dwSize) == ERROR_SUCCESS) {
				lpData = new BYTE[dwSize];
				RegQueryValueEx(hKey, lpValueName, NULL, &dwType, lpData, &dwSize);
				value1 = gcnew String(reinterpret_cast<const wchar_t*>(lpData), 0, dwSize / sizeof(wchar_t));
				delete[] lpData;
			}

			// Зчитуємо друге значення
			lpValueName = L"path2";
			if (RegQueryValueEx(hKey, lpValueName, NULL, &dwType, NULL, &dwSize) == ERROR_SUCCESS) {
				lpData = new BYTE[dwSize];
				RegQueryValueEx(hKey, lpValueName, NULL, &dwType, lpData, &dwSize);
				value2 = gcnew String(reinterpret_cast<const wchar_t*>(lpData), 0, dwSize / sizeof(wchar_t));
				delete[] lpData;
			}

			// Зчитуємо третє значення
			lpValueName = L"path3";
			if (RegQueryValueEx(hKey, lpValueName, NULL, &dwType, NULL, &dwSize) == ERROR_SUCCESS) {
				lpData = new BYTE[dwSize];
				RegQueryValueEx(hKey, lpValueName, NULL, &dwType, lpData, &dwSize);
				value3 = gcnew String(reinterpret_cast<const wchar_t*>(lpData), 0, dwSize / sizeof(wchar_t));
				delete[] lpData;
			}

			// Закриваємо
			RegCloseKey(hKey);
		}




		void WriteStringToRegistry(String^ keyPath, String^ valueName1, String^ value1, String^ valueName2, String^ value2, String^ valueName3, String^ value3)
		{
			// Конвертація ключів та шляху реєстра
			marshal_context context;
			LPCTSTR key = context.marshal_as<const TCHAR*>(keyPath);
			LPCTSTR name1 = context.marshal_as<const TCHAR*>(valueName1);
			LPCTSTR name2 = context.marshal_as<const TCHAR*>(valueName2);
			LPCTSTR name3 = context.marshal_as<const TCHAR*>(valueName3);

			// Відкриття запису
			HKEY hKey;
			RegCreateKeyEx(HKEY_CURRENT_USER, key, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);

			// Запис значень
			LPCTSTR val1 = context.marshal_as<const TCHAR*>(value1);
			LPCTSTR val2 = context.marshal_as<const TCHAR*>(value2);
			LPCTSTR val3 = context.marshal_as<const TCHAR*>(value3);

			RegSetValueEx(hKey, name1, 0, REG_SZ, (LPBYTE)val1, (_tcslen(val1) + 1) * sizeof(TCHAR));
			RegSetValueEx(hKey, name2, 0, REG_SZ, (LPBYTE)val2, (_tcslen(val2) + 1) * sizeof(TCHAR));
			RegSetValueEx(hKey, name3, 0, REG_SZ, (LPBYTE)val3, (_tcslen(val3) + 1) * sizeof(TCHAR));

			// Закриття
			RegCloseKey(hKey);
		}





		void SaveLog(String^ fileName) {
			wchar_t* filePathL = static_cast<wchar_t*>(Marshal::StringToHGlobalUni(fileName).ToPointer()); //перетворення типу

			// Відкриття файлу для запису
			HANDLE hFile = CreateFile(filePathL,
				GENERIC_WRITE | FILE_SHARE_READ,
				0,
				NULL,
				CREATE_ALWAYS,
				FILE_ATTRIBUTE_NORMAL,
				NULL);

			if (hFile == INVALID_HANDLE_VALUE) {
				ErrorBox("Failed to create file");
				return;
			}
			wchar_t* textL = static_cast<wchar_t*>(Marshal::StringToHGlobalUni(textBox1->Text).ToPointer()); //конвертація даних з textBox1

			DWORD dwBytesWritten;
			if (!WriteFile(hFile, textL, wcslen(textL) * 2, &dwBytesWritten, NULL)) {
				ErrorBox("Failed to write to file");
			}


			//закриття хендлу запису файлу
			CloseHandle(hFile);

		}
















#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		ReadStringFromRegistry(folderPath, folderPath2, folderPath3);		

		int nullIndex = folderPath->IndexOf('\0');
		if (nullIndex != -1)
		{
			folderPath = folderPath->Substring(0, nullIndex); // Видалення кінцевого нуля
		}

		nullIndex = folderPath2->IndexOf('\0');
		if (nullIndex != -1)
		{
			folderPath2 = folderPath2->Substring(0, nullIndex); // Видалення кінцевого нуля
		}


		nullIndex = folderPath3->IndexOf('\0');
		if (nullIndex != -1)
		{
			folderPath3 = folderPath3->Substring(0, nullIndex); // Видалення кінцевого нуля
		}







		String^ labelText = "Current path: ";
		if (!String::IsNullOrEmpty(folderPath) && folderPath!= "C:Program Files") {
			labelText += folderPath;
			counter++;
		}
		if (!String::IsNullOrEmpty(folderPath2)) {
			labelText += "  " + folderPath2;
			counter++;
		}
		if (!String::IsNullOrEmpty(folderPath3)) {
			labelText += "  " + folderPath3;
			counter++;
		}

		if (counter != 0)
		{
			this->label1->Text = labelText;
		}


	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		MonitorDirectoryChanges(folderPath);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = FALSE;

		switch (counter) {
		case 0:
			backgroundWorker1->RunWorkerAsync(); // запуск BackgroundWorker при натисканні на кнопку
			break;
		case 1:
			backgroundWorker1->RunWorkerAsync(); // запуск BackgroundWorker при натисканні на кнопку
			break;
		case 2:
			backgroundWorker1->RunWorkerAsync(); // запуск BackgroundWorker при натисканні на кнопку
			backgroundWorker2->RunWorkerAsync(); 
			break;
		case 3:
			backgroundWorker1->RunWorkerAsync(); // запуск BackgroundWorker при натисканні на кнопку
			backgroundWorker2->RunWorkerAsync(); 
			backgroundWorker3->RunWorkerAsync(); 
			break;
		default:
			break;
		}
	}

	private: System::Void selectFolderToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// відображення діалогу вибору директорії та обробка
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::String^ selectedFolder = folderBrowserDialog1->SelectedPath;
			MessageBox::Show("Selected folder: " + selectedFolder); // Message Box для сповіщення обраної папки
			// Проверяем, какой из folderPath'ов нужно редактировать
			if (counter == 0) {
				folderPath = selectedFolder;
				label1->Text = "Current Path: " + folderPath; //вивід обраної директорії на лейбл
			}
			else if (counter == 1) {
				folderPath2 = selectedFolder;
				label1->Text = "Current Path: " + folderPath + "  " + folderPath2; //вивід обраної директорії на лейбл
			}
			else if (counter == 2) {
				folderPath3 = selectedFolder;
				label1->Text = "Current Path: " + folderPath + "  " + folderPath2 + "  " + folderPath3; //вивід обраної директорії на лейбл
			}


			if (counter == 3) {
				// Якщо 3, то зрушуємо folderPath'и на одну позицію вліво
				folderPath = folderPath2;
				folderPath2 = folderPath3;
				folderPath3 = selectedFolder;
				label1->Text = "Current Path: " + folderPath + " " + folderPath2 + " " + folderPath3; //вивід обраної директорії на лейбл
			}

			if (counter < 3)
			{
				counter++;
			}
			


		}

	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Отримати шлях до файлу з вікна збереження
			String^ fileName = saveFileDialog1->FileName;
			SaveLog(fileName);
		}
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// Створення MessageBox
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Do you want save result?",
			"Alert",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// Обробник подій натискання на кнопки
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Отримати шлях до файлу з вікна збереження
				String^ fileName = saveFileDialog1->FileName;
				SaveLog(fileName);
			}
			else
			{
				e->Cancel = true;
				return;
			}
		}
	

		WriteStringToRegistry("SOFTWARE\\FolderChangesChecker\\Data", "path1", folderPath, "path2", folderPath2, "path3", folderPath3);
			
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Створення MessageBox
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Do you want save result?",
			"Alert",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// Обробник подій натискання на кнопки
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				// Отримати шлях до файлу з вікна збереження
				String^ fileName = saveFileDialog1->FileName;
				SaveLog(fileName);
			}
			else
			{
				return;
			}
		}
		// Отримання імені поточного додатку
		String^ appName = System::Reflection::Assembly::GetExecutingAssembly()->Location;
		WriteStringToRegistry("SOFTWARE\\FolderChangesChecker\\Data", "path1", folderPath, "path2", folderPath2, "path3", folderPath3);

		// Запуск нової форми
		System::Diagnostics::Process::Start(appName);

		// Закриття старого
		System::Environment::Exit(0);
	}
	private: System::Void backgroundWorker2_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		MonitorDirectoryChanges(folderPath2);
	}
private: System::Void backgroundWorker3_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	MonitorDirectoryChanges(folderPath3);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	counter = 0;
	folderPath = "C:\Program Files";
	folderPath2 = "";
	folderPath3 = "";
	label1->Text = "Default Path: C:\\Program Files";
}
private: System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState == FormWindowState::Minimized) {
		this->notifyIcon1->Visible = true;
	}
	else
	{
		this->notifyIcon1->Visible = false;
	}
}
private: System::Void notifyIcon1_MouseDoubleClick_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (this->WindowState == FormWindowState::Minimized) // Чи згорнуте вікно
	{
		this->WindowState = FormWindowState::Normal; // Розгортаємо вікно
	}

	this->Activate(); // Активуємо вікно
}
};

}
