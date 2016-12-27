/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIVisualEffectView.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKUITintColorUpdateDelegate;
@class TintColorUpdateView, NSObject;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {

	TintColorUpdateView* _updateView;
	NSObject*<EKUITintColorUpdateDelegate> _tintColorDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKUITintColorUpdateDelegate> tintColorDelegate;              //@synthesize tintColorDelegate=_tintColorDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(NSObject*<EKUITintColorUpdateDelegate>)tintColorDelegate;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(void)setTintColorDelegate:(NSObject*<EKUITintColorUpdateDelegate>)arg1 ;
@end
