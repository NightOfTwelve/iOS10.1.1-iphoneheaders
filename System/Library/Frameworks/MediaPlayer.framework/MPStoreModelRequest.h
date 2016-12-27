/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPStoreUserEnvironment;

@interface MPStoreModelRequest : MPModelRequest {

	BOOL _didSetTimeoutInterval;
	MPStoreUserEnvironment* _userEnvironment;
	double _timeoutInterval;

}

@property (nonatomic,copy) MPStoreUserEnvironment * userEnvironment;              //@synthesize userEnvironment=_userEnvironment - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(MPStoreUserEnvironment *)userEnvironment;
-(void)setUserEnvironment:(MPStoreUserEnvironment *)arg1 ;
@end
