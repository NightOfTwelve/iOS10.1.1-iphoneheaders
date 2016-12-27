/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <UIKit/UIKit-Structs.h>
@class UIGraphicsRendererFormat, NSMutableSet, NSObject;

@interface UIGraphicsRenderer : NSObject {

	UIGraphicsRendererFormat* _format;
	NSMutableSet* _reuseSet;
	NSObject*<OS_dispatch_queue> _reuseAccessQueue;

}

@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL allowsImageOutput; 
+(void)initialize;
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(BOOL)_supportsContextReuse;
+(Class)rendererContextClass;
+(CGContextRef)_contextWithFormat:(id)arg1 renderer:(id)arg2 ;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
+(void)_destroyCGContext:(CGContextRef)arg1 withRenderer:(id)arg2 ;
+(void)__applicationDidEnterBackground:(id)arg1 ;
+(void)__applicationWillEnterForeground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)pushContext:(id)arg1 ;
-(void)popContext:(id)arg1 ;
-(UIGraphicsRendererFormat *)format;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(id)_dequeuePointerForReuse;
-(void)_preparePointerForReuse:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)_configureReuseState;
-(void)_disposeReusePool;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 format:(id)arg3 error:(id*)arg4 ;
-(BOOL)allowsImageOutput;
-(void)_disposeReusedPointer:(id)arg1 ;
-(id)initWithFormat:(id)arg1 bounds:(CGRect)arg2 ;
-(BOOL)runDrawingActions:(/*^block*/id)arg1 completionActions:(/*^block*/id)arg2 error:(id*)arg3 ;
@end
