/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIWindow;

@interface UISpringBoardHostedView : UIView {

	NSString* _remoteViewIdentifier;
	UIWindow* _remoteWindow;
	BOOL _remoteViewOpaque;

}
-(void)dealloc;
-(void)unregister;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(void)registerWithIdentifier:(id)arg1 andController:(id)arg2 ;
-(id)remoteViewIdentifier;
@end
