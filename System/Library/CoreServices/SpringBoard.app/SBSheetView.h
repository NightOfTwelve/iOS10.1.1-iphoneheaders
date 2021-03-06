/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBProxyRemoteView, SBApplication;

@interface SBSheetView : UIView {

	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	BOOL _wasPresentedAnimated;

}
-(void)noteSheetDidEnd;
-(id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(BOOL)arg3 ;
-(BOOL)wasPresentedAnimated;
-(id)application;
-(id)remoteViewIdentifier;
@end

