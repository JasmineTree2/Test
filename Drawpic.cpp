// Drawpic.cpp : implementation file
//

#include "stdafx.h"
#include "Jie.h"
#include "Drawpic.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
extern CString content,Draw;
extern int a2[10],b2[10],c2[3][2];
/////////////////////////////////////////////////////////////////////////////
// Drawpic

IMPLEMENT_DYNCREATE(Drawpic, CView)

Drawpic::Drawpic()
{
}

Drawpic::~Drawpic()
{
}


BEGIN_MESSAGE_MAP(Drawpic, CView)
	//{{AFX_MSG_MAP(Drawpic)
	ON_WM_PAINT()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Drawpic drawing

void Drawpic::OnDraw(CDC* pDC)
{
	//CDocument* pDoc = GetDocument();
	UpdateWindow();
	CDocument* pDoc = GetDocument();
CRect rect;
	this->GetClientRect(rect);
	pDC->FillSolidRect(&rect,RGB(255,255,255));

CPoint pts2[10]={CPoint(100,100),CPoint(300,100),CPoint(500,100),CPoint(700,100),CPoint(900,100),CPoint(100,300),CPoint(300,300),CPoint(500,300),CPoint(700,300),CPoint(900,300)};

if(content!="")
{   
	j=strlen(Draw);
	for(i=0;i<j;i++)
{  s1=Draw.GetAt(i);
	if(s1==" ")
	{  
	      c[d]=i;//记录空格位置
           d++;//记录空格数量
	}
}

	for(i=0;i<d-1;i++)
	pDC->Ellipse(pts2[i].x+60,pts2[i].y+60,pts2[i].x-60,pts2[i].y-60);
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// Drawpic diagnostics

#ifdef _DEBUG
void Drawpic::AssertValid() const
{
	CView::AssertValid();
}

void Drawpic::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// Drawpic message handlers

void Drawpic::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CDC* pDC=GetDC();
    OnDraw(pDC);
	// TODO: Add your message handler code here	
	// Do not call CView::OnPaint() for painting messages
}

void Drawpic::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

Drawpic::Max(int m, int n)
{
if(m>=n)
return m;
else
return n;
}

void Drawpic::Panbie(CString s, int y)
{
int i,j,k,d=0,m=0;
CString s1;
j=strlen(s)/2;
c2[3][2]=(0,0,0,0,0,0);
for(i=0;i<j;i++)
{s1=s.GetAt(2*i);
 a2[i]=atoi(s1);
s1=s.GetAt(2*i+1);
if(s1=="A")
b2[i]=10;
 else b2[i]=atoi(s1);
}

for(i=0;i<j;i++)
{if(b2[i]>y)
{
for(k=j-1;k>i;k--)
{if(b2[i]==b2[k])
{   c2[d][m]=a2[i];
     m++;
    c2[d][m]=a2[k];
     m=0;
	 d++;
	b2[i]=a2[k];
}
}
}
}
if(d!=0&&a2[3]>b2[0]&&b2[2]>y)
{
a2[2]=a2[3];
b2[2]=b2[3];
}
}
