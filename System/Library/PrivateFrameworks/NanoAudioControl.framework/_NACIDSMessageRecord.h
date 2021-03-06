/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable, NSString;

@interface _NACIDSMessageRecord : NSObject {

	PBCodable* _message;
	long long _type;
	double _timeout;
	NSString* _queueOne;

}

@property (nonatomic,retain) PBCodable * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * queueOne;                //@synthesize queueOne=_queueOne - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setMessage:(PBCodable *)arg1 ;
-(PBCodable *)message;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(NSString *)queueOne;
-(void)setQueueOne:(NSString *)arg1 ;
@end

