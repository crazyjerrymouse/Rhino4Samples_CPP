////////////////////////////////////////////////////////////////////////////////////
// MyRhinoDockBar.h : our dockbar class, derived from CRhinoUiDockBar
//


#pragma once

#include "Resource.h"
#include "MyRhinoDockBarDialog.h"


class CMyRhinoDockBar : public CRhinoUiDockBar
{

	DECLARE_SERIAL(CMyRhinoDockBar)


public:

////////////////////////////////////////////////////////////////////////////////////
// constructor/destructor
//
	CMyRhinoDockBar(void);
	~CMyRhinoDockBar(void);
//
// end constructor/destructor
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// required overrides
//
	UUID DockBarID() const;
	const wchar_t* DockBarName(int language_id = 1033) const;
//
// end required overrides
////////////////////////////////////////////////////////////////////////////////////
 

protected:

////////////////////////////////////////////////////////////////////////////////////
// create child controls
//
	bool CreateDockBarControls();
//
// end create child controls
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// event handling
//
	DECLARE_MESSAGE_MAP();
//
// end event handling
////////////////////////////////////////////////////////////////////////////////////


};



//
// end MyRhinoDockBar.h
////////////////////////////////////////////////////////////////////////////////////
