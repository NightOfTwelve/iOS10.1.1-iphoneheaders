/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSgPTPTime : NSObject {

	unsigned _nanoseconds;
	unsigned long long _seconds;

}

@property (assign,nonatomic) unsigned long long seconds;                                  //@synthesize seconds=_seconds - In the implementation block
@property (assign,nonatomic) unsigned nanoseconds;                                        //@synthesize nanoseconds=_nanoseconds - In the implementation block
@property (assign,nonatomic) unsigned long long nanoseconds64Representation; 
-(unsigned long long)seconds;
-(void)setSeconds:(unsigned long long)arg1 ;
-(void)setNanoseconds:(unsigned)arg1 ;
-(unsigned)nanoseconds;
-(unsigned long long)nanoseconds64Representation;
-(void)setNanoseconds64Representation:(unsigned long long)arg1 ;
@end

