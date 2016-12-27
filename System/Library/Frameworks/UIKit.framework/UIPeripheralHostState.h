/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary;

@interface UIPeripheralHostState : NSObject {

	UIPeripheralAnimationGeometry _geometry;
	NSDictionary* _screenGeometry;
	BOOL _inPositionIsDestination;

}

@property (assign,nonatomic) UIPeripheralAnimationGeometry geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) NSDictionary * screenGeometry;                       //@synthesize screenGeometry=_screenGeometry - In the implementation block
@property (assign,nonatomic) BOOL inPositionIsDestination;                        //@synthesize inPositionIsDestination=_inPositionIsDestination - In the implementation block
+(id)stateWithGeometry:(UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(BOOL)arg2 ;
-(void)dealloc;
-(UIPeripheralAnimationGeometry)geometry;
-(void)setGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setInPositionIsDestination:(BOOL)arg1 ;
-(void)setScreenGeometry:(NSDictionary *)arg1 ;
-(NSDictionary *)screenGeometry;
-(BOOL)inPositionIsDestination;
@end
