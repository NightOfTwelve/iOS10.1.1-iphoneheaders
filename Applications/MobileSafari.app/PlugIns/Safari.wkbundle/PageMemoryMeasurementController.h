/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/PlugIns/Safari.wkbundle/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/MeasurementControllerBase.h>

@class NSTimer, NSArray;

@interface PageMemoryMeasurementController : MeasurementControllerBase {

	NSTimer* _waitForMemoryPressureHandler;
	NSArray* _pagesNeedingMemoryWarningSent;
	int _currentPageIndex;

}
-(id)initWithPluginPageContextController:(id)arg1 pagesNeedingMemoryWarningSent:(id)arg2 ;
-(void)_doBeforePageLoad;
-(void)_postPageLoadEnd;
-(id)_memoryUsage:(BOOL)arg1 ;
-(void)_waitForMemoryPressureHandlerTimerFired:(id)arg1 ;
@end

