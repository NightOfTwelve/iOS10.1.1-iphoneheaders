/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(void)dealloc;
-(id<CMOdometerDelegate>)delegate;
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
@end

