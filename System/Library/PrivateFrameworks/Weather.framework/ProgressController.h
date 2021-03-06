/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface ProgressController : NSObject {

	BOOL _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)suspend;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)userScrolled;
-(void)setLoadingData:(BOOL)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
@end

