/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF7* _children;

}
+(Class)childClass;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF1*)arg2 ;
-(void)resetChildren;
-(void)dealloc;
-(void)invalidate;
-(void)removeChild:(id)arg1 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)addChild:(id)arg1 ;
@end
