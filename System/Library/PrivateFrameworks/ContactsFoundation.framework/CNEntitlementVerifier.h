/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@interface CNEntitlementVerifier : NSObject
+(BOOL)secTask:(SecTaskRef)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)auditToken:(SCD_Struct_CN1)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3 ;
+(BOOL)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2 ;
@end
