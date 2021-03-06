#ifndef VIDEOPROCESSTRACKVIEW_H
#define VIDEOPROCESSTRACKVIEW_H
/************************************************************************/
/*               Video processing window for loop detector, show when in 
/*               detection and tracking model
/* FileName    : D:\liye_360syn\syn_develop\tjems2\tjems2\videoprocesstrackview.h
/* Description : 
/* Author      : Liye Zhang, during study and work in China, USA and Singapore
/* Email       : chinazhangly@126.com 
/* Date        : 2015/01/17
/* Copyright   : all right reserved
/*
/*------------------------------------------------------------------------------
/* Copyright Details:
/*
/* This program is developed as part of the results of Liye Zhang's PhD dissertation
/* from Zhong-Ren Peng's research group, Tongji University, China.
/* All the source code and related documents can only be copied or modified with the
/* permission of Liye Zhang.
/*
/* It is mainly developed during 2011-2015 in Univeristy of Florida, USA and Tongji
/* University, and University of Singapore.
/*                                                              
/************************************************************************/
#include "pub.h"
#include "videoviewbase.h"

class VideoSemiTrackView : public VideoViewBase
{
	Q_OBJECT

public:
	VideoSemiTrackView(QWidget *parent);
	~VideoSemiTrackView();

	void keyPressMoveon( QKeyEvent *keyEvent);

public slots:
	/************************************************************************/
	/* function    : for time auto invoce action or single step video processing
	/* parameter   : customStep- custom frame sampling step; 
	/*               ifShowCorelateInf - if show rate value in main window log
	/************************************************************************/
	void actNextFrame(int customStep=-1, bool ifShowCorelateInf=false );
		
	void actStartProcessing();
	void actPauseProcessing();
	void actEndProcessing();

public:
	VideoFrameItem *mVideoImageItemBackGround;    //back ground image	
	BackgroundSubtractorMOG2 *mBkSubtracktor;
};

#endif // VIDEOPROCESSTRACKVIEW_H
