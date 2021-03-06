///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __ui__
#define __ui__

#include <wx/cshelp.h>
#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/listctrl.h>
#include <wx/button.h>
#include <wx/radiobut.h>
#include <wx/dialog.h>
#include <wx/filepicker.h>
#include <wx/checklst.h>
#include <wx/gauge.h>
#include <wx/treectrl.h>
#include <wx/notebook.h>
#include <wx/splitter.h>

///////////////////////////////////////////////////////////////////////////

namespace ui
{
	///////////////////////////////////////////////////////////////////////////////
	/// Class ObjectPanel
	///////////////////////////////////////////////////////////////////////////////
	class ObjectPanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* lblName;
			wxTextCtrl* m_textCtrlName;
			wxStaticText* lblInherits;
			wxChoice* m_choiceInheritsFrom;
		
		public:
			ObjectPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,80 ), long style = wxTAB_TRAVERSAL );
			~ObjectPanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class RelatePanel
	///////////////////////////////////////////////////////////////////////////////
	class RelatePanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* lblName;
			wxTextCtrl* m_textCtrlName;
			wxStaticText* lblrelatedObject;
			wxChoice* m_choiceRelatedObject;
			wxStaticText* lblLimit;
			wxChoice* m_choiceLimit;
		
		public:
			RelatePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 457,202 ), long style = wxTAB_TRAVERSAL );
			~RelatePanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class FieldPanel
	///////////////////////////////////////////////////////////////////////////////
	class FieldPanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* lblName;
			wxTextCtrl* m_textCtrlName;
			wxStaticText* lblFieldtype;
			wxChoice* m_choiceFieldtype;
			wxStaticText* lblDefault;
			wxTextCtrl* m_textCtrlDefaultValue;
			wxStaticText* lblIndexed;
			wxCheckBox* m_checkBoxIndexed;
			wxStaticText* lblUnique;
			wxCheckBox* m_checkBoxUnique;
			wxStaticText* lblValues;
			wxListCtrl* m_listValues;
			wxStaticText* m_staticText20;
			wxButton* m_btnAdd;
			wxButton* m_btnRemove;
			
			// Virtual event handlers, overide them in your derived class
			virtual void OnAddValue( wxCommandEvent& event ){ event.Skip(); }
			virtual void OnRemoveValue( wxCommandEvent& event ){ event.Skip(); }
			
		
		public:
			FieldPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 498,302 ), long style = wxTAB_TRAVERSAL );
			~FieldPanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class MethodPanel
	///////////////////////////////////////////////////////////////////////////////
	class MethodPanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* lblName;
			wxTextCtrl* m_textCtrlName;
			wxStaticText* lblReturnValue;
			wxChoice* m_choiceReturnValue;
			wxStaticText* lblParameters;
			wxListCtrl* m_listCtrlParameters;
		
		public:
			MethodPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,271 ), long style = wxTAB_TRAVERSAL );
			~MethodPanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class RelationPanel
	///////////////////////////////////////////////////////////////////////////////
	class RelationPanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* lblName;
			wxTextCtrl* m_textCtrlName;
			wxStaticText* lblObject1;
			wxRadioButton* m_radioBtn1;
		
		public:
			RelationPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 318,120 ), long style = wxTAB_TRAVERSAL );
			~RelationPanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class DatabasePanel
	///////////////////////////////////////////////////////////////////////////////
	class DatabasePanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* m_staticName;
			wxTextCtrl* m_textName;
			wxStaticText* m_staticNamespace;
			wxTextCtrl* m_textNamespace;
			wxStaticText* m_staticInclude;
			wxTextCtrl* m_textInclude;
		
		public:
			DatabasePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 427,277 ), long style = wxTAB_TRAVERSAL );
			~DatabasePanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class AboutDialog
	///////////////////////////////////////////////////////////////////////////////
	class AboutDialog : public wxDialog 
	{
		private:
		
		protected:
			wxStaticText* m_staticText4;
			wxStaticText* m_staticText5;
			wxButton* m_btnClose;
		
		public:
			AboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 345,320 ), long style = wxDEFAULT_DIALOG_STYLE );
			~AboutDialog();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class GeneratePanel
	///////////////////////////////////////////////////////////////////////////////
	class GeneratePanel : public wxPanel 
	{
		private:
		
		protected:
			wxStaticText* m_staticOutputDir;
			wxDirPickerCtrl* m_dirPickerOutputDir;
			wxStaticText* m_staticGenerators;
			wxCheckListBox* m_checkListGenerators;
			wxButton* m_buttonRun;
			wxGauge* m_gaugeRunProgress;
			
			// Virtual event handlers, overide them in your derived class
			virtual void OnRunClick( wxCommandEvent& event ){ event.Skip(); }
			
		
		public:
			GeneratePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,210 ), long style = wxTAB_TRAVERSAL );
			~GeneratePanel();
		
	};
	
	///////////////////////////////////////////////////////////////////////////////
	/// Class ModelTreePanel
	///////////////////////////////////////////////////////////////////////////////
	class ModelTreePanel : public wxPanel 
	{
		private:
		
		protected:
			wxSplitterWindow* m_mainSplitter;
			wxPanel* m_treePanel;
			wxTreeCtrl* m_modelTreeCtrl;
			wxPanel* m_detailPanel;
			wxNotebook* m_detailNotebook;
			
			// Virtual event handlers, overide them in your derived class
			virtual void OnTreeDeleteItem( wxTreeEvent& event ){ event.Skip(); }
			virtual void OnTreeItemActivated( wxTreeEvent& event ){ event.Skip(); }
			virtual void OnTreeItemGetTooltip( wxTreeEvent& event ){ event.Skip(); }
			virtual void OnTreeItemMenu( wxTreeEvent& event ){ event.Skip(); }
			virtual void OnTreeSelChanged( wxTreeEvent& event ){ event.Skip(); }
			virtual void OnTreeSelChanging( wxTreeEvent& event ){ event.Skip(); }
			
		
		public:
			ModelTreePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 952,547 ), long style = wxTAB_TRAVERSAL );
			~ModelTreePanel();
			void m_mainSplitterOnIdle( wxIdleEvent& )
			{
			m_mainSplitter->SetSashPosition( 0 );
			m_mainSplitter->Disconnect( wxEVT_IDLE, wxIdleEventHandler( ModelTreePanel::m_mainSplitterOnIdle ), NULL, this );
			}
			
		
	};
	
} // namespace ui

#endif //__ui__
