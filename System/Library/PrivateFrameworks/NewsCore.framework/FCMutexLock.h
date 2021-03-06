/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCLocking.h>

@interface FCMutexLock : NSObject <FCLocking> {

	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)performWithLockSync:(/*^block*/id)arg1 ;
@end

