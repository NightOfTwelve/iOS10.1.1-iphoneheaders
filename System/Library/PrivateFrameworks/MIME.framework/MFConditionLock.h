/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSConditionLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)unlock;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3 ;
@end

