/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer {

	void* _observer;

}

@property (readonly) void* observer;              //@synthesize observer=_observer - In the implementation block
+(Class)childClass;
-(void)find:(SCD_Struct_CF10*)arg1 ;
-(id)initWithObserver:(void*)arg1 parent:(id)arg2 ;
-(void)resetObserverAndChildren:(void*)arg1 ;
-(void*)key;
-(void*)observer;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void)match:(SCD_Struct_CF10*)arg1 ;
@end

