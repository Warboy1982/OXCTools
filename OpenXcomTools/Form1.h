#pragma once

namespace OpenXcomTools {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reloadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  recentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ItemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Value;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sprite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Article;
	private: System::Windows::Forms::ToolStripMenuItem^  mapEditorToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





















	protected: 


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
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Countries"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Regions"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Facilities"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Xcom Crafts"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"UFOs"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"Aircraft", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode4, 
				treeNode5}));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"Aircraft Weapons"));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"HWPs"));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"One Handed"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"Two Handed"));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"Grenade"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"Miscellaneous"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"Weapons", gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {treeNode9, 
				treeNode10, treeNode11, treeNode12}));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"Corpse"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"UFO components"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Items", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {treeNode7, 
				treeNode8, treeNode13, treeNode14, treeNode15}));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Inventories"));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Terrains"));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"Deployments"));
			System::Windows::Forms::TreeNode^  treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Maps", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode18, 
				treeNode19}));
			System::Windows::Forms::TreeNode^  treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Armors"));
			System::Windows::Forms::TreeNode^  treeNode22 = (gcnew System::Windows::Forms::TreeNode(L"Xcom"));
			System::Windows::Forms::TreeNode^  treeNode23 = (gcnew System::Windows::Forms::TreeNode(L"Alien"));
			System::Windows::Forms::TreeNode^  treeNode24 = (gcnew System::Windows::Forms::TreeNode(L"Units", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {treeNode22, 
				treeNode23}));
			System::Windows::Forms::TreeNode^  treeNode25 = (gcnew System::Windows::Forms::TreeNode(L"Alien Races"));
			System::Windows::Forms::TreeNode^  treeNode26 = (gcnew System::Windows::Forms::TreeNode(L"Research"));
			System::Windows::Forms::TreeNode^  treeNode27 = (gcnew System::Windows::Forms::TreeNode(L"Manufacture"));
			System::Windows::Forms::TreeNode^  treeNode28 = (gcnew System::Windows::Forms::TreeNode(L"UFOPaedia Articles"));
			System::Windows::Forms::TreeNode^  treeNode29 = (gcnew System::Windows::Forms::TreeNode(L"Starting Base"));
			System::Windows::Forms::TreeNode^  treeNode30 = (gcnew System::Windows::Forms::TreeNode(L"UFO flight paths"));
			System::Windows::Forms::TreeNode^  treeNode31 = (gcnew System::Windows::Forms::TreeNode(L"Equipment Levels"));
			System::Windows::Forms::TreeNode^  treeNode32 = (gcnew System::Windows::Forms::TreeNode(L"Alien Missions", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) {treeNode31}));
			System::Windows::Forms::TreeNode^  treeNode33 = (gcnew System::Windows::Forms::TreeNode(L"Misc"));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reloadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapEditorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ItemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Value = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sprite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->treeView1->Location = System::Drawing::Point(12, 53);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Countries";
			treeNode1->Text = L"Countries";
			treeNode2->Name = L"Regions";
			treeNode2->Text = L"Regions";
			treeNode3->Name = L"Facilities";
			treeNode3->Text = L"Facilities";
			treeNode4->Name = L"Xcom Crafts";
			treeNode4->Text = L"Xcom Crafts";
			treeNode5->Name = L"UFOs";
			treeNode5->Text = L"UFOs";
			treeNode6->Name = L"Aircraft";
			treeNode6->Text = L"Aircraft";
			treeNode7->Name = L"Aircraft Weapons";
			treeNode7->Text = L"Aircraft Weapons";
			treeNode8->Name = L"HWPs";
			treeNode8->Text = L"HWPs";
			treeNode9->Name = L"One Handed";
			treeNode9->Text = L"One Handed";
			treeNode10->Name = L"Two Handed";
			treeNode10->Text = L"Two Handed";
			treeNode11->Name = L"Grenade";
			treeNode11->Text = L"Grenade";
			treeNode12->Name = L"Miscellaneous";
			treeNode12->Text = L"Miscellaneous";
			treeNode13->Name = L"Weapons";
			treeNode13->Text = L"Weapons";
			treeNode14->Name = L"Corpse";
			treeNode14->Text = L"Corpse";
			treeNode15->Name = L"UFO components";
			treeNode15->Text = L"UFO components";
			treeNode16->Name = L"Items";
			treeNode16->Text = L"Items";
			treeNode17->Name = L"Inventories";
			treeNode17->Text = L"Inventories";
			treeNode18->Name = L"Terrains";
			treeNode18->Text = L"Terrains";
			treeNode19->Name = L"Deployments";
			treeNode19->Text = L"Deployments";
			treeNode20->Name = L"Maps";
			treeNode20->Text = L"Maps";
			treeNode21->Name = L"Armors";
			treeNode21->Text = L"Armors";
			treeNode22->Name = L"Xcom";
			treeNode22->Text = L"Xcom";
			treeNode23->Name = L"Alien";
			treeNode23->Text = L"Alien";
			treeNode24->Name = L"Units";
			treeNode24->Text = L"Units";
			treeNode25->Name = L"Alien Races";
			treeNode25->Text = L"Alien Races";
			treeNode26->Name = L"Research";
			treeNode26->Text = L"Research";
			treeNode27->Name = L"Manufacture";
			treeNode27->Text = L"Manufacture";
			treeNode28->Name = L"UFOPaedia Articles";
			treeNode28->Text = L"UFOPaedia Articles";
			treeNode29->Name = L"Starting Base";
			treeNode29->Text = L"Starting Base";
			treeNode30->Name = L"UFO flight paths";
			treeNode30->Text = L"UFO flight paths";
			treeNode31->Name = L"Equipment Levels";
			treeNode31->Text = L"Equipment Levels";
			treeNode32->Name = L"Alien Missions";
			treeNode32->Text = L"Alien Missions";
			treeNode33->Name = L"Misc";
			treeNode33->Text = L"Misc";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(17) {treeNode1, treeNode2, treeNode3, 
				treeNode6, treeNode16, treeNode17, treeNode20, treeNode21, treeNode24, treeNode25, treeNode26, treeNode27, treeNode28, treeNode29, 
				treeNode30, treeNode32, treeNode33});
			this->treeView1->Size = System::Drawing::Size(202, 485);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::treeView1_AfterSelect);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->optionsToolStripMenuItem, this->mapEditorToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(787, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->newToolStripMenuItem, 
				this->saveToolStripMenuItem, this->closeToolStripMenuItem, this->reloadToolStripMenuItem, this->saveToolStripMenuItem1, this->saveToolStripMenuItem2, 
				this->recentToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"Open";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Form1_Load);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			// 
			// reloadToolStripMenuItem
			// 
			this->reloadToolStripMenuItem->Name = L"reloadToolStripMenuItem";
			this->reloadToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->reloadToolStripMenuItem->Text = L"Revert";
			// 
			// saveToolStripMenuItem1
			// 
			this->saveToolStripMenuItem1->Name = L"saveToolStripMenuItem1";
			this->saveToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem1->Text = L"Save";
			// 
			// saveToolStripMenuItem2
			// 
			this->saveToolStripMenuItem2->Name = L"saveToolStripMenuItem2";
			this->saveToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem2->Text = L"Save As...";
			// 
			// recentToolStripMenuItem
			// 
			this->recentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripMenuItem2, 
				this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5});
			this->recentToolStripMenuItem->Name = L"recentToolStripMenuItem";
			this->recentToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->recentToolStripMenuItem->Text = L"Recent";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(83, 22);
			this->toolStripMenuItem2->Text = L"0:";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(83, 22);
			this->toolStripMenuItem3->Text = L"1:";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(83, 22);
			this->toolStripMenuItem4->Text = L"2:";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(83, 22);
			this->toolStripMenuItem5->Text = L"3:";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->undoToolStripMenuItem, 
				this->redoToolStripMenuItem, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, this->deleteToolStripMenuItem, 
				this->selectAllToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->selectAllToolStripMenuItem->Text = L"Select all";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->settingsToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// mapEditorToolStripMenuItem
			// 
			this->mapEditorToolStripMenuItem->Name = L"mapEditorToolStripMenuItem";
			this->mapEditorToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->mapEditorToolStripMenuItem->Text = L"Map Editor";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Filter";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(47, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 540);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(787, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkGray;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->ID, this->ItemName, 
				this->Value, this->Type, this->Sprite, this->Article});
			this->dataGridView1->Location = System::Drawing::Point(220, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(555, 510);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 43;
			// 
			// ItemName
			// 
			this->ItemName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->ItemName->FillWeight = 150;
			this->ItemName->HeaderText = L"Name";
			this->ItemName->Name = L"ItemName";
			// 
			// Value
			// 
			this->Value->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Value->HeaderText = L"Value";
			this->Value->Name = L"Value";
			this->Value->Width = 59;
			// 
			// Type
			// 
			this->Type->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Type->HeaderText = L"Type";
			this->Type->Name = L"Type";
			this->Type->Width = 56;
			// 
			// Sprite
			// 
			this->Sprite->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Sprite->FillWeight = 150;
			this->Sprite->HeaderText = L"Sprite";
			this->Sprite->Name = L"Sprite";
			this->Sprite->Width = 150;
			// 
			// Article
			// 
			this->Article->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Article->FillWeight = 150;
			this->Article->HeaderText = L"Article";
			this->Article->Name = L"Article";
			this->Article->Width = 150;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 562);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"OXCTools";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
};
}

